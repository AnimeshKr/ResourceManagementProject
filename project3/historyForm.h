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
	/// Summary for historyForm
	/// </summary>
	public ref class historyForm : public System::Windows::Forms::Form
	{
	public:
		historyForm(void)
		{
			InitializeComponent();
			fillrequest();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~historyForm()
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
	private: System::Windows::Forms::TextBox^  Man;
	private: System::Windows::Forms::TextBox^  Mod;
	private: System::Windows::Forms::TextBox^  Pid;
	private: System::Windows::Forms::TextBox^  Act;




	private: System::Windows::Forms::ListBox^  listBox_History;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Typ;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  status_;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  price_;


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
			this->Man = (gcnew System::Windows::Forms::TextBox());
			this->Mod = (gcnew System::Windows::Forms::TextBox());
			this->Pid = (gcnew System::Windows::Forms::TextBox());
			this->Act = (gcnew System::Windows::Forms::TextBox());
			this->listBox_History = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Typ = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->status_ = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->price_ = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Manufacturer";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Model Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Product ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Action";
			// 
			// Man
			// 
			this->Man->Location = System::Drawing::Point(128, 44);
			this->Man->Name = L"Man";
			this->Man->Size = System::Drawing::Size(100, 20);
			this->Man->TabIndex = 1;
			// 
			// Mod
			// 
			this->Mod->Location = System::Drawing::Point(128, 93);
			this->Mod->Name = L"Mod";
			this->Mod->Size = System::Drawing::Size(100, 20);
			this->Mod->TabIndex = 1;
			// 
			// Pid
			// 
			this->Pid->Location = System::Drawing::Point(128, 145);
			this->Pid->Name = L"Pid";
			this->Pid->Size = System::Drawing::Size(100, 20);
			this->Pid->TabIndex = 1;
			// 
			// Act
			// 
			this->Act->Location = System::Drawing::Point(128, 196);
			this->Act->Name = L"Act";
			this->Act->Size = System::Drawing::Size(100, 20);
			this->Act->TabIndex = 1;
			// 
			// listBox_History
			// 
			this->listBox_History->FormattingEnabled = true;
			this->listBox_History->Location = System::Drawing::Point(349, 49);
			this->listBox_History->Name = L"listBox_History";
			this->listBox_History->Size = System::Drawing::Size(120, 134);
			this->listBox_History->TabIndex = 2;
			this->listBox_History->SelectedIndexChanged += gcnew System::EventHandler(this, &historyForm::listBox_History_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(389, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"History";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Type";
			// 
			// Typ
			// 
			this->Typ->Location = System::Drawing::Point(128, 12);
			this->Typ->Name = L"Typ";
			this->Typ->Size = System::Drawing::Size(100, 20);
			this->Typ->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Status";
			// 
			// status_
			// 
			this->status_->Location = System::Drawing::Point(128, 119);
			this->status_->Name = L"status_";
			this->status_->Size = System::Drawing::Size(100, 20);
			this->status_->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Price";
			// 
			// price_
			// 
			this->price_->Location = System::Drawing::Point(128, 170);
			this->price_->Name = L"price_";
			this->price_->Size = System::Drawing::Size(100, 20);
			this->price_->TabIndex = 10;
			// 
			// historyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 261);
			this->Controls->Add(this->price_);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->status_);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Typ);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox_History);
			this->Controls->Add(this->Act);
			this->Controls->Add(this->Pid);
			this->Controls->Add(this->Mod);
			this->Controls->Add(this->Man);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"historyForm";
			this->Text = L"History";
			this->Load += gcnew System::EventHandler(this, &historyForm::historyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
   
     private: void fillrequest(void) //fills the listbox by fetching from the history table
        {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 String^ Un = GlobalClass::currentuser;
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.history where Deo='"+Un+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				while(myReader->Read()){
					String^ Req = myReader->GetString("Id");

					listBox_History->Items->Add(Req);
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }

  
         }

	private: System::Void listBox_History_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { //fills details by fecthing form the history table
			 String^ id = listBox_History->Text;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
	
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.history where id='"+id+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				if (myReader->Read()){ //getting details
					String^ Type = myReader->GetString("Type");
					Typ->Text = Type;
					String^ Pname = myReader->GetString("ModelName");
					Mod->Text = Pname;
					String^ Mname = myReader->GetString("ManufacturerName");
					Man->Text = Mname;
					String^ Status = myReader->GetString("Status");
					status_->Text = Status;
					String^ Price1 = myReader->GetString("Price");
					price_->Text = Price1;
					String^ ProductID1 = myReader->GetString("ProductId");
					Pid->Text = ProductID1;
					String^ ACTION1 = myReader->GetString("Action");
					Act->Text = ACTION1;
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void historyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
