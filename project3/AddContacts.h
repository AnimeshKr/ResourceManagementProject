#pragma once

namespace project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddContacts
	/// </summary>
	public ref class AddContacts : public System::Windows::Forms::Form
	{
	public:
		AddContacts(void)
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
		~AddContacts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  fname;
	private: System::Windows::Forms::TextBox^  lname;
	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::TextBox^  email;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  mode;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->lname = (gcnew System::Windows::Forms::TextBox());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mode = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddContacts::button1_Click);
			// 
			// fname
			// 
			this->fname->Location = System::Drawing::Point(127, 38);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(100, 20);
			this->fname->TabIndex = 1;
			// 
			// lname
			// 
			this->lname->Location = System::Drawing::Point(127, 74);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(100, 20);
			this->lname->TabIndex = 2;
			// 
			// contact
			// 
			this->contact->Location = System::Drawing::Point(127, 110);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(100, 20);
			this->contact->TabIndex = 3;
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(127, 136);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(100, 20);
			this->email->TabIndex = 4;
			this->email->TextChanged += gcnew System::EventHandler(this, &AddContacts::email_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"First Name";
			// 
			// mode
			// 
			this->mode->Location = System::Drawing::Point(127, 162);
			this->mode->Name = L"mode";
			this->mode->Size = System::Drawing::Size(100, 20);
			this->mode->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Contact";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Privilege";
			// 
			// AddContacts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->mode);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->email);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->lname);
			this->Controls->Add(this->fname);
			this->Controls->Add(this->button1);
			this->Name = L"AddContacts";
			this->Text = L"AddContacts";
			this->Load += gcnew System::EventHandler(this, &AddContacts::AddContacts_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor"; //connects to database 
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into resource_management.employeecontacts (FirstName,LastName,ContactNumber,email,Privileges) values('"+this->fname->Text+"','"+this->lname->Text+"','"+this->contact->Text+"','"+this->email->Text+"','"+this->mode->Text+"');",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("New Contact added\n");
				while(myReader->Read()){   //Adds new contact to the database
				 }
				
			 }

			 catch(Exception^ex){  //to catch bugs
			 MessageBox::Show(ex->Message);
			 fname->Text = "";
			 lname->Text = "";
			 contact->Text = "";
			 email->Text = "";
			 mode->Text = "";
			 }
			 }
	private: System::Void email_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void AddContacts_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
