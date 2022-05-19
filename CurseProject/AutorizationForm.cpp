#include "AutorizationForm.h"
#include "AdminForm.h"
#include "LoginForm.h"

System::Void CurseProject::AutorizationForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e){}

System::Void CurseProject::AutorizationForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == "12345")
    {
       AdminForm^ form3 = gcnew AdminForm();
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

