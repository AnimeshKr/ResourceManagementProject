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
	/// Summary for issueProductForm
	/// </summary>
	public ref class issueProductForm : public System::Windows::Forms::Form
	{
	public:
		issueProductForm(void)
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
		~issueProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox_Type;
	private: System::Windows::Forms::ComboBox^  comboBox_Model;
	private: System::Windows::Forms::ComboBox^  comboBox_PID;
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Mname;
	private: System::Windows::Forms::TextBox^  Status;
	private: System::Windows::Forms::TextBox^  Price;
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
			this->comboBox_Type = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Model = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_PID = (gcnew System::Windows::Forms::ComboBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Mname = (gcnew System::Windows::Forms::TextBox());
			this->Status = (gcnew System::Windows::Forms::TextBox());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product Type";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Model Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Product ID";
			this->label3->Click += gcnew System::EventHandler(this, &issueProductForm::label3_Click);
			// 
			// comboBox_Type
			// 
			this->comboBox_Type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Type->FormattingEnabled = true;
			this->comboBox_Type->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Car", L"Bike", L"Truck"});
			this->comboBox_Type->Location = System::Drawing::Point(120, 50);
			this->comboBox_Type->Name = L"comboBox_Type";
			this->comboBox_Type->Size = System::Drawing::Size(121, 21);
			this->comboBox_Type->TabIndex = 1;
			this->comboBox_Type->SelectedIndexChanged += gcnew System::EventHandler(this, &issueProductForm::comboBox_Type_SelectedIndexChanged);
			// 
			// comboBox_Model
			// 
			this->comboBox_Model->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Model->FormattingEnabled = true;
			this->comboBox_Model->Location = System::Drawing::Point(120, 92);
			this->comboBox_Model->Name = L"comboBox_Model";
			this->comboBox_Model->Size = System::Drawing::Size(121, 21);
			this->comboBox_Model->TabIndex = 1;
			this->comboBox_Model->SelectedIndexChanged += gcnew System::EventHandler(this, &issueProductForm::comboBox_Model_SelectedIndexChanged);
			// 
			// comboBox_PID
			// 
			this->comboBox_PID->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_PID->FormattingEnabled = true;
			this->comboBox_PID->Location = System::Drawing::Point(120, 133);
			this->comboBox_PID->Name = L"comboBox_PID";
			this->comboBox_PID->Size = System::Drawing::Size(121, 21);
			this->comboBox_PID->TabIndex = 1;
			this->comboBox_PID->SelectedIndexChanged += gcnew System::EventHandler(this, &issueProductForm::comboBox_PID_SelectedIndexChanged);
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(93, 322);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(75, 23);
			this->submit->TabIndex = 2;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &issueProductForm::submit_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Manufacturer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Status";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 272);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Price";
			// 
			// Mname
			// 
			this->Mname->Location = System::Drawing::Point(120, 173);
			this->Mname->Name = L"Mname";
			this->Mname->Size = System::Drawing::Size(100, 20);
			this->Mname->TabIndex = 6;
			// 
			// Status
			// 
			this->Status->Location = System::Drawing::Point(120, 213);
			this->Status->Name = L"Status";
			this->Status->Size = System::Drawing::Size(100, 20);
			this->Status->TabIndex = 7;
			// 
			// Price
			// 
			this->Price->Location = System::Drawing::Point(120, 265);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(100, 20);
			this->Price->TabIndex = 8;
			// 
			// issueProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 372);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->Status);
			this->Controls->Add(this->Mname);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->comboBox_PID);
			this->Controls->Add(this->comboBox_Model);
			this->Controls->Add(this->comboBox_Type);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"issueProductForm";
			this->Text = L"Issue Product";
			this->Load += gcnew System::EventHandler(this, &issueProductForm::issueProductForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox_Type_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ type = comboBox_Type->Text;
			 //MessageBox::Show(type);
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.manufacturer where Category='"+type+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				while(myReader->Read()){
					String^ MName = myReader->GetString("ModelName");
					comboBox_Model->Items->Add(MName);
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void comboBox_Model_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ Nm = comboBox_Model->Text;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.overallstock where ProductName='"+Nm+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				while(myReader->Read()){
					String^ Req = myReader->GetString("Pid");
					comboBox_PID->Items->Add(Req);
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
		 }

private: void addtoout(void)
{
	         //Object^ Nm = comboBox_Model->SelectedItem;
			 //Object^ Ty = comboBox_Type->SelectedItem;
			 //Object^ PSID = comboBox_PID->SelectedItem;
			 String^ Un = GlobalClass::currentuser;
			 DateTime datetime = DateTime::Now;
		     String^ Dtime = datetime.ToString();

             String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("INSERT INTO resource_management.issuedstock (ProductName, ManufacturerName,Price,ProductType,Status,Pid,Deo,TimeStamp) VALUES ('"+this->comboBox_Model->Items[comboBox_Model->SelectedIndex]->ToString()+"', '"+Mname->Text+"', '"+Price->Text+"', '"+this->comboBox_Type->Text+"', '"+Status->Text+"','"+this->comboBox_PID->Text+"','"+Un+"','"+Dtime+"');;",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("New Record added\n");
				while(myReader->Read()){
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
		 }

//adds history
private: void addhistory(void)
{
	         Object^ Nm = comboBox_Model->SelectedItem;
			 Object^ Ty = comboBox_Type->SelectedItem;
			 Object^ PSID = comboBox_PID->SelectedItem;
			 String^ Un = GlobalClass::currentuser;
			 DateTime datetime = DateTime::Now;
		     String^ Dtime = datetime.ToString();

             String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("INSERT INTO resource_management.history (ModelName, ManufacturerName,Price,Type,Status,ProductId,Action,Deo,TimeStamp) VALUES ('"+Nm->ToString()+"', '"+Mname->Text+"', '"+Price->Text+"', '"+Ty->ToString()+"', '"+Status->Text+"','"+PSID->ToString()+"','ISSUED','"+Un+"','"+Dtime+"');;",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("New Record added\n");
				while(myReader->Read()){
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
		 }


private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
             String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("DELETE FROM resource_management.overallstock WHERE Pid='"+comboBox_PID->Text+"';;",conDataBase);
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
			 addtoout();
			 addhistory();
			 Mname->Text = "";
			 Status->Text = "";
			 Price->Text = "";
		 }


private: System::Void comboBox_PID_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
           	 String^ id = comboBox_PID->Text;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.overallstock where Pid='"+id+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				if (myReader->Read()){
					String^ Mn = myReader->GetString("Manufacturer");
					Mname->Text = Mn;
					String^ Sta = myReader->GetString("Status");
					Status->Text = Sta;
					String^ Pri = myReader->GetString("Price");
					Price->Text = Pri;
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void issueProductForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
