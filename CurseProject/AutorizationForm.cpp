#include "AutorizationForm.h"
#include "LibrarianForm.h"
#include "LoginForm.h"

System::Void CurseProject::AutorizationForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e){}

System::Void CurseProject::AutorizationForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == "12345")
    {
        LibrarianForm^ form3 = gcnew LibrarianForm();
        form3->Show();
        this->Hide();
    }
    else
    {
        MessageBox::Show("Неверный пароль");
    }
    return System::Void();
}
System::Void CurseProject::AutorizationForm::Backkk_Click(System::Object^ sender, System::EventArgs^ e)
{
    LoginForm^ form = gcnew LoginForm();

    form->Show();
    this->Hide();

}
System::Void CurseProject::AutorizationForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    int i = 0;
    if (i == 0) {
        textBox1->PasswordChar = '\0';
        i = 1;
    }
    else {
        textBox1->PasswordChar = '*';
        i = 0;
    }
}

