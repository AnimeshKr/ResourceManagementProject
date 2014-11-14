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
	/// Summary for addProduct
	/// </summary>
	public ref class addProduct : public System::Windows::Forms::Form
	{
	public:
		addProduct(void)
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
		~addProduct()
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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox_Type;
	private: System::Windows::Forms::ComboBox^  comboBox_Model;
	private: System::Windows::Forms::ComboBox^  comboBox_Status;
	private: System::Windows::Forms::TextBox^  textBox_Man;
	private: System::Windows::Forms::TextBox^  textBox_Price;
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::TextBox^  Pid;
	private: System::Windows::Forms::Label^  label6;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Type = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Model = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Status = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_Man = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Price = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->Pid = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product Type";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Model Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Manufacturer";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Status";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Price";
			// 
			// comboBox_Type
			// 
			this->comboBox_Type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Type->FormattingEnabled = true;
			this->comboBox_Type->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Car", L"Bike", L"Truck"});
			this->comboBox_Type->Location = System::Drawing::Point(119, 25);
			this->comboBox_Type->Name = L"comboBox_Type";
			this->comboBox_Type->Size = System::Drawing::Size(121, 21);
			this->comboBox_Type->TabIndex = 1;
			this->comboBox_Type->SelectedIndexChanged += gcnew System::EventHandler(this, &addProduct::comboBox_Type_SelectedIndexChanged);
			// 
			// comboBox_Model
			// 
			this->comboBox_Model->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Model->FormattingEnabled = true;
			this->comboBox_Model->Location = System::Drawing::Point(119, 60);
			this->comboBox_Model->Name = L"comboBox_Model";
			this->comboBox_Model->Size = System::Drawing::Size(121, 21);
			this->comboBox_Model->TabIndex = 1;
			this->comboBox_Model->SelectedIndexChanged += gcnew System::EventHandler(this, &addProduct::comboBox_Model_SelectedIndexChanged);
			// 
			// comboBox_Status
			// 
			this->comboBox_Status->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Status->FormattingEnabled = true;
			this->comboBox_Status->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Ready", L"Not Ready"});
			this->comboBox_Status->Location = System::Drawing::Point(119, 159);
			this->comboBox_Status->Name = L"comboBox_Status";
			this->comboBox_Status->Size = System::Drawing::Size(121, 21);
			this->comboBox_Status->TabIndex = 1;
			// 
			// textBox_Man
			// 
			this->textBox_Man->Location = System::Drawing::Point(119, 98);
			this->textBox_Man->Name = L"textBox_Man";
			this->textBox_Man->Size = System::Drawing::Size(121, 20);
			this->textBox_Man->TabIndex = 2;
			// 
			// textBox_Price
			// 
			this->textBox_Price->Location = System::Drawing::Point(119, 190);
			this->textBox_Price->Name = L"textBox_Price";
			this->textBox_Price->Size = System::Drawing::Size(121, 20);
			this->textBox_Price->TabIndex = 2;
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(92, 226);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(75, 23);
			this->submit->TabIndex = 3;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &addProduct::submit_Click);
			// 
			// Pid
			// 
			this->Pid->Location = System::Drawing::Point(119, 133);
			this->Pid->Name = L"Pid";
			this->Pid->Size = System::Drawing::Size(121, 20);
			this->Pid->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"ProductID";
			// 
			// addProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Pid);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->textBox_Price);
			this->Controls->Add(this->textBox_Man);
			this->Controls->Add(this->comboBox_Status);
			this->Controls->Add(this->comboBox_Model);
			this->Controls->Add(this->comboBox_Type);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"addProduct";
			this->Text = L"Add Product";
			this->Load += gcnew System::EventHandler(this, &addProduct::addProduct_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

    
private: void addhistory(void) //adds history to the history table
{
             String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into resource_management.history (ProductId,ModelName,ManufacturerName,Type,Price,Status,Deo,Action) values('"+this->Pid->Text+"','"+this->comboBox_Model->Text+"','"+this->textBox_Man->Text+"','"+this->comboBox_Type->Text+"','"+this->textBox_Price->Text+"','"+this->comboBox_Status->Text+"','USERNAME','Add');",conDataBase);
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

	private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) { //submits data to the overallstock table
		     String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into resource_management.overallstock (ProductType,Manufacturer,Price,Status,ProductName,pid) values('"+this->comboBox_Type->Text+"','"+this->textBox_Man->Text+"','"+this->textBox_Price->Text+"','"+this->comboBox_Status->Text+"','"+this->comboBox_Model->Text+"','"+this->Pid->Text+"');",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("New Product added\n");
				while(myReader->Read()){
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 addhistory();
			 textBox_Man->Text = "";
			 Pid->Text = "";
			 textBox_Price->Text = "";

		 }
private: System::Void addProduct_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox_Type_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { //fills textboxes according to the selected index in combobox
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
private: System::Void comboBox_Model_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { //fills textboxes according to the selected index in the combobox
			 String^ Nm = comboBox_Model->Text;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.manufacturer where ModelName='"+Nm+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				if (myReader->Read()){
					String^ Req = myReader->GetString("ManufacturerName");
					textBox_Man->Text = Req;

					String^ Price = myReader->GetString("Price");
					textBox_Price->Text = Price;
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
		 }
};
}
