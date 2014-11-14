#pragma once
#include "stdafx.h"
#include "cstdlib"
#include "string"

namespace project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace Globals;
	using namespace std;

	/// <summary>
	/// Summary for addEmployeeForm
	/// </summary>
	public ref class addEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		addEmployeeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textfname;
	private: System::Windows::Forms::TextBox^  textlname;
	private: System::Windows::Forms::TextBox^  textuname;
	private: System::Windows::Forms::TextBox^  textpass;




	private: System::Windows::Forms::Button^  randString;
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  privilege;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textfname = (gcnew System::Windows::Forms::TextBox());
			this->textlname = (gcnew System::Windows::Forms::TextBox());
			this->textuname = (gcnew System::Windows::Forms::TextBox());
			this->textpass = (gcnew System::Windows::Forms::TextBox());
			this->randString = (gcnew System::Windows::Forms::Button());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->privilege = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Password";
			// 
			// textfname
			// 
			this->textfname->Location = System::Drawing::Point(90, 35);
			this->textfname->Name = L"textfname";
			this->textfname->Size = System::Drawing::Size(100, 20);
			this->textfname->TabIndex = 1;
			// 
			// textlname
			// 
			this->textlname->Location = System::Drawing::Point(90, 81);
			this->textlname->Name = L"textlname";
			this->textlname->Size = System::Drawing::Size(100, 20);
			this->textlname->TabIndex = 1;
			// 
			// textuname
			// 
			this->textuname->Location = System::Drawing::Point(90, 184);
			this->textuname->Name = L"textuname";
			this->textuname->Size = System::Drawing::Size(100, 20);
			this->textuname->TabIndex = 1;
			// 
			// textpass
			// 
			this->textpass->Location = System::Drawing::Point(92, 226);
			this->textpass->Name = L"textpass";
			this->textpass->Size = System::Drawing::Size(100, 20);
			this->textpass->TabIndex = 1;
			// 
			// randString
			// 
			this->randString->Location = System::Drawing::Point(198, 224);
			this->randString->Name = L"randString";
			this->randString->Size = System::Drawing::Size(75, 23);
			this->randString->TabIndex = 2;
			this->randString->Text = L"Generate";
			this->randString->UseVisualStyleBackColor = true;
			this->randString->Click += gcnew System::EventHandler(this, &addEmployeeForm::randString_Click);
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(100, 269);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(75, 23);
			this->submit->TabIndex = 2;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &addEmployeeForm::submit_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Privileges";
			// 
			// privilege
			// 
			this->privilege->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->privilege->FormattingEnabled = true;
			this->privilege->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"admin", L"DEO"});
			this->privilege->Location = System::Drawing::Point(90, 120);
			this->privilege->Name = L"privilege";
			this->privilege->Size = System::Drawing::Size(121, 21);
			this->privilege->TabIndex = 4;
			// 
			// addEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 324);
			this->Controls->Add(this->privilege);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->randString);
			this->Controls->Add(this->textpass);
			this->Controls->Add(this->textuname);
			this->Controls->Add(this->textlname);
			this->Controls->Add(this->textfname);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"addEmployeeForm";
			this->Text = L"Add Employee";
			this->Load += gcnew System::EventHandler(this, &addEmployeeForm::addEmployeeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addEmployeeForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

			 void clearallfields(void) //clears all textboxes
			 {
				 textfname->Text = "";
				 textlname->Text = "";
				 privilege->Text = "";
				 textuname->Text = "";
				 textpass->Text = "";
			 }

private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
			 //connects to database
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into resource_management.users (FirstName,LastName,name,password,mode) values('"+this->textfname->Text+"','"+this->textlname->Text+"','"+this->textuname->Text+"','"+this->textpass->Text+"','"+this->privilege->Text+"');",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("New Employee added\n");
				while(myReader->Read()){
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }

			 //clear data
			 clearallfields();
		 }

		 std::string GenerateRandString(void) //generates random password
		 {
		      char a[] = "abcdefgABCDEFG1234";
			  int length = 8;
			  string pass = "helloworld";
			  for (int i=0; i<10; i++)
			  {
			      int n = rand();
				  n%=16;
				  pass[i] = a[n];
			  }
			  return pass;
		 }

private: System::Void randString_Click(System::Object^  sender, System::EventArgs^  e) { //assigns random password
             String^ str3 = gcnew String(GenerateRandString().c_str());; 
			 textpass->Text = str3;
			}
};
}
