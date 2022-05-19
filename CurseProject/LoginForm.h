#pragma once

namespace CurseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}

	private: System::Windows::Forms::Button^ AdminButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ ChitatelButton;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->AdminButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ChitatelButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// AdminButton
			// 
			this->AdminButton->BackColor = System::Drawing::Color::SeaShell;
			this->AdminButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AdminButton.BackgroundImage")));
			this->AdminButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AdminButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AdminButton->ForeColor = System::Drawing::SystemColors::Info;
			this->AdminButton->Location = System::Drawing::Point(21, 279);
			this->AdminButton->Name = L"AdminButton";
			this->AdminButton->Size = System::Drawing::Size(332, 39);
			this->AdminButton->TabIndex = 8;
			this->AdminButton->Text = L" Войти как библиотекарь";
			this->AdminButton->UseVisualStyleBackColor = false;
			this->AdminButton->Click += gcnew System::EventHandler(this, &LoginForm::AdminButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(-2, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(385, 319);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// ChitatelButton
			// 
			this->ChitatelButton->BackColor = System::Drawing::Color::SeaShell;
			this->ChitatelButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ChitatelButton.BackgroundImage")));
			this->ChitatelButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ChitatelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChitatelButton->ForeColor = System::Drawing::SystemColors::Info;
			this->ChitatelButton->Location = System::Drawing::Point(41, 76);
			this->ChitatelButton->Name = L"ChitatelButton";
			this->ChitatelButton->Size = System::Drawing::Size(289, 34);
			this->ChitatelButton->TabIndex = 7;
			this->ChitatelButton->Text = L" Войти как читатель";
			this->ChitatelButton->UseVisualStyleBackColor = false;
			this->ChitatelButton->Click += gcnew System::EventHandler(this, &LoginForm::ChitatelButton_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 313);
			this->Controls->Add(this->AdminButton);
			this->Controls->Add(this->ChitatelButton);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(393, 360);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(393, 360);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Библиотека \"Счастливый читатель\"";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ChitatelButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AdminButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
