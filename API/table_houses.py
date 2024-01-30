from database import Base
from sqlalchemy import Column
from sqlalchemy.types import Integer, String, Float


class Hous(Base):
    __tablename__ = 'data_houses'
    __table_args_ = {'schema': 'public'}

    index = Column(Integer, primary_key=True)
    MSZoning = Column(String)
    LotFrontage = Column(Float)
    LotArea = Column(Float)
    Street = Column(String)
    LotShape = Column(String)
    LandContour = Column(String)
    Utilities = Column(String)
    LotConfig = Column(String)
    LandSlope = Column(String)
    Neighborhood = Column(String)
    Condition1 = Column(String)
    Condition2 = Column(String)
    BldgType = Column(String)
    HouseStyle = Column(String)
    OverallQual = Column(Float)
    OverallCond = Column(Float)
    YearBuilt = Column(Integer)
    YearRemodAdd = Column(Integer)
    RoofStyle = Column(String)
    RoofMatl = Column(String)
    Exterior1st = Column(String)
    Exterior2nd = Column(String)
    MasVnrType = Column(String)
    MasVnrArea = Column(Float)
    ExterQual = Column(String)
    ExterCond = Column(String)
    Foundation = Column(String)
    BsmtQual = Column(String)
    BsmtCond = Column(String)
    BsmtExposure = Column(String)
    BsmtFinType1 = Column(String)
    BsmtFinSF1 = Column(Float)
    BsmtFinType2 = Column(String)
    BsmtUnfSF = Column(Float)
    TotalBsmtSF = Column(Float)
    Heating = Column(String)
    HeatingQC = Column(String)
    CentralAir = Column(String)
    Electrical = Column(String)
    FirstFlrSF = Column(Float)
    SecondFlrSF = Column(Float)
    GrLivArea = Column(Float)
    BsmtFullBath = Column(Float)
    BsmtHalfBath = Column(Float)
    FullBath = Column(Float)
    HalfBath = Column(Float)
    BedroomAbvGr = Column(Float)
    KitchenAbvGr = Column(Integer)
    KitchenQual = Column(String)
    TotRmsAbvGrd = Column(Integer)
    Functional = Column(String)
    Fireplaces = Column(Integer)
    GarageType = Column(String)
    GarageYrBlt = Column(Integer)
    GarageFinish = Column(String)
    GarageCars = Column(Integer)
    GarageArea = Column(Float)
    GarageQual = Column(String)
    GarageCond = Column(String)
    PavedDrive = Column(String)
    WoodDeckSF = Column(Float)
    OpenPorchSF = Column(Float)
    EnclosedPorch = Column(Float)
    PoolArea = Column(Integer)
    YrSold = Column(Integer)
    SaleType = Column(String)
    SaleCondition = Column(String)
    Id = Column(Integer)