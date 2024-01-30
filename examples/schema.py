from pydantic import BaseModel # для валидации типов, перевод данных из бд в вид класса
from datetime import datetime


class Houses(BaseModel):
    index: int
    MSZoning: str
    LotFrontage: float
    LotArea: float
    Street: str
    LotShape: str
    LandContour: str
    Utilities: str
    LotConfig: str
    LandSlope: str
    Neighborhood: str
    Condition1: str
    Condition2: str
    BldgType: str
    HouseStyle: str
    OverallQual: float
    OverallCond: float
    YearBuilt: int
    YearRemodAdd: int
    RoofStyle: str
    RoofMatl: str
    Exterior1st: str
    Exterior2nd: str
    MasVnrType: str
    MasVnrArea: float
    ExterQual: str
    ExterCond: str
    Foundation: str
    BsmtQual: str
    BsmtCond: str
    BsmtExposure: str
    BsmtFinType1: str
    BsmtFinSF1: float
    BsmtFinType2: str
    BsmtUnfSF: float
    TotalBsmtSF: float
    Heating: str
    HeatingQC: str
    CentralAir: str
    Electrical: str
    FirstFlrSF: float
    SecondFlrSF: float
    GrLivArea: float
    BsmtFullBath: float
    BsmtHalfBath: float
    FullBath: float
    HalfBath: float
    BedroomAbvGr: float
    KitchenAbvGr: int
    KitchenQual: str
    TotRmsAbvGrd: int
    Functional: str
    Fireplaces: int
    GarageType: str
    GarageYrBlt: int
    GarageFinish: str
    GarageCars: int
    GarageArea: float
    GarageQual: str
    GarageCond: str
    PavedDrive: str
    WoodDeckSF: float
    OpenPorchSF: float
    EnclosedPorch: float
    PoolArea: int
    YrSold: int
    SaleType: str
    SaleCondition: str
    Id: int

    class Config:
        # указываем, чтобы данные рассматривались как orm
        orm_mode = True