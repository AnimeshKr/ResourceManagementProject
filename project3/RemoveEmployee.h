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
	/// Summary for RemoveEmployee
	/// </summary>
	public ref class RemoveEmployee : public System::Windows::Forms::Form
	{
	public:
		RemoveEmployee(void)
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
		~RemoveEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  Employees;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Fname;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Lname;
	private: System::Windows::Forms::TextBox^  Priv;






	private: System::Windows::Forms::Label^  label3;

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
			this->Employees = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Fname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Lname = (gcnew System::Windows::Forms::TextBox());
			this->Priv = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Employees
			// 
			this->Employees->FormattingEnabled = true;
			this->Employees->Location = System::Drawing::Point(228, 57);
			this->Employees->Name = L"Employees";
			this->Employees->Size = System::Drawing::Size(120, 56);
			this->Employees->TabIndex = 15;
			this->Employees->SelectedIndexChanged += gcnew System::EventHandler(this, &RemoveEmployee::Vendors_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(228, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"refresh ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RemoveEmployee::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"First Name";
			// 
			// Fname
			// 
			this->Fname->Location = System::Drawing::Point(103, 57);
			this->Fname->Name = L"Fname";
			this->Fname->Size = System::Drawing::Size(100, 20);
			this->Fname->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Last Name";
			// 
			// Lname
			// 
			this->Lname->Location = System::Drawing::Point(103, 100);
			this->Lname->Name = L"Lname";
			this->Lname->Size = System::Drawing::Size(100, 20);
			this->Lname->TabIndex = 20;
			// 
			// Priv
			// 
			this->Priv->Location = System::Drawing::Point(103, 149);
			this->Priv->Name = L"Priv";
			this->Priv->Size = System::Drawing::Size(100, 20);
			this->Priv->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Privileges";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 23);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RemoveEmployee::button1_Click);
			// 
			// RemoveEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 319);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Priv);
			this->Controls->Add(this->Lname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Fname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Employees);
			this->Name = L"RemoveEmployee";
			this->Text = L"RemoveEmployee";
			this->Load += gcnew System::EventHandler(this, &RemoveEmployee::RemoveEmployee_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
   
    	 private: void fillrequest(void)
        {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.users;",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				while(myReader->Read()){
					String^ Req = myReader->GetString("name");
					Employees->Items->Add(Req);
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }

  
         }

	private: System::Void Vendors_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ id = Employees->Text;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.users where name='"+id+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				if (myReader->Read()){
					String^ Mname_ = myReader->GetString("FirstName");
					Fname->Text = Mname_;
					String^ Model = myReader->GetString("LastName");
					Lname->Text = Model;
					String^ Price_ = myReader->GetString("mode");
					Priv->Text = Price_;
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("DELETE FROM resource_management.users WHERE name='"+Employees->Text+"' and FirstName='"+Fname->Text+"';;",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("Request deleted\n");
				while(myReader->Read()){
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 Fname->Text = "";
			 Lname->Text = "";
			 Priv->Text = "";
			 }

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Employees->Items->Clear();
			 fillrequest();
		 }
private: System::Void RemoveEmployee_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
