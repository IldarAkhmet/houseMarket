#pragma once
#include<windows.h>
#include<sql.h>
#include<sqlext.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class DB
{

public:
    DB() {};

    SqlConnection^ conn;
    SqlConnectionStringBuilder^ connStringBuilder;

    void ConnectToDB() {
        // Создаем подключение к базе данных
        // Data Source=DESKTOP-6QNCRNL\MSSQLSERVERR;Initial Catalog=usersCpp;Integrated Security=True;Trust Server Certificate=True

        connStringBuilder = gcnew SqlConnectionStringBuilder();
        connStringBuilder->DataSource = "DESKTOP-6QNCRNL\\MSSQLSERVERR";
        connStringBuilder->InitialCatalog = "usersCpp";
        connStringBuilder->IntegratedSecurity = true;

        conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
    }
};

