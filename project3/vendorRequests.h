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
	/// Summary for vendorRequests
	/// </summary>
	public ref class vendorRequests : public System::Windows::Forms::Form
	{
	public:
		vendorRequests(void)
		{
			InitializeComponent();
			fillvendor();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~vendorRequests()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  accept;
	private: System::Windows::Forms::Button^  reject;
	protected: 

	protected: 

	private: System::Windows::Forms::Button^  refresh;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListBox^  vendorListBox;
	private: System::Windows::Forms::TextBox^  textBox_Man;
	private: System::Windows::Forms::TextBox^  textBox_Model;
	private: System::Windows::Forms::TextBox^  textBox_Price;
	private: System::Windows::Forms::TextBox^  textBox_Cat;





	private: System::Windows::Forms::Label^  label5;

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
			this->accept = (gcnew System::Windows::Forms::Button());
			this->reject = (gcnew System::Windows::Forms::Button());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->vendorListBox = (gcnew System::Windows::Forms::ListBox());
			this->textBox_Man = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Model = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Price = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Cat = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// accept
			// 
			this->accept->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->accept->Location = System::Drawing::Point(53, 215);
			this->accept->Name = L"accept";
			this->accept->Size = System::Drawing::Size(75, 23);
			this->accept->TabIndex = 0;
			this->accept->Text = L"Accept";
			this->accept->UseVisualStyleBackColor = true;
			this->accept->Click += gcnew System::EventHandler(this, &vendorRequests::accept_Click);
			// 
			// reject
			// 
			this->reject->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->reject->Location = System::Drawing::Point(177, 215);
			this->reject->Name = L"reject";
			this->reject->Size = System::Drawing::Size(75, 23);
			this->reject->TabIndex = 0;
			this->reject->Text = L"Reject";
			this->reject->UseVisualStyleBackColor = true;
			this->reject->Click += gcnew System::EventHandler(this, &vendorRequests::reject_Click);
			// 
			// refresh
			// 
			this->refresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->refresh->Location = System::Drawing::Point(331, 192);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(75, 23);
			this->refresh->TabIndex = 0;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &vendorRequests::refresh_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Manufacturer:";
			this->label1->Click += gcnew System::EventHandler(this, &vendorRequests::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Model Name:";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Price";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Category";
			// 
			// vendorListBox
			// 
			this->vendorListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->vendorListBox->FormattingEnabled = true;
			this->vendorListBox->Location = System::Drawing::Point(301, 52);
			this->vendorListBox->Name = L"vendorListBox";
			this->vendorListBox->Size = System::Drawing::Size(120, 134);
			this->vendorListBox->TabIndex = 2;
			this->vendorListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &vendorRequests::vendorListBox_SelectedIndexChanged);
			// 
			// textBox_Man
			// 
			this->textBox_Man->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_Man->Location = System::Drawing::Point(86, 28);
			this->textBox_Man->Name = L"textBox_Man";
			this->textBox_Man->Size = System::Drawing::Size(100, 20);
			this->textBox_Man->TabIndex = 3;
			// 
			// textBox_Model
			// 
			this->textBox_Model->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_Model->Location = System::Drawing::Point(86, 76);
			this->textBox_Model->Name = L"textBox_Model";
			this->textBox_Model->Size = System::Drawing::Size(100, 20);
			this->textBox_Model->TabIndex = 3;
			// 
			// textBox_Price
			// 
			this->textBox_Price->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_Price->Location = System::Drawing::Point(86, 125);
			this->textBox_Price->Name = L"textBox_Price";
			this->textBox_Price->Size = System::Drawing::Size(100, 20);
			this->textBox_Price->TabIndex = 3;
			// 
			// textBox_Cat
			// 
			this->textBox_Cat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_Cat->Location = System::Drawing::Point(86, 174);
			this->textBox_Cat->Name = L"textBox_Cat";
			this->textBox_Cat->Size = System::Drawing::Size(100, 20);
			this->textBox_Cat->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(315, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Pending Requests";
			this->label5->Click += gcnew System::EventHandler(this, &vendorRequests::label1_Click);
			// 
			// vendorRequests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 261);
			this->Controls->Add(this->textBox_Cat);
			this->Controls->Add(this->textBox_Price);
			this->Controls->Add(this->textBox_Model);
			this->Controls->Add(this->textBox_Man);
			this->Controls->Add(this->vendorListBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->reject);
			this->Controls->Add(this->accept);
			this->Name = L"vendorRequests";
			this->Text = L"Vendor Requests";
			this->Load += gcnew System::EventHandler(this, &vendorRequests::vendorRequests_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void addrecord(void)
       {
             String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);

			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("INSERT INTO resource_management.manufacturer (ManufacturerName,ModelName,Price,Category) VALUES ('"+this->textBox_Man->Text+"','"+this->textBox_Model->Text+"','"+this->textBox_Price->Text+"','"+this->textBox_Cat->Text+"');",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("New Vendor added\n");
				while(myReader->Read()){
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
		 }

    private: void fillvendor(void)
        {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.tempmanufacturer;",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				while(myReader->Read()){
					String^ Req = myReader->GetString("Id");
					vendorListBox->Items->Add(Req);
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }

  
         }

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void refresh_Click(System::Object^  sender, System::EventArgs^  e) {
             vendorListBox->Items->Clear();
			 fillvendor();
		 }
private: System::Void vendorListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ id = vendorListBox->Text;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.tempmanufacturer where Id='"+id+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				if (myReader->Read()){
					String^ Type = myReader->GetString("Category");
					textBox_Cat->Text = Type;
					String^ Pname = myReader->GetString("ModelName");
					textBox_Model->Text = Pname;
					String^ Mname = myReader->GetString("ManufacturerName");
					textBox_Man->Text = Mname;
					String^ Price1 = myReader->GetString("Price");
					textBox_Price->Text = Price1;
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }
		 private: System::Void accept_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("DELETE FROM resource_management.tempmanufacturer WHERE ModelName='"+textBox_Model->Text+"';;",conDataBase);
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
			 textBox_Man->Text = "";
			 textBox_Cat->Text = "";
			 textBox_Model->Text = "";
			 textBox_Price->Text = "";
			 }

			 addrecord();
				  
}
private: System::Void reject_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("DELETE FROM resource_management.tempmanufacturer WHERE ModelName='"+textBox_Model->Text+"';;",conDataBase);
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
			 }
		 }
private: System::Void vendorRequests_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
