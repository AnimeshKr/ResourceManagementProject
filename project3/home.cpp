#include "StdAfx.h"
#include "login.h"
#include "home.h"
#include "home_DEO.h"
using namespace Globals;


System::Void project3::home::logoutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
 login^ log = gcnew login();
 log->Show();
 this->Hide();
}

System::Void project3::home_DEO::logoutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
 login^ log = gcnew login();
 log->Show();
 this->Hide();
}


System::Void project3::login::button1_Click(System::Object^  sender, System::EventArgs^  e) {
 /*home^ frm2 = gcnew home();
 frm2->Show();
 this->Hide();*/

 home_DEO^ frm1 = gcnew home_DEO();
 frm1->Show();
 this->Hide();
}