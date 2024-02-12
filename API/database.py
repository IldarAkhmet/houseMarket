from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker


SQL_DATABASE_URL = r"postgresql://postgres:password@localhost/Houses"

engine = create_engine(SQL_DATABASE_URL) # движок базы данных алхимии
SessionLocal = sessionmaker(autocommit=False, autoflush=False, bind=engine) # фабрика сессий для взаимодействия с базой данных

Base = declarative_base() # задаем Base для определения моделей данных в алхимии

