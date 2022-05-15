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
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;






	private:





	public:


	private:










	public:













	public:









	public:







	private:




	public:









	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ Rasskaz;
	private: System::Windows::Forms::Button^ Stih;


	private: System::Windows::Forms::Button^ Povest;
	private: System::Windows::Forms::Button^ Roman;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ Dat;
private: System::Windows::Forms::Button^ ShowA;
private: System::Windows::Forms::DataGridView^ dataGridView1;



	private:

	public:



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Rasskaz = (gcnew System::Windows::Forms::Button());
			this->Stih = (gcnew System::Windows::Forms::Button());
			this->Povest = (gcnew System::Windows::Forms::Button());
			this->Roman = (gcnew System::Windows::Forms::Button());
			this->Dat = (gcnew System::Windows::Forms::Button());
			this->ShowA = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(574, 586);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление книги";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &AdminForm::groupBox1_Enter);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Location = System::Drawing::Point(0, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(562, 315);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(460, 520);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 59);
			this->button1->TabIndex = 89;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Rasskaz);
			this->groupBox2->Controls->Add(this->Stih);
			this->groupBox2->Controls->Add(this->Povest);
			this->groupBox2->Controls->Add(this->Roman);
			this->groupBox2->Location = System::Drawing::Point(6, 347);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(562, 170);
			this->groupBox2->TabIndex = 88;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выберите жанр";
			// 
			// Rasskaz
			// 
			this->Rasskaz->Location = System::Drawing::Point(303, 97);
			this->Rasskaz->Name = L"Rasskaz";
			this->Rasskaz->Size = System::Drawing::Size(253, 55);
			this->Rasskaz->TabIndex = 92;
			this->Rasskaz->Text = L"Рассказ";
			this->Rasskaz->UseVisualStyleBackColor = true;
			this->Rasskaz->Click += gcnew System::EventHandler(this, &AdminForm::Rasskaz_Click);
			// 
			// Stih
			// 
			this->Stih->Location = System::Drawing::Point(303, 26);
			this->Stih->Name = L"Stih";
			this->Stih->Size = System::Drawing::Size(253, 51);
			this->Stih->TabIndex = 91;
			this->Stih->Text = L"Стихотворения";
			this->Stih->UseVisualStyleBackColor = true;
			this->Stih->Click += gcnew System::EventHandler(this, &AdminForm::Stih_Click);
			// 
			// Povest
			// 
			this->Povest->Location = System::Drawing::Point(6, 26);
			this->Povest->Name = L"Povest";
			this->Povest->Size = System::Drawing::Size(254, 51);
			this->Povest->TabIndex = 89;
			this->Povest->Text = L"Повесть";
			this->Povest->UseVisualStyleBackColor = true;
			this->Povest->Click += gcnew System::EventHandler(this, &AdminForm::Povest_Click);
			// 
			// Roman
			// 
			this->Roman->Location = System::Drawing::Point(6, 97);
			this->Roman->Name = L"Roman";
			this->Roman->Size = System::Drawing::Size(254, 55);
			this->Roman->TabIndex = 90;
			this->Roman->Text = L"Роман";
			this->Roman->UseVisualStyleBackColor = true;
			this->Roman->Click += gcnew System::EventHandler(this, &AdminForm::Roman_Click);
			// 
			// Dat
			// 
			this->Dat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Dat->Location = System::Drawing::Point(605, 129);
			this->Dat->Margin = System::Windows::Forms::Padding(4);
			this->Dat->Name = L"Dat";
			this->Dat->Size = System::Drawing::Size(242, 72);
			this->Dat->TabIndex = 3;
			this->Dat->Text = L"Передать товары в магазин";
			this->Dat->UseVisualStyleBackColor = true;
			this->Dat->Click += gcnew System::EventHandler(this, &AdminForm::Dat_Click);
			// 
			// ShowA
			// 
			this->ShowA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ShowA->Location = System::Drawing::Point(605, 38);
			this->ShowA->Margin = System::Windows::Forms::Padding(4);
			this->ShowA->Name = L"ShowA";
			this->ShowA->Size = System::Drawing::Size(242, 64);
			this->ShowA->TabIndex = 2;
			this->ShowA->Text = L"Склад";
			this->ShowA->UseVisualStyleBackColor = true;
			this->ShowA->Click += gcnew System::EventHandler(this, &AdminForm::ShowA_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(870, 607);
			this->Controls->Add(this->Dat);
			this->Controls->Add(this->ShowA);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вы вошли как: Администратор";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void ShowA_Click(System::Object^ sender, System::EventArgs^ e);
	private: void ShowAdmin();
	private: void HeaderAdmin();
		private: System::Void Roman_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Stih_Click(System::Object^ sender, System::EventArgs^ e);
			  private: System::Void Povest_Click(System::Object^ sender, System::EventArgs^ e);
					 private: System::Void Rasskaz_Click(System::Object^ sender, System::EventArgs^ e);
							private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: void Show_Admin_retry();
	   private: System::Void Dat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
