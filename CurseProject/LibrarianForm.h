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
	public ref class LibrarianForm : public System::Windows::Forms::Form
	{
	public:
		LibrarianForm(void)
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
		~LibrarianForm()
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

	private: System::Windows::Forms::GroupBox^ groupBox1;



































	private: System::Windows::Forms::Button^ Rasskaz;

	private: System::Windows::Forms::Button^ Roman;

	private: System::Windows::Forms::Button^ Povest;
	private: System::Windows::Forms::Label^ Janr;
	private: System::Windows::Forms::Button^ Piesa;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LibrarianForm::typeid));
			this->ShowA = (gcnew System::Windows::Forms::Button());
			this->Dat = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Piesa = (gcnew System::Windows::Forms::Button());
			this->Skazka = (gcnew System::Windows::Forms::Button());
			this->Stih = (gcnew System::Windows::Forms::Button());
			this->Janr = (gcnew System::Windows::Forms::Label());
			this->Rasskaz = (gcnew System::Windows::Forms::Button());
			this->Roman = (gcnew System::Windows::Forms::Button());
			this->Povest = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ShowA
			// 
			this->ShowA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ShowA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ShowA->Location = System::Drawing::Point(373, 27);
			this->ShowA->Margin = System::Windows::Forms::Padding(4);
			this->ShowA->Name = L"ShowA";
			this->ShowA->Size = System::Drawing::Size(183, 47);
			this->ShowA->TabIndex = 0;
			this->ShowA->Text = L"Стеллаж";
			this->ShowA->UseVisualStyleBackColor = true;
			this->ShowA->Click += gcnew System::EventHandler(this, &LibrarianForm::ShowL_Click);
			// 
			// Dat
			// 
			this->Dat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Dat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Dat->Location = System::Drawing::Point(13, 27);
			this->Dat->Margin = System::Windows::Forms::Padding(4);
			this->Dat->Name = L"Dat";
			this->Dat->Size = System::Drawing::Size(199, 47);
			this->Dat->TabIndex = 1;
			this->Dat->Text = L"Отправить книги в библиотеку";
			this->Dat->UseVisualStyleBackColor = true;
			this->Dat->Click += gcnew System::EventHandler(this, &LibrarianForm::Dat_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Linen;
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
			this->dataGridView1->Location = System::Drawing::Point(13, 82);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->Size = System::Drawing::Size(543, 314);
			this->dataGridView1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(416, 545);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 41);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LibrarianForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->Piesa);
			this->groupBox1->Controls->Add(this->Skazka);
			this->groupBox1->Controls->Add(this->Stih);
			this->groupBox1->Controls->Add(this->Janr);
			this->groupBox1->Controls->Add(this->Rasskaz);
			this->groupBox1->Controls->Add(this->Roman);
			this->groupBox1->Controls->Add(this->Povest);
			this->groupBox1->ForeColor = System::Drawing::Color::Linen;
			this->groupBox1->Location = System::Drawing::Point(13, 404);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(543, 133);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление книги";
			// 
			// Piesa
			// 
			this->Piesa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Piesa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Piesa->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Piesa->Location = System::Drawing::Point(375, 79);
			this->Piesa->Margin = System::Windows::Forms::Padding(4);
			this->Piesa->Name = L"Piesa";
			this->Piesa->Size = System::Drawing::Size(140, 37);
			this->Piesa->TabIndex = 6;
			this->Piesa->Text = L"Пьеса";
			this->Piesa->UseVisualStyleBackColor = true;
			this->Piesa->Click += gcnew System::EventHandler(this, &LibrarianForm::Piesa_Click);
			// 
			// Skazka
			// 
			this->Skazka->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Skazka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Skazka->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Skazka->Location = System::Drawing::Point(85, 79);
			this->Skazka->Margin = System::Windows::Forms::Padding(4);
			this->Skazka->Name = L"Skazka";
			this->Skazka->Size = System::Drawing::Size(122, 37);
			this->Skazka->TabIndex = 5;
			this->Skazka->Text = L"Сказка";
			this->Skazka->UseVisualStyleBackColor = true;
			this->Skazka->Click += gcnew System::EventHandler(this, &LibrarianForm::Skazka_Click);
			// 
			// Stih
			// 
			this->Stih->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stih->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Stih->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Stih->Location = System::Drawing::Point(215, 79);
			this->Stih->Margin = System::Windows::Forms::Padding(4);
			this->Stih->Name = L"Stih";
			this->Stih->Size = System::Drawing::Size(152, 37);
			this->Stih->TabIndex = 4;
			this->Stih->Text = L"Стихотворение";
			this->Stih->UseVisualStyleBackColor = true;
			this->Stih->Click += gcnew System::EventHandler(this, &LibrarianForm::Stih_Click);
			// 
			// Janr
			// 
			this->Janr->AutoSize = true;
			this->Janr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Janr->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Janr->Location = System::Drawing::Point(8, 31);
			this->Janr->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Janr->Name = L"Janr";
			this->Janr->Size = System::Drawing::Size(63, 20);
			this->Janr->TabIndex = 3;
			this->Janr->Text = L"Жанр:";
			// 
			// Rasskaz
			// 
			this->Rasskaz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Rasskaz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Rasskaz->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Rasskaz->Location = System::Drawing::Point(375, 23);
			this->Rasskaz->Margin = System::Windows::Forms::Padding(4);
			this->Rasskaz->Name = L"Rasskaz";
			this->Rasskaz->Size = System::Drawing::Size(140, 37);
			this->Rasskaz->TabIndex = 2;
			this->Rasskaz->Text = L"Рассказ";
			this->Rasskaz->UseVisualStyleBackColor = true;
			this->Rasskaz->Click += gcnew System::EventHandler(this, &LibrarianForm::Rasskaz_Click);
			// 
			// Roman
			// 
			this->Roman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Roman->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Roman->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Roman->Location = System::Drawing::Point(215, 23);
			this->Roman->Margin = System::Windows::Forms::Padding(4);
			this->Roman->Name = L"Roman";
			this->Roman->Size = System::Drawing::Size(152, 37);
			this->Roman->TabIndex = 1;
			this->Roman->Text = L"Роман";
			this->Roman->UseVisualStyleBackColor = true;
			this->Roman->Click += gcnew System::EventHandler(this, &LibrarianForm::Roman_Click);
			// 
			// Povest
			// 
			this->Povest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Povest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Povest->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Povest->Location = System::Drawing::Point(85, 23);
			this->Povest->Margin = System::Windows::Forms::Padding(4);
			this->Povest->Name = L"Povest";
			this->Povest->Size = System::Drawing::Size(122, 37);
			this->Povest->TabIndex = 0;
			this->Povest->Text = L"Повесть";
			this->Povest->UseVisualStyleBackColor = true;
			this->Povest->Click += gcnew System::EventHandler(this, &LibrarianForm::Povest_Click);
			// 
			// LibrarianForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(562, 594);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Dat);
			this->Controls->Add(this->ShowA);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"LibrarianForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вы зашли как: Библиотекарь";
			this->Load += gcnew System::EventHandler(this, &LibrarianForm::LibrarianForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShowL_Click(System::Object^ sender, System::EventArgs^ e);
	private: void ShowLibrarian();
	private: void HeaderLibrarian();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e); // выход amdin
	private: System::Void Dat_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Povest_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Roman_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Rasskaz_Click(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void Stih_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void Piesa_Click(System::Object^ sender, System::EventArgs^ e); 
	private: System::Void Skazka_Click(System::Object^ sender, System::EventArgs^ e); 
private: void Show_Admin_retry();
	private: System::Void LibrarianForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
