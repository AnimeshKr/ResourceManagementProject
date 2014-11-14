#pragma once
#include "stdafx.h"
#include "deoAddVendor.h"
#include "addProduct.h"
#include "issueProductForm.h"
#include "changePass.h"
#include "historyForm.h"


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
	/// Summary for home_DEO
	/// </summary>
	public ref class home_DEO : public System::Windows::Forms::Form
	{
	public:
		int gb1Toggle, gb2Toggle;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	public: 



	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  changePasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logoutToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  Products;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Timer^  timer1;
	public: 
		home_DEO(void)
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
		~home_DEO()
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
	private: System::Windows::Forms::Button^  history;
	private: System::Windows::Forms::Button^  iProduct;
	private: System::Windows::Forms::Button^  addProductBtn;




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
			this->history = (gcnew System::Windows::Forms::Button());
			this->iProduct = (gcnew System::Windows::Forms::Button());
			this->addProductBtn = (gcnew System::Windows::Forms::Button());
			this->dateTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Products = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// addVendor
			// 
			this->addVendor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addVendor->Location = System::Drawing::Point(-2, 111);
			this->addVendor->Name = L"addVendor";
			this->addVendor->Size = System::Drawing::Size(144, 33);
			this->addVendor->TabIndex = 2;
			this->addVendor->Text = L"Add Vendor";
			this->addVendor->UseVisualStyleBackColor = true;
			this->addVendor->Click += gcnew System::EventHandler(this, &home_DEO::addVendor_Click);
			// 
			// iStock
			// 
			this->iStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->iStock->Location = System::Drawing::Point(-1, 83);
			this->iStock->Name = L"iStock";
			this->iStock->Size = System::Drawing::Size(143, 29);
			this->iStock->TabIndex = 3;
			this->iStock->Text = L"Issued Stock";
			this->iStock->UseVisualStyleBackColor = true;
			this->iStock->Click += gcnew System::EventHandler(this, &home_DEO::iStock_Click);
			// 
			// curStock
			// 
			this->curStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->curStock->Location = System::Drawing::Point(-2, 58);
			this->curStock->Name = L"curStock";
			this->curStock->Size = System::Drawing::Size(144, 26);
			this->curStock->TabIndex = 4;
			this->curStock->Text = L"Current Stock";
			this->curStock->UseVisualStyleBackColor = true;
			this->curStock->Click += gcnew System::EventHandler(this, &home_DEO::curStock_Click);
			// 
			// history
			// 
			this->history->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->history->Location = System::Drawing::Point(-2, 204);
			this->history->Name = L"history";
			this->history->Size = System::Drawing::Size(144, 29);
			this->history->TabIndex = 5;
			this->history->Text = L"History";
			this->history->UseVisualStyleBackColor = true;
			this->history->Click += gcnew System::EventHandler(this, &home_DEO::history_Click);
			// 
			// iProduct
			// 
			this->iProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->iProduct->Location = System::Drawing::Point(-2, 143);
			this->iProduct->Name = L"iProduct";
			this->iProduct->Size = System::Drawing::Size(144, 31);
			this->iProduct->TabIndex = 6;
			this->iProduct->Text = L"Issue product";
			this->iProduct->UseVisualStyleBackColor = true;
			this->iProduct->Click += gcnew System::EventHandler(this, &home_DEO::iProduct_Click);
			// 
			// addProductBtn
			// 
			this->addProductBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addProductBtn->Location = System::Drawing::Point(-2, 173);
			this->addProductBtn->Name = L"addProductBtn";
			this->addProductBtn->Size = System::Drawing::Size(144, 32);
			this->addProductBtn->TabIndex = 7;
			this->addProductBtn->Text = L"Add Product";
			this->addProductBtn->UseVisualStyleBackColor = true;
			this->addProductBtn->Click += gcnew System::EventHandler(this, &home_DEO::addProductBtn_Click);
			// 
			// dateTime
			// 
			this->dateTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTime->AutoSize = true;
			this->dateTime->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dateTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTime->ForeColor = System::Drawing::Color::Bisque;
			this->dateTime->Location = System::Drawing::Point(678, 27);
			this->dateTime->Name = L"dateTime";
			this->dateTime->Size = System::Drawing::Size(227, 29);
			this->dateTime->TabIndex = 11;
			this->dateTime->Text = L"03/04/2014 00:00:00";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &home_DEO::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->settingsToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(905, 24);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &home_DEO::menuStrip1_ItemClicked);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->changePasswordToolStripMenuItem, 
				this->logoutToolStripMenuItem});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// changePasswordToolStripMenuItem
			// 
			this->changePasswordToolStripMenuItem->Name = L"changePasswordToolStripMenuItem";
			this->changePasswordToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->changePasswordToolStripMenuItem->Text = L"Change Password";
			this->changePasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &home_DEO::changePasswordToolStripMenuItem_Click);
			// 
			// logoutToolStripMenuItem
			// 
			this->logoutToolStripMenuItem->Name = L"logoutToolStripMenuItem";
			this->logoutToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->logoutToolStripMenuItem->Text = L"Logout";
			this->logoutToolStripMenuItem->Click += gcnew System::EventHandler(this, &home_DEO::logoutToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(147, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(746, 388);
			this->dataGridView1->TabIndex = 20;
			// 
			// Products
			// 
			this->Products->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Products->Location = System::Drawing::Point(0, 232);
			this->Products->Name = L"Products";
			this->Products->Size = System::Drawing::Size(142, 32);
			this->Products->TabIndex = 21;
			this->Products->Text = L"Available Products";
			this->Products->UseVisualStyleBackColor = true;
			this->Products->Click += gcnew System::EventHandler(this, &home_DEO::Products_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Bisque;
			this->label2->Location = System::Drawing::Point(6, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 29);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Hello, ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Bisque;
			this->label1->Location = System::Drawing::Point(94, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(2, 31);
			this->label1->TabIndex = 24;
			// 
			// home_DEO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(905, 597);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Products);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dateTime);
			this->Controls->Add(this->addProductBtn);
			this->Controls->Add(this->iProduct);
			this->Controls->Add(this->history);
			this->Controls->Add(this->curStock);
			this->Controls->Add(this->iStock);
			this->Controls->Add(this->addVendor);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"home_DEO";
			this->Text = L"DATA ENTRY OPERATOR HOME";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &home_DEO::home_DEO_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &home_DEO::home_DEO_FormClosed);
			this->Load += gcnew System::EventHandler(this, &home_DEO::home_DEO_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime datetime = DateTime::Now;
		     this -> dateTime -> Text = datetime.ToString();
		 }
private: System::Void home_DEO_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
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
private: System::Void home_DEO_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 Application::Exit();
		 }

//private: System::Void logoutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void addVendor_Click(System::Object^  sender, System::EventArgs^  e) {
			 deoAddVendor^ addvend = gcnew deoAddVendor();
			 addvend->ShowDialog();
		 }
private: System::Void logoutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void addProductBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 addProduct^ addP = gcnew addProduct();
			 addP->ShowDialog();
		 }
private: System::Void iProduct_Click(System::Object^  sender, System::EventArgs^  e) {
			 issueProductForm^ issueP = gcnew issueProductForm();
			 issueP->ShowDialog();
		 }
private: System::Void changePasswordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 changePass^ cpass1 = gcnew changePass();
			 cpass1->ShowDialog();
		 }
private: System::Void history_Click(System::Object^  sender, System::EventArgs^  e) {
			 historyForm^ hform = gcnew historyForm();
			 hform->ShowDialog();
		 }

 private: void filloverallstocktable(void){
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
             

        private: void fillissuedstocktable(void){
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

           private: void fillmantable(void){
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

private: System::Void iStock_Click(System::Object^  sender, System::EventArgs^  e) {
			 fillissuedstocktable();
		 }
private: System::Void Products_Click(System::Object^  sender, System::EventArgs^  e) {
			 fillmantable();
		 }
private: System::Void Products_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 fillmantable();
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void home_DEO_Load(System::Object^  sender, System::EventArgs^  e) {
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
};
}