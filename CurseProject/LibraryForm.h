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
	///

	/// Сводка для MyForm2
	/// </summary>
	public ref class LibraryForm : public System::Windows::Forms::Form
	{
		Temp^ temp = nullptr;
	public:
		LibraryForm(void)
		{
			this->temp = gcnew Temp();
			InitializeComponent();
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
			Application::Exit();
		}
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ ALL;
	private: System::Windows::Forms::Button^ Povest;
	private: System::Windows::Forms::Button^ Roman;
	private: System::Windows::Forms::Button^ Rasskaz;








	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ butbask;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ Stih;
	private: System::Windows::Forms::Button^ Piesa;

	private: System::Windows::Forms::Button^ Skazka;
	private: System::Windows::Forms::DataGridView^ dataGridData;
	private: System::Windows::Forms::GroupBox^ groupBox1;




	private: System::ComponentModel::IContainer^ components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LibraryForm::typeid));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->ALL = (gcnew System::Windows::Forms::Button());
			this->Povest = (gcnew System::Windows::Forms::Button());
			this->Roman = (gcnew System::Windows::Forms::Button());
			this->Rasskaz = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->butbask = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Stih = (gcnew System::Windows::Forms::Button());
			this->Piesa = (gcnew System::Windows::Forms::Button());
			this->Skazka = (gcnew System::Windows::Forms::Button());
			this->dataGridData = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridData))->BeginInit();
			this->SuspendLayout();
			// 
			// ALL
			// 
			this->ALL->CausesValidation = false;
			this->ALL->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ALL->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ALL->Location = System::Drawing::Point(14, 53);
			this->ALL->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ALL->Name = L"ALL";
			this->ALL->Size = System::Drawing::Size(139, 37);
			this->ALL->TabIndex = 0;
			this->ALL->Text = L"Все книги";
			this->ALL->UseVisualStyleBackColor = true;
			this->ALL->Click += gcnew System::EventHandler(this, &LibraryForm::ALL_Click);
			// 
			// Povest
			// 
			this->Povest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Povest->Location = System::Drawing::Point(14, 97);
			this->Povest->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Povest->Name = L"Povest";
			this->Povest->Size = System::Drawing::Size(139, 37);
			this->Povest->TabIndex = 1;
			this->Povest->Text = L"Повести";
			this->Povest->UseVisualStyleBackColor = true;
			this->Povest->Click += gcnew System::EventHandler(this, &LibraryForm::Povest_Click);
			// 
			// Roman
			// 
			this->Roman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Roman->Location = System::Drawing::Point(14, 141);
			this->Roman->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Roman->Name = L"Roman";
			this->Roman->Size = System::Drawing::Size(139, 37);
			this->Roman->TabIndex = 2;
			this->Roman->Text = L"Романы";
			this->Roman->UseVisualStyleBackColor = true;
			this->Roman->Click += gcnew System::EventHandler(this, &LibraryForm::Roman_Click);
			// 
			// Rasskaz
			// 
			this->Rasskaz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Rasskaz->Location = System::Drawing::Point(14, 188);
			this->Rasskaz->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Rasskaz->Name = L"Rasskaz";
			this->Rasskaz->Size = System::Drawing::Size(139, 37);
			this->Rasskaz->TabIndex = 3;
			this->Rasskaz->Text = L"Рассказы";
			this->Rasskaz->UseVisualStyleBackColor = true;
			this->Rasskaz->Click += gcnew System::EventHandler(this, &LibraryForm::Rasskaz_Click);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(789, 463);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 9;
			// 
			// butbask
			// 
			this->butbask->Cursor = System::Windows::Forms::Cursors::Hand;
			this->butbask->Location = System::Drawing::Point(12, 372);
			this->butbask->Name = L"butbask";
			this->butbask->Size = System::Drawing::Size(139, 39);
			this->butbask->TabIndex = 10;
			this->butbask->Text = L"Избранное";
			this->butbask->UseVisualStyleBackColor = true;
			this->butbask->Click += gcnew System::EventHandler(this, &LibraryForm::butfav_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(12, 419);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 39);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Получить книги";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LibraryForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(12, 600);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 37);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LibraryForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(12, 465);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 64);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Узнать дату окончания аренды книг";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LibraryForm::button3_Click);
			// 
			// Stih
			// 
			this->Stih->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stih->Location = System::Drawing::Point(14, 234);
			this->Stih->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Stih->Name = L"Stih";
			this->Stih->Size = System::Drawing::Size(139, 37);
			this->Stih->TabIndex = 13;
			this->Stih->Text = L"Стихотворения";
			this->Stih->UseVisualStyleBackColor = true;
			this->Stih->Click += gcnew System::EventHandler(this, &LibraryForm::Stih_Click);
			// 
			// Piesa
			// 
			this->Piesa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Piesa->Location = System::Drawing::Point(14, 326);
			this->Piesa->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Piesa->Name = L"Piesa";
			this->Piesa->Size = System::Drawing::Size(139, 37);
			this->Piesa->TabIndex = 14;
			this->Piesa->Text = L"Пьесы";
			this->Piesa->UseVisualStyleBackColor = true;
			this->Piesa->Click += gcnew System::EventHandler(this, &LibraryForm::Piesa_Click);
			// 
			// Skazka
			// 
			this->Skazka->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Skazka->Location = System::Drawing::Point(14, 280);
			this->Skazka->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Skazka->Name = L"Skazka";
			this->Skazka->Size = System::Drawing::Size(139, 37);
			this->Skazka->TabIndex = 15;
			this->Skazka->Text = L"Сказки";
			this->Skazka->UseVisualStyleBackColor = true;
			this->Skazka->Click += gcnew System::EventHandler(this, &LibraryForm::Skazka_Click);
			// 
			// dataGridData
			// 
			this->dataGridData->AllowUserToAddRows = false;
			this->dataGridData->AllowUserToDeleteRows = false;
			this->dataGridData->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridData->BackgroundColor = System::Drawing::Color::Linen;
			this->dataGridData->CausesValidation = false;
			this->dataGridData->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridData->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dataGridData->Location = System::Drawing::Point(191, 53);
			this->dataGridData->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridData->MinimumSize = System::Drawing::Size(58, 0);
			this->dataGridData->MultiSelect = false;
			this->dataGridData->Name = L"dataGridData";
			this->dataGridData->ReadOnly = true;
			this->dataGridData->RowHeadersWidth = 55;
			this->dataGridData->RowTemplate->DividerHeight = 1;
			this->dataGridData->Size = System::Drawing::Size(1013, 541);
			this->dataGridData->TabIndex = 6;
			this->dataGridData->DoubleClick += gcnew System::EventHandler(this, &LibraryForm::Fav_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(191, 12);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Size = System::Drawing::Size(1013, 582);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление книги в избранное производится по уникальному номеру (id)";
			// 
			// LibraryForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1257, 648);
			this->Controls->Add(this->dataGridData);
			this->Controls->Add(this->Piesa);
			this->Controls->Add(this->Skazka);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Stih);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->butbask);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Rasskaz);
			this->Controls->Add(this->Roman);
			this->Controls->Add(this->Povest);
			this->Controls->Add(this->ALL);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1275, 695);
			this->MinimumSize = System::Drawing::Size(1275, 695);
			this->Name = L"LibraryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Библиотека \"Счастливый читатель\"";
			this->Load += gcnew System::EventHandler(this, &LibraryForm::LibraryForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ALL_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Povest_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Roman_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Rasskaz_Click(System::Object^ sender, System::EventArgs^ e);
			private: System::Void Stih_Click(System::Object^ sender, System::EventArgs^ e);

					private: System::Void Skazka_Click(System::Object^ sender, System::EventArgs^ e);

							private: System::Void Piesa_Click(System::Object^ sender, System::EventArgs^ e);

	private: void Show();
	private: void HeaderA();
	private: void HeaderA_busk();
	private: void HeaderB();
	private: void HeaderC();
	private: void HeaderD();
	private: void HeaderE();
	private: void HeaderF();

	private: void ShowRoman();
		   void ShowPovest();
	private: void ShowRasskaz();
		   private: void ShowStih();
				  private: void ShowPiesa();
						 private: void ShowSkazka();
	private: void ShowFav();
	private: System::Void butfav_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Fav_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		   void Headers();
		   void Headers_B();
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LibraryForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
};
}
