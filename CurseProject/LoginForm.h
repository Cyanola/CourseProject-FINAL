#pragma once

namespace CurseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
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
	private: System::Windows::Forms::Button^ ChitatelButton;
	private: System::Windows::Forms::Button^ AdminButton;
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
			this->ChitatelButton = (gcnew System::Windows::Forms::Button());
			this->AdminButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ChitatelButton
			// 
			this->ChitatelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChitatelButton->Location = System::Drawing::Point(54, 95);
			this->ChitatelButton->Name = L"ChitatelButton";
			this->ChitatelButton->Size = System::Drawing::Size(251, 50);
			this->ChitatelButton->TabIndex = 7;
			this->ChitatelButton->Text = L" Войти как читатель";
			this->ChitatelButton->UseVisualStyleBackColor = true;
			this->ChitatelButton->Click += gcnew System::EventHandler(this, &LoginForm::ChitatelButton_Click);
			// 
			// AdminButton
			// 
			this->AdminButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AdminButton->Location = System::Drawing::Point(54, 174);
			this->AdminButton->Name = L"AdminButton";
			this->AdminButton->Size = System::Drawing::Size(251, 73);
			this->AdminButton->TabIndex = 8;
			this->AdminButton->Text = L" Войти как администратор";
			this->AdminButton->UseVisualStyleBackColor = true;
			this->AdminButton->Click += gcnew System::EventHandler(this, &LoginForm::AdminButton_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 313);
			this->Controls->Add(this->AdminButton);
			this->Controls->Add(this->ChitatelButton);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вход";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
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
	};
}
