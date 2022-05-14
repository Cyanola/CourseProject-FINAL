#pragma once
#include "Time.h"
namespace CurseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;

	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	public ref class LibraryForm : public System::Windows::Forms::Form
	{
		Temp^ temp = nullptr;
	public:
		LibraryForm(void)
		{
			this->temp = gcnew Temp();
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LibraryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridData;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ butbask;
	private: System::Windows::Forms::Button^ ALL;
	private: System::Windows::Forms::Button^ Povest;
	private: System::Windows::Forms::Button^ Roman;
	private: System::Windows::Forms::Button^ Stih;


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;

	private: System::Windows::Forms::Button^ Rasskaz;
	private: System::Windows::Forms::Button^ button1;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridData = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->butbask = (gcnew System::Windows::Forms::Button());
			this->ALL = (gcnew System::Windows::Forms::Button());
			this->Povest = (gcnew System::Windows::Forms::Button());
			this->Roman = (gcnew System::Windows::Forms::Button());
			this->Stih = (gcnew System::Windows::Forms::Button());
			this->Rasskaz = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridData))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridData);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(247, 34);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Size = System::Drawing::Size(1045, 677);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вы можете взять книгу, щелкнув по ее id номеру";
			// 
			// dataGridData
			// 
			this->dataGridData->AllowUserToAddRows = false;
			this->dataGridData->AllowUserToDeleteRows = false;
			this->dataGridData->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridData->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridData->CausesValidation = false;
			this->dataGridData->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridData->Location = System::Drawing::Point(8, 49);
			this->dataGridData->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridData->MinimumSize = System::Drawing::Size(58, 0);
			this->dataGridData->MultiSelect = false;
			this->dataGridData->Name = L"dataGridData";
			this->dataGridData->ReadOnly = true;
			this->dataGridData->RowHeadersWidth = 55;
			this->dataGridData->RowTemplate->DividerHeight = 1;
			this->dataGridData->Size = System::Drawing::Size(1008, 622);
			this->dataGridData->TabIndex = 6;
			this->dataGridData->DoubleClick += gcnew System::EventHandler(this, &LibraryForm::Bask_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(30, 498);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 48);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Получить книги\r\n";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LibraryForm::button2_Click);
			// 
			// butbask
			// 
			this->butbask->Location = System::Drawing::Point(30, 434);
			this->butbask->Name = L"butbask";
			this->butbask->Size = System::Drawing::Size(176, 40);
			this->butbask->TabIndex = 14;
			this->butbask->Text = L"Корзина";
			this->butbask->UseVisualStyleBackColor = true;
			this->butbask->Click += gcnew System::EventHandler(this, &LibraryForm::butbask_Click);
			// 
			// ALL
			// 
			this->ALL->CausesValidation = false;
			this->ALL->Location = System::Drawing::Point(30, 83);
			this->ALL->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ALL->Name = L"ALL";
			this->ALL->Size = System::Drawing::Size(176, 50);
			this->ALL->TabIndex = 16;
			this->ALL->Text = L"Все книги";
			this->ALL->UseVisualStyleBackColor = true;
			this->ALL->Click += gcnew System::EventHandler(this, &LibraryForm::ALL_Click);
			// 
			// Povest
			// 
			this->Povest->Location = System::Drawing::Point(30, 152);
			this->Povest->Name = L"Povest";
			this->Povest->Size = System::Drawing::Size(176, 46);
			this->Povest->TabIndex = 17;
			this->Povest->Text = L"Повести";
			this->Povest->UseVisualStyleBackColor = true;
			this->Povest->Click += gcnew System::EventHandler(this, &LibraryForm::Povest_Click);
			// 
			// Roman
			// 
			this->Roman->Location = System::Drawing::Point(30, 298);
			this->Roman->Name = L"Roman";
			this->Roman->Size = System::Drawing::Size(176, 47);
			this->Roman->TabIndex = 18;
			this->Roman->Text = L"Романы";
			this->Roman->UseVisualStyleBackColor = true;
			this->Roman->Click += gcnew System::EventHandler(this, &LibraryForm::Roman_Click);
			// 
			// Stih
			// 
			this->Stih->Location = System::Drawing::Point(30, 222);
			this->Stih->Name = L"Stih";
			this->Stih->Size = System::Drawing::Size(176, 51);
			this->Stih->TabIndex = 19;
			this->Stih->Text = L"Стихотворения";
			this->Stih->UseVisualStyleBackColor = true;
			this->Stih->Click += gcnew System::EventHandler(this, &LibraryForm::Stih_Click);
			// 
			// Rasskaz
			// 
			this->Rasskaz->Location = System::Drawing::Point(30, 368);
			this->Rasskaz->Name = L"Rasskaz";
			this->Rasskaz->Size = System::Drawing::Size(176, 45);
			this->Rasskaz->TabIndex = 20;
			this->Rasskaz->Text = L"Рассказы";
			this->Rasskaz->UseVisualStyleBackColor = true;
			this->Rasskaz->Click += gcnew System::EventHandler(this, &LibraryForm::Rasskaz_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 716);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 37);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LibraryForm::button1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(174, 28);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(173, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// LibraryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1299, 765);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Rasskaz);
			this->Controls->Add(this->Stih);
			this->Controls->Add(this->Roman);
			this->Controls->Add(this->Povest);
			this->Controls->Add(this->ALL);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->butbask);
			this->Controls->Add(this->groupBox1);
			this->Name = L"LibraryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Библиотека";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridData))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	 private: System::Void ALL_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Stih_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Roman_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Rasskaz_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Povest_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	   private: void Show();
private: void HeaderA();
private: void HeaderB();
private: void HeaderC();
	   private: void HeaderD();
			  private: void HeaderE();
					 void HeaderF();
private: void ShowStih();
private: void ShowPovest();
	   void ShowRoman();
	   void ShowRasskaz();
private: void ShowBask();
	   private: System::Void butbask_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Bask_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	   void Headers();
	   void Headers_B();

};
}
