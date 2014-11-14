#pragma once
#include "adminAddVendor1.h"
#include "addEmployeeForm.h"
#include "vendorRequests.h"
#include "addNotifications.h"
#include "issueNotifications.h"
#include "changePass.h"
#include "stdafx.h"
#include "DeleteVendor.h"
#include "RemoveEmployee.h"
#include "AddContacts.h"

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
	/// Summary for home
	/// </summary>
	public ref class home : public System::Windows::Forms::Form
	{
	public:
		int gb1Toggle, gb2Toggle;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	public: 
	private: System::Windows::Forms::ToolStripMenuItem^  notificationsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addedItemsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  issuedItemsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  changePasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adminLogoutToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  requestsToolStripMenuItem1;
	private: System::Windows::Forms::Button^  empList;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  Products;
	private: System::Windows::Forms::Label^  Userdetails;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  AddContact;







	private: System::Windows::Forms::Timer^  timer1;
	public: 
		home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//gb1Toggle = 0;
			//gb2Toggle = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~home()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Button^  addVendor;

	private: System::Windows::Forms::Button^  iStock;



	private: System::Windows::Forms::Button^  curStock;
	private: System::Windows::Forms::Button^  addEmployee;






	private: System::Windows::Forms::Label^  dateTime;
















	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->addVendor = (gcnew System::Windows::Forms::Button());
			this->iStock = (gcnew System::Windows::Forms::Button());
			this->curStock = (gcnew System::Windows::Forms::Button());
			this->addEmployee = (gcnew System::Windows::Forms::Button());
			this->dateTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->notificationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addedItemsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issuedItemsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->requestsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminLogoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empList = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Products = (gcnew System::Windows::Forms::Button());
			this->Userdetails = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->AddContact = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// addVendor
			// 
			this->addVendor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addVendor->Location = System::Drawing::Point(-3, 111);
			this->addVendor->Name = L"addVendor";
			this->addVendor->Size = System::Drawing::Size(144, 33);
			this->addVendor->TabIndex = 2;
			this->addVendor->Text = L"Add Vendor";
			this->addVendor->UseVisualStyleBackColor = true;
			this->addVendor->Click += gcnew System::EventHandler(this, &home::addVendor_Click);
			// 
			// iStock
			// 
			this->iStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->iStock->Location = System::Drawing::Point(-2, 83);
			this->iStock->Name = L"iStock";
			this->iStock->Size = System::Drawing::Size(143, 29);
			this->iStock->TabIndex = 3;
			this->iStock->Text = L"Issued Stock";
			this->iStock->UseVisualStyleBackColor = true;
			this->iStock->Click += gcnew System::EventHandler(this, &home::iStock_Click);
			// 
			// curStock
			// 
			this->curStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->curStock->Location = System::Drawing::Point(-3, 58);
			this->curStock->Name = L"curStock";
			this->curStock->Size = System::Drawing::Size(144, 26);
			this->curStock->TabIndex = 4;
			this->curStock->Text = L"Current Stock";
			this->curStock->UseVisualStyleBackColor = true;
			this->curStock->Click += gcnew System::EventHandler(this, &home::curStock_Click);
			// 
			// addEmployee
			// 
			this->addEmployee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addEmployee->Location = System::Drawing::Point(-3, 171);
			this->addEmployee->Name = L"addEmployee";
			this->addEmployee->Size = System::Drawing::Size(144, 32);
			this->addEmployee->TabIndex = 7;
			this->addEmployee->Text = L"Add Employee";
			this->addEmployee->UseVisualStyleBackColor = true;
			this->addEmployee->Click += gcnew System::EventHandler(this, &home::addEmployee_Click);
			// 
			// dateTime
			// 
			this->dateTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTime->AutoSize = true;
			this->dateTime->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dateTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTime->ForeColor = System::Drawing::Color::Bisque;
			this->dateTime->Location = System::Drawing::Point(677, 27);
			this->dateTime->Name = L"dateTime";
			this->dateTime->Size = System::Drawing::Size(227, 29);
			this->dateTime->TabIndex = 11;
			this->dateTime->Text = L"03/04/2014 00:00:00";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &home::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->notificationsToolStripMenuItem, 
				this->settingsToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(905, 24);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &home::menuStrip1_ItemClicked);
			// 
			// notificationsToolStripMenuItem
			// 
			this->notificationsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->addedItemsToolStripMenuItem, 
				this->issuedItemsToolStripMenuItem, this->requestsToolStripMenuItem1});
			this->notificationsToolStripMenuItem->Name = L"notificationsToolStripMenuItem";
			this->notificationsToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->notificationsToolStripMenuItem->Text = L"Notifications";
			// 
			// addedItemsToolStripMenuItem
			// 
			this->addedItemsToolStripMenuItem->Name = L"addedItemsToolStripMenuItem";
			this->addedItemsToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->addedItemsToolStripMenuItem->Text = L"Added Items";
			this->addedItemsToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::addedItemsToolStripMenuItem_Click);
			// 
			// issuedItemsToolStripMenuItem
			// 
			this->issuedItemsToolStripMenuItem->Name = L"issuedItemsToolStripMenuItem";
			this->issuedItemsToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->issuedItemsToolStripMenuItem->Text = L"Issued Items";
			this->issuedItemsToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::issuedItemsToolStripMenuItem_Click);
			// 
			// requestsToolStripMenuItem1
			// 
			this->requestsToolStripMenuItem1->Name = L"requestsToolStripMenuItem1";
			this->requestsToolStripMenuItem1->Size = System::Drawing::Size(141, 22);
			this->requestsToolStripMenuItem1->Text = L"Requests";
			this->requestsToolStripMenuItem1->Click += gcnew System::EventHandler(this, &home::requestsToolStripMenuItem1_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->changePasswordToolStripMenuItem, 
				this->adminLogoutToolStripMenuItem});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// changePasswordToolStripMenuItem
			// 
			this->changePasswordToolStripMenuItem->Name = L"changePasswordToolStripMenuItem";
			this->changePasswordToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->changePasswordToolStripMenuItem->Text = L"Change Password";
			this->changePasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::changePasswordToolStripMenuItem_Click);
			// 
			// adminLogoutToolStripMenuItem
			// 
			this->adminLogoutToolStripMenuItem->Name = L"adminLogoutToolStripMenuItem";
			this->adminLogoutToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->adminLogoutToolStripMenuItem->Text = L"Logout";
			this->adminLogoutToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::logoutToolStripMenuItem_Click);
			// 
			// empList
			// 
			this->empList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->empList->Location = System::Drawing::Point(-3, 143);
			this->empList->Name = L"empList";
			this->empList->Size = System::Drawing::Size(144, 29);
			this->empList->TabIndex = 5;
			this->empList->Text = L"Employee List";
			this->empList->UseVisualStyleBackColor = true;
			this->empList->Click += gcnew System::EventHandler(this, &home::empList_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(147, 58);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(746, 388);
			this->dataGridView1->TabIndex = 19;
			// 
			// Products
			// 
			this->Products->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Products->Location = System::Drawing::Point(-1, 202);
			this->Products->Name = L"Products";
			this->Products->Size = System::Drawing::Size(142, 32);
			this->Products->TabIndex = 20;
			this->Products->Text = L"Available Products";
			this->Products->UseVisualStyleBackColor = true;
			this->Products->Click += gcnew System::EventHandler(this, &home::Products_Click);
			// 
			// Userdetails
			// 
			this->Userdetails->AutoSize = true;
			this->Userdetails->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Userdetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Userdetails->ForeColor = System::Drawing::Color::Bisque;
			this->Userdetails->Location = System::Drawing::Point(69, 27);
			this->Userdetails->Name = L"Userdetails";
			this->Userdetails->Size = System::Drawing::Size(0, 29);
			this->Userdetails->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Bisque;
			this->label1->Location = System::Drawing::Point(92, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(2, 31);
			this->label1->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Bisque;
			this->label2->Location = System::Drawing::Point(4, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 29);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Hello, ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(-2, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 33);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Remove Vendor";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &home::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(-1, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 33);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Remove User";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &home::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(-1, 296);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 26);
			this->button3->TabIndex = 25;
			this->button3->Text = L"EmployeeContacts";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &home::button3_Click);
			// 
			// AddContact
			// 
			this->AddContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AddContact->Location = System::Drawing::Point(-1, 321);
			this->AddContact->Name = L"AddContact";
			this->AddContact->Size = System::Drawing::Size(144, 26);
			this->AddContact->TabIndex = 26;
			this->AddContact->Text = L"AddEmployeeContacts";
			this->AddContact->UseVisualStyleBackColor = true;
			this->AddContact->Click += gcnew System::EventHandler(this, &home::AddContacts_Click);
			// 
			// home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(905, 597);
			this->Controls->Add(this->AddContact);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Products);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Userdetails);
			this->Controls->Add(this->dateTime);
			this->Controls->Add(this->addEmployee);
			this->Controls->Add(this->empList);
			this->Controls->Add(this->curStock);
			this->Controls->Add(this->iStock);
			this->Controls->Add(this->addVendor);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"home";
			this->Text = L"ADMIN HOME";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &home::home_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &home::home_FormClosed);
			this->Load += gcnew System::EventHandler(this, &home::home_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) { //timer to change the label for timer
			 DateTime datetime = DateTime::Now;
		     this -> dateTime -> Text = datetime.ToString();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e){}
