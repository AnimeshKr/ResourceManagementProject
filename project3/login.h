#pragma once
#include "stdafx.h"
#include "home.h"
#include "home_DEO.h"
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
	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox_UserType;
	private: System::Windows::Forms::TextBox^  textBox_Username;
	private: System::Windows::Forms::TextBox^  textBox_Password;




	private: System::Windows::Forms::Button^  button1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox_UserType = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(296, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Type";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(296, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"User Name";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(296, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// comboBox_UserType
			// 
			this->comboBox_UserType->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_UserType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_UserType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox_UserType->FormattingEnabled = true;
			this->comboBox_UserType->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Admin", L"Operator"});
			this->comboBox_UserType->Location = System::Drawing::Point(408, 140);
			this->comboBox_UserType->Name = L"comboBox_UserType";
			this->comboBox_UserType->Size = System::Drawing::Size(121, 28);
			this->comboBox_UserType->TabIndex = 3;
			this->comboBox_UserType->SelectedIndexChanged += gcnew System::EventHandler(this, &login::comboBox_UserType_SelectedIndexChanged);
			// 
			// textBox_Username
			// 
			this->textBox_Username->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_Username->Location = System::Drawing::Point(408, 209);
			this->textBox_Username->Name = L"textBox_Username";
			this->textBox_Username->Size = System::Drawing::Size(121, 26);
			this->textBox_Username->TabIndex = 4;
			// 
			// textBox_Password
			// 
			this->textBox_Password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_Password->Location = System::Drawing::Point(408, 280);
			this->textBox_Password->Name = L"textBox_Password";
			this->textBox_Password->PasswordChar = '*';
			this->textBox_Password->Size = System::Drawing::Size(121, 26);
			this->textBox_Password->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(408, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click_1);
			// 
			// login
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(816, 502);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_Password);
			this->Controls->Add(this->textBox_Username);
			this->Controls->Add(this->comboBox_UserType);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"login";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Login";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &login::login_FormClosed);
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) ;
			 //{
				//  //opening new form
				//  home ^ form = gcnew home;
				//  //form->groupBox1->Hide();		//hiding groupbox1 from home form
				//  //form->groupBox2->Hide();		//hiding groupbox2 from home form
				//  form->ShowDialog();			//Showing new form
				//  //
			 //}
private: System::Void login_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox_UserType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
             //username_ = this->textBox_Username->Text;

			 GlobalClass::currentuser = textBox_Username->Text;

			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 if (comboBox_UserType->Text=="Admin"){
			    MySqlCommand^ cmdDataBase= gcnew MySqlCommand("SELECT * FROM resource_management.users where name='"+this->textBox_Username->Text+"' and password='"+this->textBox_Password->Text+"' and mode='""admin""';",conDataBase);
			     MySqlDataReader^ myReader;

				  try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();

				int flag=0;
				while(myReader->Read()){
					flag++;
				 }
				if (flag==1){
					MessageBox::Show("Login Successful");
					this->Hide();
					home^ f = gcnew home();
					f->ShowDialog();
				}
				else {
					MessageBox::Show("Login failed, try again");
				}
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 textBox_Username->Text = "";
			 textBox_Password->Text = "";
			 }

			 }
			 //MySqlCommand^ cmdDataBase= gcnew MySqlCommand("SELECT * FROM resource_management.users where name='"+this->User->Text+"' and password='"+this->Pass->Text+"';",conDataBase);
			 else if (comboBox_UserType->Text=="Operator"){
			   MySqlCommand^ cmdDataBase= gcnew MySqlCommand("SELECT * FROM resource_management.users where name='"+this->textBox_Username->Text+"' and password='"+this->textBox_Password->Text+"' and mode='""deo""';",conDataBase);
			   MySqlDataReader^ myReader;

			    try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();

				int flag=0;
				while(myReader->Read()){
					flag++;
				 }
				if (flag==1){
					MessageBox::Show("Login Successful");
					this->Hide();
					home_DEO^ f = gcnew home_DEO();
					f->ShowDialog();
				}
				else {
					MessageBox::Show("Login failed, try again");
				}
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }

			

			 
		 }
};
}
