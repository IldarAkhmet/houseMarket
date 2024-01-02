#pragma once
#include"DB.h"
#include <vcclr.h>
#include<Windows.h>


namespace App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Registr
	/// </summary>
	public ref class Registr : public System::Windows::Forms::Form
	{
	public:
		Registr(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Registr()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registr::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(97, 470);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(229, 59);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Зарегистрироваться";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Registr::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(64, 80);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 56);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(64, 175);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 56);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(59, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 37);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Логин";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(59, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 37);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Пароль";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Registr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(425, 541);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Registr";
			this->Text = L"Registr";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		DB db;

		if (textBox1->Text != "" && textBox2->Text != "") {
			db.ConnectToDB();

			String^ checkQuery = "SELECT count(*) FROM dbo.HouseMarkUsers WHERE login = @login";
			SqlCommand^ cmd = gcnew SqlCommand(checkQuery, db.conn);

			cmd->Parameters->AddWithValue("@login", textBox1->Text);
			db.conn->Open();
			
			int count = (int)cmd->ExecuteScalar();

			db.conn->Close();

			if (count == 0) {
				try {
					db.ConnectToDB();

					String^ cmdText = "INSERT INTO dbo.HouseMarkUsers(login, password) VALUES(@login, @password)";
					SqlCommand^ cmd = gcnew SqlCommand(cmdText, db.conn);

					cmd->Parameters->AddWithValue("@login", textBox1->Text);
					cmd->Parameters->AddWithValue("@password", textBox2->Text);
					db.conn->Open();
					cmd->ExecuteNonQuery();

					this->Close();
				}
				finally {
					if (db.conn != nullptr) {
						db.conn->Close();
					}

				}
			}

			else {
				MessageBox::Show("Придумайте новый логин.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			
		}
		else {
			MessageBox::Show("Введите все данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		

	}
};
}
