#pragma once
#include"DB.h"

namespace App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddHouse
	/// </summary>
	public ref class AddHouse : public System::Windows::Forms::Form
	{
	public:
		int pers_id;


		AddHouse(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		AddHouse(int pers_id) {
			InitializeComponent();

			this->pers_id = pers_id;
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddHouse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddHouse::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(107, 209);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 247);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 41);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(688, 755);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Разместить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddHouse::button1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(479, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 35);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Описание";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(398, 247);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(422, 442);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(868, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(260, 35);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Цена";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(908, 247);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(254, 41);
			this->textBox3->TabIndex = 6;
			// 
			// AddHouse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1568, 848);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddHouse";
			this->Text = L"AddHouse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ name = textBox1->Text;
			String^ descr = textBox2->Text;
			String^ price = textBox3->Text;

			//int^ price = System::Convert::ToInt32(price);

			DB db;

			db.ConnectToDB();

			String^ query = "INSERT INTO dbo.Houses(person_id, description, price, name) VALUES(@person_id, @description, @price, @name)";
			SqlCommand^ cmd = gcnew SqlCommand(query, db.conn);

			cmd->Parameters->AddWithValue("@name", name);
			cmd->Parameters->AddWithValue("@description", descr);
			cmd->Parameters->AddWithValue("@person_id", this->pers_id);
			cmd->Parameters->AddWithValue("@price", price);


			db.conn->Open();
			cmd->ExecuteNonQuery();
			db.conn->Close();
			this->Close();
		}
		catch (FormatException^ e) {
			//MessageBox::Show("Введите число в поле цены", "Предупреждение", MessageBoxIcon::Warning, MessageBoxButtons::OK);
		}
	}
};
}
