#pragma once

namespace CurseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider3;
	private: System::Diagnostics::EventLog^ eventLog1;
	private: System::Diagnostics::EventLog^ eventLog2;
	private: System::Windows::Forms::PrintDialog^ printDialog1;

	private: System::Windows::Forms::TextBox^ textBox20;

	private: System::Windows::Forms::TextBox^ textBox18;

	private: System::Windows::Forms::TextBox^ textBox16;

	private: System::Windows::Forms::TextBox^ textBox14;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox4;



	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox22;
	public: System::Windows::Forms::Label^ label2;
	private:
	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox7;
	public:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Label^ label11;
	private:
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button1;

	public:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->eventLog2 = (gcnew System::Diagnostics::EventLog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog2))->BeginInit();
			this->SuspendLayout();
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// errorProvider3
			// 
			this->errorProvider3->ContainerControl = this;
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// eventLog2
			// 
			this->eventLog2->SynchronizingObject = this;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox4->Location = System::Drawing::Point(228, 140);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(395, 26);
			this->textBox4->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox6->Location = System::Drawing::Point(228, 114);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(395, 26);
			this->textBox6->TabIndex = 8;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox8->Location = System::Drawing::Point(228, 88);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(395, 26);
			this->textBox8->TabIndex = 10;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox10->Location = System::Drawing::Point(228, 62);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(395, 26);
			this->textBox10->TabIndex = 12;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(228, 36);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(395, 26);
			this->textBox11->TabIndex = 13;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox12->Location = System::Drawing::Point(228, 244);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(395, 26);
			this->textBox12->TabIndex = 14;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox14->Location = System::Drawing::Point(228, 270);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox14->Size = System::Drawing::Size(395, 31);
			this->textBox14->TabIndex = 16;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox16->Location = System::Drawing::Point(228, 192);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(395, 26);
			this->textBox16->TabIndex = 18;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox18->Location = System::Drawing::Point(228, 218);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(395, 26);
			this->textBox18->TabIndex = 20;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox20->Location = System::Drawing::Point(228, 166);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(395, 26);
			this->textBox20->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(145, 417);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 23;
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox22->Location = System::Drawing::Point(228, 296);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(395, 26);
			this->textBox22->TabIndex = 25;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox22_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(8, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 19);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Билет №";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(8, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 19);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Фамилия читателя";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(8, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 19);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Имя читателя";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(9, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 19);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Отчество читателя(если есть)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(9, 169);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 19);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Дата рождения";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(9, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 19);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Адрес";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(9, 222);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 19);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Категория читателя";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(8, 244);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 19);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Группа";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(8, 273);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 19);
			this->label10->TabIndex = 34;
			this->label10->Text = L"Курс";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(9, 299);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 19);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Факультет";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox1->Location = System::Drawing::Point(228, 374);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(395, 26);
			this->textBox1->TabIndex = 36;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox2->Location = System::Drawing::Point(228, 348);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(395, 26);
			this->textBox2->TabIndex = 37;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox3->Location = System::Drawing::Point(228, 322);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(395, 26);
			this->textBox3->TabIndex = 38;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->textBox7->Location = System::Drawing::Point(228, 400);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(395, 26);
			this->textBox7->TabIndex = 40;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(8, 325);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(114, 19);
			this->label12->TabIndex = 41;
			this->label12->Text = L"Специальность";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(9, 351);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(121, 19);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Форма обучения";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(9, 377);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(131, 19);
			this->label14->TabIndex = 43;
			this->label14->Text = L"Дата регистрации";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Location = System::Drawing::Point(9, 403);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(113, 19);
			this->label15->TabIndex = 44;
			this->label15->Text = L"Штриховой код";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(9, 143);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(173, 19);
			this->label16->TabIndex = 45;
			this->label16->Text = L"Номер зачетной книжки";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(228, 498);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 36);
			this->button1->TabIndex = 46;
			this->button1->Text = L"Заменить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(397, 498);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 36);
			this->button2->TabIndex = 47;
			this->button2->Text = L"Регистрация";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(573, 498);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 36);
			this->button3->TabIndex = 48;
			this->button3->Text = L"Отмена";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 533);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->Enabled = false;
			this->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox21_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox22_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
