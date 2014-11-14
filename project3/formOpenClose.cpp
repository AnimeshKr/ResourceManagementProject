#include "formOpenClose.h"
#include "login.h"
#include "Form1.h"
#include "stdafx.h"

Void formOpenClose::showForm1(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 Form1 ^ welcomeForm = gcnew Form1;
			 welcomeForm->ShowDialog();
			 Application::Exit();
}

Void formOpenClose::showlogin(System::Object^  sender, System::EventArgs^  e) {
			 login^ frm2 = gcnew login;
			 frm2->ShowDialog();
			 this->Hide();	 			 
}