private: System::Void home_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {//shows confirmation on clicking cross button
			 if ((MessageBox::Show(
     "This will Logout and Close the application. Are you sure?", 
     "Logout and Exit", MessageBoxButtons::YesNo, 
     MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes))
  {
     // cancel the closure of the form.
     //Application::Exit();
	  //e->Cancel = false;
			 }else{e->Cancel = true;}
		 }
private: System::Void home_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 Application::Exit();
		 }

private: System::Void logoutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void addVendor_Click(System::Object^  sender, System::EventArgs^  e) {
			 adminAddVendor ^ vend = gcnew adminAddVendor();
			 vend->ShowDialog();
		 }
private: System::Void addEmployee_Click(System::Object^  sender, System::EventArgs^  e) {
			 addEmployeeForm^ emp = gcnew addEmployeeForm();
			 emp->ShowDialog();
		 }
private: System::Void requestsToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 vendorRequests^ req = gcnew vendorRequests();
			 req->ShowDialog();
		 }
private: System::Void addedItemsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 addNotifications^ addN = gcnew addNotifications();
			 addN->ShowDialog();
		 }


private: System::Void issuedItemsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 issueNotifications ^ issue = gcnew issueNotifications();
			 issue->ShowDialog();
		 }
private: System::Void changePasswordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 changePass^ cpass = gcnew changePass();
			 cpass->ShowDialog();
		 }

		 private: void fillemptable(void){ //fills the datagridview form the user table
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.users;",conDataBase);
			MySqlDataReader^ myReader;

			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable^ dbdataset = gcnew DataTable();  
				 sda->Fill(dbdataset);
				 BindingSource^ bsource = gcnew BindingSource(); 

				 bsource->DataSource = dbdataset;
				 dataGridView1->DataSource = bsource; 
				 sda->Update(dbdataset);
			  }
				

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }

             private: void filloverallstocktable(void){ //fills overall stock table
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.overallstock;",conDataBase);
			MySqlDataReader^ myReader;

			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable^ dbdataset = gcnew DataTable();  
				 sda->Fill(dbdataset);
				 BindingSource^ bsource = gcnew BindingSource(); 

				 bsource->DataSource = dbdataset;
				 dataGridView1->DataSource = bsource; 
				 sda->Update(dbdataset);
			  }
				

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }

             private: void fillemployeecontact(void){ //fills employee contacts in datagridview
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("SELECT * FROM resource_management.employeecontacts;",conDataBase);
			MySqlDataReader^ myReader;

			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable^ dbdataset = gcnew DataTable();  
				 sda->Fill(dbdataset);
				 BindingSource^ bsource = gcnew BindingSource(); 

				 bsource->DataSource = dbdataset;
				 dataGridView1->DataSource = bsource; 
				 sda->Update(dbdataset);
			  }
				

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }

             

        private: void fillissuedstocktable(void){//fills issued stock in datagridview
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.issuedstock;",conDataBase);
			MySqlDataReader^ myReader;

			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable^ dbdataset = gcnew DataTable();  
				 sda->Fill(dbdataset);
				 BindingSource^ bsource = gcnew BindingSource(); 

				 bsource->DataSource = dbdataset;
				 dataGridView1->DataSource = bsource; 
				 sda->Update(dbdataset);
			  }
				

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }

           private: void fillmantable(void){ //fills manufacturer in the datagridview
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from resource_management.manufacturer;",conDataBase);
			MySqlDataReader^ myReader;

			 try{
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable^ dbdataset = gcnew DataTable();  
				 sda->Fill(dbdataset);
				 BindingSource^ bsource = gcnew BindingSource(); 

				 bsource->DataSource = dbdataset;
				 dataGridView1->DataSource = bsource; 
				 sda->Update(dbdataset);
			  }
				

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
			 }


