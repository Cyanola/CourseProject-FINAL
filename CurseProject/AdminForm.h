#pragma once

namespace CurseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: System::Windows::Forms::Button^ ShowA;
	protected:
	private: System::Windows::Forms::Button^ Dat;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ delete_;
	private: System::Windows::Forms::GroupBox^ groupBox1;


















	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;















	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ Rasskaz;

	private: System::Windows::Forms::Button^ Roman;

	private: System::Windows::Forms::Button^ Povest;
	private: System::Windows::Forms::Label^ Janr;
	private: System::Windows::Forms::Button^ Myth;
	private: System::Windows::Forms::Button^ Skazka;
	private: System::Windows::Forms::Button^ Stih;

















	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->ShowA = (gcnew System::Windows::Forms::Button());
			this->Dat = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->delete_ = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Myth = (gcnew System::Windows::Forms::Button());
			this->Skazka = (gcnew System::Windows::Forms::Button());
			this->Stih = (gcnew System::Windows::Forms::Button());
			this->Janr = (gcnew System::Windows::Forms::Label());
			this->Rasskaz = (gcnew System::Windows::Forms::Button());
			this->Roman = (gcnew System::Windows::Forms::Button());
			this->Povest = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// ShowA
			// 
			this->ShowA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ShowA->Location = System::Drawing::Point(572, 13);
			this->ShowA->Margin = System::Windows::Forms::Padding(4);
			this->ShowA->Name = L"ShowA";
			this->ShowA->Size = System::Drawing::Size(183, 47);
			this->ShowA->TabIndex = 0;
			this->ShowA->Text = L"Склад";
			this->ShowA->UseVisualStyleBackColor = true;
			this->ShowA->Click += gcnew System::EventHandler(this, &AdminForm::ShowA_Click);
			// 
			// Dat
			// 
			this->Dat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Dat->Location = System::Drawing::Point(572, 80);
			this->Dat->Margin = System::Windows::Forms::Padding(4);
			this->Dat->Name = L"Dat";
			this->Dat->Size = System::Drawing::Size(183, 47);
			this->Dat->TabIndex = 1;
			this->Dat->Text = L"Передать товары в магазин";
			this->Dat->UseVisualStyleBackColor = true;
			this->Dat->Click += gcnew System::EventHandler(this, &AdminForm::Dat_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->Size = System::Drawing::Size(543, 318);
			this->dataGridView1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(16, 489);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 27);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// delete_
			// 
			this->delete_->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_->Location = System::Drawing::Point(572, 152);
			this->delete_->Margin = System::Windows::Forms::Padding(4);
			this->delete_->Name = L"delete_";
			this->delete_->Size = System::Drawing::Size(183, 47);
			this->delete_->TabIndex = 5;
			this->delete_->Text = L"Удалить выбранный товар";
			this->delete_->UseVisualStyleBackColor = true;
			this->delete_->Click += gcnew System::EventHandler(this, &AdminForm::delete__Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Myth);
			this->groupBox1->Controls->Add(this->Skazka);
			this->groupBox1->Controls->Add(this->Stih);
			this->groupBox1->Controls->Add(this->Janr);
			this->groupBox1->Controls->Add(this->Rasskaz);
			this->groupBox1->Controls->Add(this->Roman);
			this->groupBox1->Controls->Add(this->Povest);
			this->groupBox1->Location = System::Drawing::Point(13, 342);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(481, 139);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление книги";
			// 
			// Myth
			// 
			this->Myth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Myth->Location = System::Drawing::Point(328, 88);
			this->Myth->Margin = System::Windows::Forms::Padding(4);
			this->Myth->Name = L"Myth";
			this->Myth->Size = System::Drawing::Size(140, 37);
			this->Myth->TabIndex = 6;
			this->Myth->Text = L"Миф";
			this->Myth->UseVisualStyleBackColor = true;
			this->Myth->Click += gcnew System::EventHandler(this, &AdminForm::Myth_Click);
			// 
			// Skazka
			// 
			this->Skazka->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Skazka->Location = System::Drawing::Point(12, 88);
			this->Skazka->Margin = System::Windows::Forms::Padding(4);
			this->Skazka->Name = L"Skazka";
			this->Skazka->Size = System::Drawing::Size(140, 37);
			this->Skazka->TabIndex = 5;
			this->Skazka->Text = L"Сказка";
			this->Skazka->UseVisualStyleBackColor = true;
			this->Skazka->Click += gcnew System::EventHandler(this, &AdminForm::Skazka_Click);
			// 
			// Stih
			// 
			this->Stih->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stih->Location = System::Drawing::Point(169, 88);
			this->Stih->Margin = System::Windows::Forms::Padding(4);
			this->Stih->Name = L"Stih";
			this->Stih->Size = System::Drawing::Size(140, 37);
			this->Stih->TabIndex = 4;
			this->Stih->Text = L"Стихотворение";
			this->Stih->UseVisualStyleBackColor = true;
			this->Stih->Click += gcnew System::EventHandler(this, &AdminForm::Stih_Click);
			// 
			// Janr
			// 
			this->Janr->AutoSize = true;
			this->Janr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Janr->Location = System::Drawing::Point(8, 19);
			this->Janr->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Janr->Name = L"Janr";
			this->Janr->Size = System::Drawing::Size(63, 20);
			this->Janr->TabIndex = 3;
			this->Janr->Text = L"Жанр:";
			// 
			// Rasskaz
			// 
			this->Rasskaz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Rasskaz->Location = System::Drawing::Point(328, 43);
			this->Rasskaz->Margin = System::Windows::Forms::Padding(4);
			this->Rasskaz->Name = L"Rasskaz";
			this->Rasskaz->Size = System::Drawing::Size(140, 37);
			this->Rasskaz->TabIndex = 2;
			this->Rasskaz->Text = L"Рассказ";
			this->Rasskaz->UseVisualStyleBackColor = true;
			this->Rasskaz->Click += gcnew System::EventHandler(this, &AdminForm::Rasskaz_Click);
			// 
			// Roman
			// 
			this->Roman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Roman->Location = System::Drawing::Point(169, 43);
			this->Roman->Margin = System::Windows::Forms::Padding(4);
			this->Roman->Name = L"Roman";
			this->Roman->Size = System::Drawing::Size(140, 37);
			this->Roman->TabIndex = 1;
			this->Roman->Text = L"Роман";
			this->Roman->UseVisualStyleBackColor = true;
			this->Roman->Click += gcnew System::EventHandler(this, &AdminForm::Roman_Click);
			// 
			// Povest
			// 
			this->Povest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Povest->Location = System::Drawing::Point(12, 43);
			this->Povest->Margin = System::Windows::Forms::Padding(4);
			this->Povest->Name = L"Povest";
			this->Povest->Size = System::Drawing::Size(140, 37);
			this->Povest->TabIndex = 0;
			this->Povest->Text = L"Повесть";
			this->Povest->UseVisualStyleBackColor = true;
			this->Povest->Click += gcnew System::EventHandler(this, &AdminForm::Povest_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(8, 23);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(175, 22);
			this->numericUpDown1->TabIndex = 7;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Location = System::Drawing::Point(572, 222);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(191, 58);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ввод id элемента";
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 521);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->delete_);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Dat);
			this->Controls->Add(this->ShowA);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(777, 568);
			this->MinimumSize = System::Drawing::Size(750, 568);
			this->Name = L"AdminForm";
			this->Text = L"Admin Console";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShowA_Click(System::Object^ sender, System::EventArgs^ e);
	private: void ShowAdmin();
	private: void HeaderAdmin();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e); // выход amdin
	private: System::Void Dat_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Povest_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Roman_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Rasskaz_Click(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void Stih_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void Myth_Click(System::Object^ sender, System::EventArgs^ e); private: System::Void delete__Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Skazka_Click(System::Object^ sender, System::EventArgs^ e); 
private: void Show_Admin_retry();
	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
