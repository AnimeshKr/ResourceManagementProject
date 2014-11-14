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
	/// Summary for deoAddVendor
	/// </summary>
	public ref class deoAddVendor : public System::Windows::Forms::Form
	{
	public:
		deoAddVendor(void)
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
		~deoAddVendor()
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
	private: System::Windows::Forms::ComboBox^  comboBox_Type;
	private: System::Windows::Forms::TextBox^  textBox_Man;
	private: System::Windows::Forms::TextBox^  textBox_Model;
	private: System::Windows::Forms::TextBox^  textBox_Price;
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
			this->comboBox_Type = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_Man = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Model = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Price = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product Type";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Manufacturer";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Model Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Price";
			// 
			// comboBox_Type
			// 
			this->comboBox_Type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Type->FormattingEnabled = true;
			this->comboBox_Type->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Car", L"Bike", L"Truck"});
			this->comboBox_Type->Location = System::Drawing::Point(106, 42);
			this->comboBox_Type->Name = L"comboBox_Type";
			this->comboBox_Type->Size = System::Drawing::Size(121, 21);
			this->comboBox_Type->TabIndex = 1;
			// 
			// textBox_Man
			// 
			this->textBox_Man->Location = System::Drawing::Point(106, 85);
			this->textBox_Man->Name = L"textBox_Man";
			this->textBox_Man->Size = System::Drawing::Size(121, 20);
			this->textBox_Man->TabIndex = 2;
			// 
			// textBox_Model
			// 
			this->textBox_Model->Location = System::Drawing::Point(106, 131);
			this->textBox_Model->Name = L"textBox_Model";
			this->textBox_Model->Size = System::Drawing::Size(121, 20);
			this->textBox_Model->TabIndex = 2;
			// 
			// textBox_Price
			// 
			this->textBox_Price->Location = System::Drawing::Point(106, 176);
			this->textBox_Price->Name = L"textBox_Price";
			this->textBox_Price->Size = System::Drawing::Size(121, 20);
			this->textBox_Price->TabIndex = 2;
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(87, 226);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(75, 23);
			this->submit->TabIndex = 3;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &deoAddVendor::submit_Click);
			// 
			// deoAddVendor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->textBox_Price);
			this->Controls->Add(this->textBox_Model);
			this->Controls->Add(this->textBox_Man);
			this->Controls->Add(this->comboBox_Type);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"deoAddVendor";
			this->Text = L"Add Vendor";
			this->Load += gcnew System::EventHandler(this, &deoAddVendor::deoAddVendor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) //adds vendor to the manufacturer table
			{ String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 String^ Un = GlobalClass::currentuser;
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into resource_management.tempmanufacturer (ManufacturerName,ModelName,Price,Category,Deo) values('"+this->textBox_Man->Text+"','"+this->textBox_Model->Text+"','"+this->textBox_Price->Text+"','"+this->comboBox_Type->Text+"','"+Un+"');",conDataBase);
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
			 textBox_Man->Text= "";
			 textBox_Model->Text= "";
			 textBox_Price->Text= "";
		 }
private: System::Void deoAddVendor_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
