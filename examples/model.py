from catboost import CatBoostRegressor
import os


def load_model():
    model = CatBoostRegressor()
    model.load_model(r"models\catHousesMark")

    return model