#pragma once

#include <windows.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;	
using namespace Microsoft::Win32;


namespace CMTimer {

	/// <summary>
	/// Summary for EditOptions
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class EditOptions : public System::Windows::Forms::Form
	{
	public:
		EditOptions(void)
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
		~EditOptions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button3;

	protected: 


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(6, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(140, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &EditOptions::comboBox1_SelectedIndexChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(152, 19);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(59, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &EditOptions::numericUpDown1_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(217, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditOptions::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 77);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(283, 55);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"new encounter";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(217, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 20);
			this->button2->TabIndex = 2;
			this->button2->Text = L"add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EditOptions::button2_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(152, 19);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(59, 20);
			this->numericUpDown2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(283, 59);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"edit encounter";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Location = System::Drawing::Point(12, 138);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(283, 52);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"delete encounter";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(217, 18);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &EditOptions::button4_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(7, 20);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(139, 21);
			this->comboBox2->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(207, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EditOptions::button3_Click);
			// 
			// EditOptions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(307, 244);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"EditOptions";
			this->Text = L"Edit or add encounters";
			this->Load += gcnew System::EventHandler(this, &EditOptions::EditOptions_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void EditOptions_Load(System::Object^  sender, System::EventArgs^  e) {
				 RegistryKey^ regKey = Registry::CurrentUser;
				 String^ keyName  =  "Software\\CMtimer\\Encounters";
				 RegistryKey^ subKey = regKey->OpenSubKey(keyName,false); 

				 array<String^>^subKeyValues = subKey->GetValueNames();
				 this->comboBox1->Items->Clear();
				 this->comboBox2->Items->Clear();
				 for (int i=0; i < subKeyValues->Length; i++)
				 {
					 this->comboBox1->Items->Add(subKeyValues[i]);
					 this->comboBox2->Items->Add(subKeyValues[i]);
				 }
				 subKey->Close();
				 regKey->Close();
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 RegistryKey^ regKey = Registry::CurrentUser;
				 String^ keyName  =  "Software\\CMtimer\\Encounters";
				 RegistryKey^ subKey = regKey->OpenSubKey(keyName,false);
				 this->numericUpDown1->Value = (int)subKey->GetValue(this->comboBox1->Text);
				 subKey->Close();
				 regKey->Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 RegistryKey^ regKey = Registry::CurrentUser;
			 String^ keyName  =  "Software\\CMtimer\\Encounters";
			 RegistryKey^ subKey = regKey->OpenSubKey(keyName,true);
			 subKey->SetValue(this->comboBox1->Text, (int)this->numericUpDown1->Value);
			 subKey->Close();
			 regKey->Close();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 RegistryKey^ regKey = Registry::CurrentUser;
			 String^ keyName  =  "Software\\CMtimer\\Encounters";
			 RegistryKey^ subKey = regKey->OpenSubKey(keyName,true);
			 subKey->SetValue(this->textBox1->Text, (int)this->numericUpDown2->Value);
			 array<String^>^subKeyValues = subKey->GetValueNames();
			 this->comboBox1->Items->Clear();
			 this->comboBox2->Items->Clear();
			 for (int i=0; i < subKeyValues->Length; i++)
			 {
				 this->comboBox1->Items->Add(subKeyValues[i]);
				 this->comboBox2->Items->Add(subKeyValues[i]);
			 }
			 subKey->Close();
			 regKey->Close();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 RegistryKey^ regKey = Registry::CurrentUser;
			 String^ keyName  =  "Software\\CMtimer\\Encounters";
			 RegistryKey^ subKey = regKey->OpenSubKey(keyName,true);
			 subKey->DeleteValue(this->comboBox2->Text,false);
			 array<String^>^subKeyValues = subKey->GetValueNames();
			 this->comboBox1->Items->Clear();
			 this->comboBox2->Items->Clear();
			 for (int i=0; i < subKeyValues->Length; i++)
			 {
				 this->comboBox1->Items->Add(subKeyValues[i]);
				 this->comboBox2->Items->Add(subKeyValues[i]);
			 }
			 subKey->Close();
			 regKey->Close();
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
