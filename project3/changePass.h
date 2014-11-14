#pragma once
#include "stdafx.h"

namespace project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace Globals;

	/// <summary>
	/// Summary for changePass
	/// </summary>
	public ref class changePass : public System::Windows::Forms::Form
	{
	public:
		changePass(void)
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
		~changePass()
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
	private: System::Windows::Forms::Button^  submit;

	private: System::Windows::Forms::TextBox^  textBox_Username;
	private: System::Windows::Forms::TextBox^  textBox_curPass;
	private: System::Windows::Forms::TextBox^  textBox_newPass;
	private: System::Windows::Forms::ComboBox^  comboBox_Usertype;
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
			this->submit = (gcnew System::Windows::Forms::Button());
			this->textBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->textBox_curPass = (gcnew System::Windows::Forms::TextBox());
			this->textBox_newPass = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Usertype = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"UserType";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Current Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"New Password";
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(93, 212);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(75, 23);
			this->submit->TabIndex = 1;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &changePass::submit_Click);
			// 
			// textBox_Username
			// 
			this->textBox_Username->Location = System::Drawing::Point(109, 90);
			this->textBox_Username->Name = L"textBox_Username";
			this->textBox_Username->Size = System::Drawing::Size(100, 20);
			this->textBox_Username->TabIndex = 2;
			// 
			// textBox_curPass
			// 
			this->textBox_curPass->Location = System::Drawing::Point(109, 133);
			this->textBox_curPass->Name = L"textBox_curPass";
			this->textBox_curPass->Size = System::Drawing::Size(100, 20);
			this->textBox_curPass->TabIndex = 2;
			// 
			// textBox_newPass
			// 
			this->textBox_newPass->Location = System::Drawing::Point(109, 173);
			this->textBox_newPass->Name = L"textBox_newPass";
			this->textBox_newPass->Size = System::Drawing::Size(100, 20);
			this->textBox_newPass->TabIndex = 2;
			// 
			// comboBox_Usertype
			// 
			this->comboBox_Usertype->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Usertype->FormattingEnabled = true;
			this->comboBox_Usertype->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Admin", L"DEO"});
			this->comboBox_Usertype->Location = System::Drawing::Point(109, 50);
			this->comboBox_Usertype->Name = L"comboBox_Usertype";
			this->comboBox_Usertype->Size = System::Drawing::Size(100, 21);
			this->comboBox_Usertype->TabIndex = 3;
			// 
			// changePass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->comboBox_Usertype);
			this->Controls->Add(this->textBox_newPass);
			this->Controls->Add(this->textBox_curPass);
			this->Controls->Add(this->textBox_Username);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"changePass";
			this->Text = L"Change Password";
			this->Load += gcnew System::EventHandler(this, &changePass::changePass_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) { //submits values to the employees form
				 
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand(" UPDATE resource_management.users SET password='"+this->textBox_newPass->Text+"' WHERE name='"+this->textBox_Username->Text+"' and password='"+this->textBox_curPass->Text+"' and mode='"+this->comboBox_Usertype->Text+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("Password Changed\n");
				while(myReader->Read()){
				 }
				
			 }

			 catch(Exception^ex){
				 //clearing all fields
			 MessageBox::Show(ex->Message);
			 textBox_Username->Text= "";
			 textBox_curPass->Text= "";
			 textBox_newPass->Text= "";
			 }
			 }
private: System::Void changePass_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
