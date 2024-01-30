from fastapi import FastAPI, Depends, HTTPException
from model import load_model
from database import engine, SessionLocal
import pandas as pd
from schema import Houses
from typing import List
import numpy as np
from table_houses import Hous


app = FastAPI()


def get_db():
    with SessionLocal() as db:
        return db

model = load_model()

data = pd.read_sql(
    "SELECT * "
    "FROM public.data_for_pred",
    engine
).set_index('index')

@app.get('/check')
def check_api() -> str:
    raise HTTPException(200, 'good job')

@app.get('/check/houses/{limit}', response_model=List[Houses])
def get_houses(limit: int = 1, db=Depends(get_db)) -> List[Houses]:
    query = db.query(Hous).limit(limit).all()

    if query:
        return query
    else:
        raise HTTPException(200, [])

@app.get('/check/house/{id}', response_model=List[Houses])
def get_houses(id: int = 0, db=Depends(get_db)) -> List[Houses]:
    query = db.query(Hous).filter(Hous.index == id).all()

    if query:
        return query
    else:
        raise HTTPException(200, [])

@app.get('/predict/{id}')
def predict_sale(id: int = 10):
    house = data.iloc[id]

    predict = model.predict(house)

    return np.expm1(predict)


