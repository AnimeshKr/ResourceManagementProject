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
	/// Summary for issueNotifications
	/// </summary>
	public ref class issueNotifications : public System::Windows::Forms::Form
	{
	public:
		issueNotifications(void)
		{
			InitializeComponent();
			fillissued();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~issueNotifications()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  refresh;
	private: System::Windows::Forms::Button^  reject;

	private: System::Windows::Forms::ListBox^  addNotListBox;
	private: System::Windows::Forms::TextBox^  textBox_By;
	private: System::Windows::Forms::TextBox^  textBox_Status;
	private: System::Windows::Forms::TextBox^  textBox_Price;
	private: System::Windows::Forms::TextBox^  textBox_Man;
	private: System::Windows::Forms::TextBox^  textBox_Model;
	private: System::Windows::Forms::TextBox^  textBox_Type;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Productkey;

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
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->reject = (gcnew System::Windows::Forms::Button());
			this->addNotListBox = (gcnew System::Windows::Forms::ListBox());
			this->textBox_By = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Status = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Price = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Man = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Model = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Type = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Productkey = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(335, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Issued Items";
			// 
			// refresh
			// 
			this->refresh->Location = System::Drawing::Point(335, 208);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(75, 23);
			this->refresh->TabIndex = 18;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &issueNotifications::refresh_Click);
			// 
			// reject
			// 
			this->reject->Location = System::Drawing::Point(127, 240);
			this->reject->Name = L"reject";
			this->reject->Size = System::Drawing::Size(75, 23);
			this->reject->TabIndex = 19;
			this->reject->Text = L"Reviewed";
			this->reject->UseVisualStyleBackColor = true;
			this->reject->Click += gcnew System::EventHandler(this, &issueNotifications::reject_Click);
			// 
			// addNotListBox
			// 
			this->addNotListBox->FormattingEnabled = true;
			this->addNotListBox->Location = System::Drawing::Point(315, 42);
			this->addNotListBox->Name = L"addNotListBox";
			this->addNotListBox->Size = System::Drawing::Size(120, 160);
			this->addNotListBox->TabIndex = 17;
			this->addNotListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &issueNotifications::addNotListBox_SelectedIndexChanged);
			// 
			// textBox_By
			// 
			this->textBox_By->Location = System::Drawing::Point(127, 201);
			this->textBox_By->Name = L"textBox_By";
			this->textBox_By->Size = System::Drawing::Size(100, 20);
			this->textBox_By->TabIndex = 14;
			// 
			// textBox_Status
			// 
			this->textBox_Status->Location = System::Drawing::Point(127, 167);
			this->textBox_Status->Name = L"textBox_Status";
			this->textBox_Status->Size = System::Drawing::Size(100, 20);
			this->textBox_Status->TabIndex = 15;
			// 
			// textBox_Price
			// 
			this->textBox_Price->Location = System::Drawing::Point(127, 134);
			this->textBox_Price->Name = L"textBox_Price";
			this->textBox_Price->Size = System::Drawing::Size(100, 20);
			this->textBox_Price->TabIndex = 16;
			// 
			// textBox_Man
			// 
			this->textBox_Man->Location = System::Drawing::Point(127, 101);
			this->textBox_Man->Name = L"textBox_Man";
			this->textBox_Man->Size = System::Drawing::Size(100, 20);
			this->textBox_Man->TabIndex = 13;
			// 
			// textBox_Model
			// 
			this->textBox_Model->Location = System::Drawing::Point(127, 65);
			this->textBox_Model->Name = L"textBox_Model";
			this->textBox_Model->Size = System::Drawing::Size(100, 20);
			this->textBox_Model->TabIndex = 11;
			// 
			// textBox_Type
			// 
			this->textBox_Type->Location = System::Drawing::Point(127, 28);
			this->textBox_Type->Name = L"textBox_Type";
			this->textBox_Type->Size = System::Drawing::Size(100, 20);
			this->textBox_Type->TabIndex = 12;
			this->textBox_Type->TextChanged += gcnew System::EventHandler(this, &issueNotifications::textBox_Type_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 204);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Entered By";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Status";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Price";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Manufacturer";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Product Model";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Type";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"ProductId";
			// 
			// Productkey
			// 
			this->Productkey->Location = System::Drawing::Point(127, 2);
			this->Productkey->Name = L"Productkey";
			this->Productkey->Size = System::Drawing::Size(100, 20);
			this->Productkey->TabIndex = 23;
			// 
			// issueNotifications
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 293);
			this->Controls->Add(this->Productkey);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->reject);
			this->Controls->Add(this->addNotListBox);
			this->Controls->Add(this->textBox_By);
			this->Controls->Add(this->textBox_Status);
			this->Controls->Add(this->textBox_Price);
			this->Controls->Add(this->textBox_Man);
			this->Controls->Add(this->textBox_Model);
			this->Controls->Add(this->textBox_Type);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"issueNotifications";
			this->Text = L"Issued Items";
			this->Load += gcnew System::EventHandler(this, &issueNotifications::issueNotifications_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    	 private: void fillissued(void)
        {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.history WHERE Action='ISSUED';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				while(myReader->Read()){
					String^ Req = myReader->GetString("Id");
					addNotListBox->Items->Add(Req);
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }

  
         }

	private: System::Void issueNotifications_Load(System::Object^  sender, System::EventArgs^  e) {
			 }


private: System::Void addNotListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  String^ id = addNotListBox->Text;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.history where Id='"+id+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				if (myReader->Read()){
					String^ Type = myReader->GetString("Type");
					textBox_Type->Text = Type;
					String^ Pname = myReader->GetString("ModelName");
					textBox_Model->Text = Pname;
					String^ Mname = myReader->GetString("ManufacturerName");
					textBox_Man->Text = Mname;
					String^ Price1 = myReader->GetString("Price");
					textBox_Price->Text = Price1;
					String^ Stat = myReader->GetString("Status");
					textBox_Status->Text = Stat;
					String^ Deo = myReader->GetString("Deo");
					textBox_By->Text = Deo;
					String^ Proid = myReader->GetString("ProductId");
					Productkey->Text = Proid;
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void accept_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void reject_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("DELETE FROM resource_management.history WHERE ProductId='"+Productkey->Text+"';;",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("Request processed\n");
				while(myReader->Read()){
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 textBox_Man->Text= "";
			 textBox_Model->Text= "";
			 textBox_Price->Text= "";
			 textBox_Status->Text= "";
			 textBox_By->Text= "";
			 textBox_Type->Text= "";
			 Productkey->Text= "";
			 }
		 }
private: System::Void textBox_Type_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void refresh_Click(System::Object^  sender, System::EventArgs^  e) {
			 addNotListBox->Items->Clear();
			 fillissued();
			 textBox_Man->Text= "";
			 textBox_Model->Text= "";
			 textBox_Price->Text= "";
			 textBox_Status->Text= "";
			 textBox_By->Text= "";
			 textBox_Type->Text= "";
			 Productkey->Text= "";
		 }
};
}
