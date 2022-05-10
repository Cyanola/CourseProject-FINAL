#pragma once

namespace CurseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;




	private:
	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::Label^ label14;


	private: System::Windows::Forms::TextBox^ textBox7;
	public:


	private:





	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label2;

	public:
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;



	private: System::Windows::Forms::GroupBox^ groupBox3;
	public:
	private: System::Windows::Forms::ListBox^ BookBox;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ ClearAddButton;
	private: System::Windows::Forms::CheckBox^ clearBool;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::ListBox^ ReaderBox;
	public: System::Windows::Forms::Label^ label8;

	public:

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Label^ label12;
	private:
	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ ShowStuds;
	public:
	private: System::Windows::Forms::ComboBox^ BookshelfBox;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ DeleteButton;
	private: System::Windows::Forms::Button^ EditButton;

	public:
	private:
	private:

	public:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->clearBool = (gcnew System::Windows::Forms::CheckBox());
			this->ReaderBox = (gcnew System::Windows::Forms::ListBox());
			this->ClearAddButton = (gcnew System::Windows::Forms::Button());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->BookBox = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->EditButton = (gcnew System::Windows::Forms::Button());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->ShowStuds = (gcnew System::Windows::Forms::Button());
			this->BookshelfBox = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ShowStuds);
			this->groupBox1->Controls->Add(this->BookshelfBox);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->BookBox);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(524, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(574, 791);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление книги";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Location = System::Drawing::Point(7, 221);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 22);
			this->label15->TabIndex = 78;
			this->label15->Text = L"Штриховой код";
			this->label15->UseWaitCursor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(7, 186);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(162, 22);
			this->label14->TabIndex = 77;
			this->label14->Text = L"Дата регистрации";
			this->label14->UseWaitCursor = true;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox7->Location = System::Drawing::Point(279, 221);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(183, 22);
			this->textBox7->TabIndex = 74;
			this->textBox7->UseWaitCursor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(7, 149);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(262, 22);
			this->label5->TabIndex = 65;
			this->label5->Text = L"Отчество читателя(если есть)";
			this->label5->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(7, 119);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 22);
			this->label4->TabIndex = 64;
			this->label4->Text = L"Имя читателя";
			this->label4->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(7, 87);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 22);
			this->label3->TabIndex = 63;
			this->label3->Text = L"Фамилия читателя";
			this->label3->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(7, 54);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 22);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Билет №";
			this->label2->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(189, 190);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 60;
			this->label1->UseWaitCursor = true;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(279, 52);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(183, 22);
			this->textBox11->TabIndex = 55;
			this->textBox11->UseWaitCursor = true;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox10->Location = System::Drawing::Point(279, 87);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(183, 22);
			this->textBox10->TabIndex = 54;
			this->textBox10->UseWaitCursor = true;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox8->Location = System::Drawing::Point(279, 119);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(183, 22);
			this->textBox8->TabIndex = 53;
			this->textBox8->UseWaitCursor = true;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox6->Location = System::Drawing::Point(277, 151);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(183, 22);
			this->textBox6->TabIndex = 52;
			this->textBox6->UseWaitCursor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(279, 190);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(183, 24);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->DeleteButton);
			this->groupBox2->Controls->Add(this->EditButton);
			this->groupBox2->Controls->Add(this->ClearAddButton);
			this->groupBox2->Controls->Add(this->clearBool);
			this->groupBox2->Controls->Add(this->AddButton);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 382);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(475, 421);
			this->groupBox2->TabIndex = 79;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Добавить читателя";
			// 
			// clearBool
			// 
			this->clearBool->AutoSize = true;
			this->clearBool->Checked = true;
			this->clearBool->CheckState = System::Windows::Forms::CheckState::Checked;
			this->clearBool->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->clearBool->Location = System::Drawing::Point(11, 261);
			this->clearBool->Name = L"clearBool";
			this->clearBool->Size = System::Drawing::Size(311, 24);
			this->clearBool->TabIndex = 79;
			this->clearBool->Text = L"Очищать форму при добавлении";
			this->clearBool->UseVisualStyleBackColor = true;
			// 
			// ReaderBox
			// 
			this->ReaderBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ReaderBox->FormattingEnabled = true;
			this->ReaderBox->ItemHeight = 20;
			this->ReaderBox->Location = System::Drawing::Point(12, 71);
			this->ReaderBox->Name = L"ReaderBox";
			this->ReaderBox->Size = System::Drawing::Size(475, 284);
			this->ReaderBox->TabIndex = 80;
			// 
			// ClearAddButton
			// 
			this->ClearAddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearAddButton->Location = System::Drawing::Point(420, 350);
			this->ClearAddButton->Name = L"ClearAddButton";
			this->ClearAddButton->Size = System::Drawing::Size(42, 71);
			this->ClearAddButton->TabIndex = 82;
			this->ClearAddButton->Text = L"#";
			this->ClearAddButton->UseVisualStyleBackColor = true;
			// 
			// AddButton
			// 
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddButton->Location = System::Drawing::Point(11, 291);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(449, 30);
			this->AddButton->TabIndex = 81;
			this->AddButton->Text = L"Добавить";
			this->AddButton->UseVisualStyleBackColor = true;
			// 
			// BookBox
			// 
			this->BookBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BookBox->FormattingEnabled = true;
			this->BookBox->ItemHeight = 20;
			this->BookBox->Location = System::Drawing::Point(6, 59);
			this->BookBox->Name = L"BookBox";
			this->BookBox->Size = System::Drawing::Size(562, 284);
			this->BookBox->TabIndex = 81;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(6, 370);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(562, 421);
			this->groupBox3->TabIndex = 82;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Добавить книгу";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm2::groupBox3_Enter);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(7, 89);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 22);
			this->label8->TabIndex = 63;
			this->label8->Text = L"Год издания";
			this->label8->UseWaitCursor = true;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm2::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(7, 52);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 22);
			this->label9->TabIndex = 64;
			this->label9->Text = L"Название";
			this->label9->UseWaitCursor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(7, 121);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 22);
			this->label10->TabIndex = 65;
			this->label10->Text = L"Автор";
			this->label10->UseWaitCursor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(7, 153);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(182, 22);
			this->label11->TabIndex = 66;
			this->label11->Text = L"Количество страниц";
			this->label11->UseWaitCursor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(7, 186);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 22);
			this->label12->TabIndex = 67;
			this->label12->Text = L"Жанр";
			this->label12->UseWaitCursor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(372, 54);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 22);
			this->textBox1->TabIndex = 68;
			this->textBox1->UseWaitCursor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(372, 186);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 22);
			this->textBox2->TabIndex = 69;
			this->textBox2->UseWaitCursor = true;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(372, 151);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 22);
			this->textBox3->TabIndex = 70;
			this->textBox3->UseWaitCursor = true;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(372, 121);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(183, 22);
			this->textBox4->TabIndex = 71;
			this->textBox4->UseWaitCursor = true;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(372, 89);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(183, 22);
			this->textBox5->TabIndex = 72;
			this->textBox5->UseWaitCursor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(531, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 41);
			this->button1->TabIndex = 85;
			this->button1->Text = L"#";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox1->Location = System::Drawing::Point(6, 261);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(311, 24);
			this->checkBox1->TabIndex = 83;
			this->checkBox1->Text = L"Очищать форму при добавлении";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(0, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(555, 30);
			this->button2->TabIndex = 84;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// EditButton
			// 
			this->EditButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->EditButton->Location = System::Drawing::Point(11, 350);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(195, 71);
			this->EditButton->TabIndex = 83;
			this->EditButton->Text = L"Изменить выбранного читателя\r\n\r\n";
			this->EditButton->UseVisualStyleBackColor = true;
			// 
			// DeleteButton
			// 
			this->DeleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DeleteButton->Location = System::Drawing::Point(225, 350);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(179, 71);
			this->DeleteButton->TabIndex = 84;
			this->DeleteButton->Text = L"Удалить выбранного читателя\r\n";
			this->DeleteButton->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button3->Location = System::Drawing::Point(6, 350);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(260, 52);
			this->button3->TabIndex = 86;
			this->button3->Text = L"Изменить выбранную книгу\r\n\r\n\r\n";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button4->Location = System::Drawing::Point(272, 350);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(252, 52);
			this->button4->TabIndex = 87;
			this->button4->Text = L"Удалить выбранную книгу\r\n\r\n";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// ShowStuds
			// 
			this->ShowStuds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ShowStuds->Location = System::Drawing::Point(366, 25);
			this->ShowStuds->Name = L"ShowStuds";
			this->ShowStuds->Size = System::Drawing::Size(115, 28);
			this->ShowStuds->TabIndex = 84;
			this->ShowStuds->Text = L"Показать";
			this->ShowStuds->UseVisualStyleBackColor = true;
			// 
			// BookshelfBox
			// 
			this->BookshelfBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BookshelfBox->FormattingEnabled = true;
			this->BookshelfBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"1 книжная полка", L"2 книжная полка", L"3 книжная полка",
					L"4 книжная полка"
			});
			this->BookshelfBox->Location = System::Drawing::Point(6, 26);
			this->BookshelfBox->Name = L"BookshelfBox";
			this->BookshelfBox->Size = System::Drawing::Size(354, 28);
			this->BookshelfBox->TabIndex = 83;
			this->BookshelfBox->Text = L"Выбрать книжную полку...";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1110, 815);
			this->Controls->Add(this->ReaderBox);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm2";
			this->Text = L"Вы вошли как: Администратор";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