private: System::Void curStock_Click(System::Object^  sender, System::EventArgs^  e) {
			 filloverallstocktable();
		 }
private: System::Void empList_Click(System::Object^  sender, System::EventArgs^  e) {
			 fillemptable();
		 }
private: System::Void iStock_Click(System::Object^  sender, System::EventArgs^  e) {
			 fillissuedstocktable();
		 }
private: System::Void Products_Click(System::Object^  sender, System::EventArgs^  e) {
			 fillmantable();
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void home_Load(System::Object^  sender, System::EventArgs^  e) { //sets default datagridview as user table
			 String^ Un = GlobalClass::currentuser;
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=toor";
			 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("SELECT * FROM resource_management.users where name='"+Un+"';",conDataBase);
			     MySqlDataReader^ myReader;

				  try{
			    conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				if (myReader->Read()){
					String^ Mname = myReader->GetString("FirstName");
					label1->Text = Mname;
				 }
			 }

			 catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //opens deletevendor form
			 DeleteVendor^ f = gcnew DeleteVendor();
			 f->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //opens remove employeeform
			 RemoveEmployee^ f = gcnew RemoveEmployee();
			 f->ShowDialog();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { //fills employee list
			 fillemployeecontact();
		 }
private: System::Void AddContacts_Click(System::Object^  sender, System::EventArgs^  e) { //opens addcontacts form
			 AddContacts^ nf = gcnew AddContacts();
			 nf->ShowDialog();
		 }
};
}