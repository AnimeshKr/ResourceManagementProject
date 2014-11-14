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
	/// Summary for DeleteVendor
	/// </summary>
	public ref class DeleteVendor : public System::Windows::Forms::Form
	{
	public:
		DeleteVendor(void)
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
		~DeleteVendor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  Vendors;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Mname;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Modename;
	private: System::Windows::Forms::TextBox^  Price;
	private: System::Windows::Forms::TextBox^  Cat;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
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
			this->Vendors = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Modename = (gcnew System::Windows::Forms::TextBox());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->Cat = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Vendors
			// 
			this->Vendors->FormattingEnabled = true;
			this->Vendors->Location = System::Drawing::Point(228, 57);
			this->Vendors->Name = L"Vendors";
			this->Vendors->Size = System::Drawing::Size(120, 95);
			this->Vendors->TabIndex = 15;
			this->Vendors->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteVendor::Vendors_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(228, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Refresh ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DeleteVendor::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Manufacturer";
			// 
			// Mname
			// 
			this->Mname->Location = System::Drawing::Point(103, 57);
			this->Mname->Name = L"Mname";
			this->Mname->Size = System::Drawing::Size(100, 20);
			this->Mname->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Model";
			// 
			// Modename
			// 
			this->Modename->Location = System::Drawing::Point(103, 100);
			this->Modename->Name = L"Modename";
			this->Modename->Size = System::Drawing::Size(100, 20);
			this->Modename->TabIndex = 20;
			// 
			// Price
			// 
			this->Price->Location = System::Drawing::Point(103, 149);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(100, 20);
			this->Price->TabIndex = 21;
			// 
			// Cat
			// 
			this->Cat->Location = System::Drawing::Point(103, 201);
			this->Cat->Name = L"Cat";
			this->Cat->Size = System::Drawing::Size(100, 20);
			this->Cat->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Price";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Category";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 23);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteVendor::button1_Click);
			// 
			// DeleteVendor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 319);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Cat);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->Modename);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Mname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Vendors);
			this->Name = L"DeleteVendor";
			this->Text = L"DeleteVendor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
   
    	 private: void fillrequest(void) //fills the listbox
        {                                //by fetching from the manufacturer table
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.manufacturer;",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				while(myReader->Read()){
					String^ Req = myReader->GetString("ModelName");
					Vendors->Items->Add(Req);
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }

  
         }

	private: System::Void Vendors_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { //fills the details of the manufacturer in the corresponding textboxes
			 String^ id = Vendors->Text;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.manufacturer where ModelName='"+id+"';",conDataBase);
			 MySqlDataReader^ myReader;

			 try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				
				if (myReader->Read()){
					String^ Mname_ = myReader->GetString("ManufacturerName");
					Mname->Text = Mname_;
					String^ Model = myReader->GetString("ModelName");
					Modename->Text = Model;
					String^ Price_ = myReader->GetString("Price");
					Price->Text = Price_;
					String^ Deo = myReader->GetString("Category");
					Cat->Text = Deo;
				 }
				
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //deletes the vendor from the table
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("DELETE FROM resource_management.manufacturer WHERE ModelName='"+Vendors->Text+"';;",conDataBase);
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
			 Mname->Text = "";
			 Modename->Text = "";
			 Price->Text = "";
			 Cat->Text = "";
			 }

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Vendors->Items->Clear();
			 fillrequest();
		 }
};
}
