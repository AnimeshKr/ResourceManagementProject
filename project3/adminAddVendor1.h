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
	/// Summary for adminAddVendor
	/// </summary>
	public ref class adminAddVendor : public System::Windows::Forms::Form
	{
	public:
		adminAddVendor(void)
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
		~adminAddVendor()
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
	private: System::Windows::Forms::TextBox^  textBox_Man;
	private: System::Windows::Forms::TextBox^  textBox_Model;
	private: System::Windows::Forms::TextBox^  textBox_Price;
	private: System::Windows::Forms::TextBox^  textBox_Cat;
	private: System::Windows::Forms::Button^  submit;
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
			this->textBox_Man = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Model = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Price = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Cat = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Manufacturer:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Model Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Price";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Category";
			// 
			// textBox_Man
			// 
			this->textBox_Man->Location = System::Drawing::Point(118, 45);
			this->textBox_Man->Name = L"textBox_Man";
			this->textBox_Man->Size = System::Drawing::Size(139, 20);
			this->textBox_Man->TabIndex = 1;
			// 
			// textBox_Model
			// 
			this->textBox_Model->Location = System::Drawing::Point(118, 85);
			this->textBox_Model->Name = L"textBox_Model";
			this->textBox_Model->Size = System::Drawing::Size(139, 20);
			this->textBox_Model->TabIndex = 1;
			// 
			// textBox_Price
			// 
			this->textBox_Price->Location = System::Drawing::Point(118, 126);
			this->textBox_Price->Name = L"textBox_Price";
			this->textBox_Price->Size = System::Drawing::Size(139, 20);
			this->textBox_Price->TabIndex = 1;
			// 
			// textBox_Cat
			// 
			this->textBox_Cat->Location = System::Drawing::Point(118, 167);
			this->textBox_Cat->Name = L"textBox_Cat";
			this->textBox_Cat->Size = System::Drawing::Size(139, 20);
			this->textBox_Cat->TabIndex = 1;
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(88, 210);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(89, 23);
			this->submit->TabIndex = 2;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &adminAddVendor::submit_Click);
			// 
			// adminAddVendor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->textBox_Cat);
			this->Controls->Add(this->textBox_Price);
			this->Controls->Add(this->textBox_Model);
			this->Controls->Add(this->textBox_Man);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"adminAddVendor";
			this->Text = L"Add Vendor";
			this->Load += gcnew System::EventHandler(this, &adminAddVendor::adminAddVendor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void adminAddVendor_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) { //submits the entered values to the manufacturers table
            String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into resource_management.manufacturer (ManufacturerName,ModelName,Price,Category) values('"+this->textBox_Man->Text+"','"+this->textBox_Model->Text+"','"+this->textBox_Price->Text+"','"+this->textBox_Cat->Text+"');",conDataBase);
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
			 textBox_Man->Text= "";
			 textBox_Model->Text= "";
			 textBox_Price->Text= "";
			 textBox_Cat->Text= "";
			 }
		 }
};
}
