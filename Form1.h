#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include "EditOptions.h"
#include "About.h"
using namespace std;


namespace CMTimer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace Microsoft::Win32;
	using namespace System::Media;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			c_timer_interval = 0;
			c_loop = true;
			c_repetitions = 1;
			running = false;
			timer = 0;
			loop_count = 1;
			collapsed = false;
			c_sticky = false;
			c_beep = true;
			c_beep_count = 5;
			c_sound_file = "c:\\Windows\\Media\\ding.wav";
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox_interval;

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

	private: int c_timer_interval;
	private: bool c_loop;
	private: int c_repetitions;
	private: int timer;
	private: bool running;
	private: int loop_count;
	private: bool collapsed;
	private: bool c_sticky;
	private: bool c_beep;
	private: int c_beep_count;
	private: SoundPlayer^ splayer;
	private: String^ c_sound_file;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Button^  button_edit;
	private: System::Windows::Forms::Button^  button_startpause;
	private: System::Windows::Forms::Button^  button_reset;
	private: System::Windows::Forms::Button^  button_stop;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				 this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
				 this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
				 this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
				 this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->textBox_interval = (gcnew System::Windows::Forms::TextBox());
				 this->button_edit = (gcnew System::Windows::Forms::Button());
				 this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
				 this->button_startpause = (gcnew System::Windows::Forms::Button());
				 this->button_reset = (gcnew System::Windows::Forms::Button());
				 this->button_stop = (gcnew System::Windows::Forms::Button());
				 this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->panel1 = (gcnew System::Windows::Forms::Panel());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->groupBox2->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
				 this->panel1->SuspendLayout();
				 this->groupBox1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // groupBox2
				 // 
				 this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				 this->groupBox2->Controls->Add(this->label7);
				 this->groupBox2->Controls->Add(this->numericUpDown2);
				 this->groupBox2->Controls->Add(this->checkBox2);
				 this->groupBox2->Controls->Add(this->comboBox1);
				 this->groupBox2->Controls->Add(this->label2);
				 this->groupBox2->Controls->Add(this->radioButton2);
				 this->groupBox2->Controls->Add(this->numericUpDown1);
				 this->groupBox2->Controls->Add(this->radioButton1);
				 this->groupBox2->Controls->Add(this->label1);
				 this->groupBox2->Controls->Add(this->textBox_interval);
				 this->groupBox2->Location = System::Drawing::Point(218, 9);
				 this->groupBox2->Name = L"groupBox2";
				 this->groupBox2->Size = System::Drawing::Size(253, 131);
				 this->groupBox2->TabIndex = 6;
				 this->groupBox2->TabStop = false;
				 this->groupBox2->Text = L"Timer Settings";
				 this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(177, 72);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(47, 13);
				 this->label7->TabIndex = 12;
				 this->label7->Text = L"seconds";
				 // 
				 // numericUpDown2
				 // 
				 this->numericUpDown2->Location = System::Drawing::Point(121, 70);
				 this->numericUpDown2->Name = L"numericUpDown2";
				 this->numericUpDown2->Size = System::Drawing::Size(50, 20);
				 this->numericUpDown2->TabIndex = 11;
				 this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
				 this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
				 // 
				 // checkBox2
				 // 
				 this->checkBox2->AutoSize = true;
				 this->checkBox2->Checked = true;
				 this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
				 this->checkBox2->Location = System::Drawing::Point(9, 71);
				 this->checkBox2->Name = L"checkBox2";
				 this->checkBox2->Size = System::Drawing::Size(102, 17);
				 this->checkBox2->TabIndex = 10;
				 this->checkBox2->Text = L"beep for the last";
				 this->checkBox2->UseVisualStyleBackColor = true;
				 this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Location = System::Drawing::Point(9, 40);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Size = System::Drawing::Size(192, 21);
				 this->comboBox1->TabIndex = 8;
				 this->comboBox1->Text = L"choose encounter...";
				 this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(177, 96);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(31, 13);
				 this->label2->TabIndex = 6;
				 this->label2->Text = L"times";
				 // 
				 // radioButton2
				 // 
				 this->radioButton2->AutoSize = true;
				 this->radioButton2->Location = System::Drawing::Point(60, 94);
				 this->radioButton2->Name = L"radioButton2";
				 this->radioButton2->Size = System::Drawing::Size(55, 17);
				 this->radioButton2->TabIndex = 5;
				 this->radioButton2->Text = L"repeat";
				 this->radioButton2->UseVisualStyleBackColor = true;
				 this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
				 // 
				 // numericUpDown1
				 // 
				 this->numericUpDown1->Location = System::Drawing::Point(121, 94);
				 this->numericUpDown1->Name = L"numericUpDown1";
				 this->numericUpDown1->Size = System::Drawing::Size(50, 20);
				 this->numericUpDown1->TabIndex = 4;
				 this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
				 // 
				 // radioButton1
				 // 
				 this->radioButton1->AutoSize = true;
				 this->radioButton1->Checked = true;
				 this->radioButton1->Location = System::Drawing::Point(9, 94);
				 this->radioButton1->Name = L"radioButton1";
				 this->radioButton1->Size = System::Drawing::Size(45, 17);
				 this->radioButton1->TabIndex = 3;
				 this->radioButton1->TabStop = true;
				 this->radioButton1->Text = L"loop";
				 this->radioButton1->UseVisualStyleBackColor = true;
				 this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(6, 17);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(30, 13);
				 this->label1->TabIndex = 1;
				 this->label1->Text = L"Time";
				 this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
				 // 
				 // textBox_interval
				 // 
				 this->textBox_interval->Location = System::Drawing::Point(42, 14);
				 this->textBox_interval->Name = L"textBox_interval";
				 this->textBox_interval->Size = System::Drawing::Size(53, 20);
				 this->textBox_interval->TabIndex = 0;
				 this->textBox_interval->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
				 // 
				 // button_edit
				 // 
				 this->button_edit->Location = System::Drawing::Point(6, 35);
				 this->button_edit->Name = L"button_edit";
				 this->button_edit->Size = System::Drawing::Size(91, 21);
				 this->button_edit->TabIndex = 9;
				 this->button_edit->Text = L"edit encounters";
				 this->button_edit->UseVisualStyleBackColor = true;
				 this->button_edit->Click += gcnew System::EventHandler(this, &Form1::button_edit_Click);
				 // 
				 // checkBox1
				 // 
				 this->checkBox1->AutoSize = true;
				 this->checkBox1->Location = System::Drawing::Point(6, 12);
				 this->checkBox1->Name = L"checkBox1";
				 this->checkBox1->Size = System::Drawing::Size(91, 17);
				 this->checkBox1->TabIndex = 7;
				 this->checkBox1->Text = L"always on top";
				 this->checkBox1->UseVisualStyleBackColor = true;
				 this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged_1);
				 // 
				 // timer1
				 // 
				 this->timer1->Interval = 1000;
				 this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
				 // 
				 // button1
				 // 
				 this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
				 this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				 this->button1->Location = System::Drawing::Point(201, 21);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(11, 110);
				 this->button1->TabIndex = 7;
				 this->button1->Text = L"button1";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
				 // 
				 // toolTip1
				 // 
				 this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Form1::toolTip1_Popup);
				 // 
				 // button_startpause
				 // 
				 this->button_startpause->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_startpause.BackgroundImage")));
				 this->button_startpause->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				 this->button_startpause->Location = System::Drawing::Point(12, 123);
				 this->button_startpause->Name = L"button_startpause";
				 this->button_startpause->Size = System::Drawing::Size(23, 23);
				 this->button_startpause->TabIndex = 1;
				 this->button_startpause->UseVisualStyleBackColor = true;
				 this->button_startpause->Click += gcnew System::EventHandler(this, &Form1::button_startpause_Click);
				 // 
				 // button_reset
				 // 
				 this->button_reset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_reset.BackgroundImage")));
				 this->button_reset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				 this->button_reset->Location = System::Drawing::Point(41, 123);
				 this->button_reset->Name = L"button_reset";
				 this->button_reset->Size = System::Drawing::Size(23, 23);
				 this->button_reset->TabIndex = 2;
				 this->button_reset->UseVisualStyleBackColor = true;
				 this->button_reset->Click += gcnew System::EventHandler(this, &Form1::button_reset_Click);
				 // 
				 // button_stop
				 // 
				 this->button_stop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_stop.BackgroundImage")));
				 this->button_stop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				 this->button_stop->Location = System::Drawing::Point(70, 123);
				 this->button_stop->Name = L"button_stop";
				 this->button_stop->Size = System::Drawing::Size(23, 23);
				 this->button_stop->TabIndex = 3;
				 this->button_stop->UseVisualStyleBackColor = true;
				 this->button_stop->Click += gcnew System::EventHandler(this, &Form1::button_stop_Click);
				 // 
				 // progressBar1
				 // 
				 this->progressBar1->Location = System::Drawing::Point(12, 103);
				 this->progressBar1->Name = L"progressBar1";
				 this->progressBar1->Size = System::Drawing::Size(183, 14);
				 this->progressBar1->TabIndex = 4;
				 this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->BackColor = System::Drawing::Color::Green;
				 this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label3->Location = System::Drawing::Point(12, 9);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(93, 91);
				 this->label3->TabIndex = 5;
				 this->label3->Text = L"--";
				 this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
				 // 
				 // panel1
				 // 
				 this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->panel1->Controls->Add(this->label6);
				 this->panel1->Controls->Add(this->label5);
				 this->panel1->Controls->Add(this->label4);
				 this->panel1->Location = System::Drawing::Point(99, 123);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(96, 23);
				 this->panel1->TabIndex = 9;
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label6->Location = System::Drawing::Point(62, 3);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(14, 20);
				 this->label6->TabIndex = 8;
				 this->label6->Text = L"-";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label5->Location = System::Drawing::Point(43, 3);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(13, 20);
				 this->label5->TabIndex = 7;
				 this->label5->Text = L"/";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label4->Location = System::Drawing::Point(19, 3);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(18, 20);
				 this->label4->TabIndex = 6;
				 this->label4->Text = L"0";
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Controls->Add(this->button3);
				 this->groupBox1->Controls->Add(this->button2);
				 this->groupBox1->Controls->Add(this->checkBox1);
				 this->groupBox1->Controls->Add(this->button_edit);
				 this->groupBox1->Location = System::Drawing::Point(477, 9);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(105, 131);
				 this->groupBox1->TabIndex = 10;
				 this->groupBox1->TabStop = false;
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(6, 62);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(91, 23);
				 this->button3->TabIndex = 11;
				 this->button3->Text = L"choose sound";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(24, 102);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(75, 23);
				 this->button2->TabIndex = 10;
				 this->button2->Text = L"about";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileName = L"openFileDialog1";
				 // 
				 // Form1
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(589, 152);
				 this->Controls->Add(this->groupBox1);
				 this->Controls->Add(this->button_startpause);
				 this->Controls->Add(this->button_reset);
				 this->Controls->Add(this->button_stop);
				 this->Controls->Add(this->panel1);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->progressBar1);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->groupBox2);
				 this->Name = L"Form1";
				 this->Text = L"Critical Mass Timer v1.1.0";
				 this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				 this->groupBox2->ResumeLayout(false);
				 this->groupBox2->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
				 this->panel1->ResumeLayout(false);
				 this->panel1->PerformLayout();
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void button_startpause_Click(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 timer = System::Int32::Parse(this->label3->Text);
				 }
				 catch(Exception^ e)
				 {
					 timer = 0;
				 }
				 if (running || (timer == 0))
				 {
					 this->timer1->Stop();
					 running = false;
				 }
				 else
				 {						 
					 progressBar1->Value = 0;
					 progressBar1->PerformStep();
					 this->label4->Text = ""+loop_count;
					 this->timer1->Enabled;
					 this->timer1->Start();
					 running = true;
				 }
			 }
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 String^ timer_interval(this->textBox_interval->Text);
				 try
				 {
					 c_timer_interval = System::Int32::Parse(timer_interval);
				 }
				 catch(Exception^ e)
				 {
					 c_timer_interval = 0;
					 timer_interval = "--";
				 }
				 label3->Text = timer_interval;
				 progressBar1->Minimum = 0;
				 progressBar1->Maximum = c_timer_interval;
				 progressBar1->Step = 1;
				 progressBar1->Value = 0;
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ timer_interval(this->textBox_interval->Text);
				 try
				 {
					 c_timer_interval = System::Int32::Parse(timer_interval);
				 }
				 catch(Exception^ e)
				 {
					 c_timer_interval = 0;
					 timer_interval = "--";
				 }
				 label3->Text = timer_interval;
				 progressBar1->Minimum = 0;
				 progressBar1->Maximum = c_timer_interval;
				 progressBar1->Step = 1;
				 progressBar1->Value = 0;
			 }
	private: System::Void button_edit_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditOptions^ t = gcnew EditOptions;

				 if ( t->ShowDialog( this ) == ::DialogResult::OK )
				 {
					 //printf("Success.");
				 }
				 else
				 {
					 //printf("Failure.");
				 }
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 // Play a beep
				 if ((c_beep_count > 0) && (c_beep_count >= timer))
				 {
					 splayer->Stop();
					 splayer->Play();
				 }
				 progressBar1->PerformStep();
				 if (timer > 1)
				 {
					 timer--;
					 label3->Text = ""+timer;
					 int r = (timer*100) / c_timer_interval;
					 if (r > 50)
					 {
						 this->label3->BackColor = Color::FromName( "Green" );
					 }
					 else if (r > 20)
					 {
						 this->label3->BackColor = Color::FromName( "Orange" );
					 }
					 else
					 {
						 this->label3->BackColor = Color::FromName( "Red" );
					 }
				 }
				 else
				 {
					 if( (loop_count < c_repetitions) || c_loop )
					 {
						 timer = c_timer_interval;
						 label3->Text = ""+timer;
						 loop_count++;
						 progressBar1->Value = 0;
						 this->label4->Text = ""+loop_count;
					 }
					 else
					 {
						 loop_count = 0;
						 this->timer1->Stop();
					 }
				 }
			 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->radioButton1->Checked)
				 {
					 c_loop = true;
					 c_repetitions = 0;
					 this->label6->Text = "-";
				 }
				 else
				 {
					 c_loop = false;
					 try
					 {
						 c_repetitions = System::Int32::Parse(this->numericUpDown1->Text);
					 }
					 catch(Exception^ e)
					 {
						 c_repetitions = 1;
					 }
					 this->label4->Text = ""+loop_count;
					 this->label6->Text = ""+c_repetitions;
				 }
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button_reset_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer = c_timer_interval;
				 this->label3->BackColor = Color::FromName( "Green" );
				 label3->Text = ""+timer;
				 progressBar1->Value = 0;
			 }
	private: System::Void button_stop_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->timer1->Stop();
				 this->label3->BackColor = Color::FromName( "Green" );
				 progressBar1->Value = 0;
				 running = false;
				 timer = c_timer_interval;
				 label3->Text = ""+timer;
				 try
				 {
					 c_repetitions = System::Int32::Parse(this->numericUpDown1->Text);
				 }
				 catch(Exception^ e)
				 {
					 c_repetitions = 1;
				 }
				 loop_count = 0;
				 this->label4->Text = ""+loop_count;
				 if (c_loop)
				 {
					 this->label6->Text = "-";
				 }
				 else
				 {
					 this->label6->Text = ""+c_repetitions;
				 }
			 }
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 c_repetitions = System::Int32::Parse(this->numericUpDown1->Text);
				 if (!running)
				 {					 
					 this->label4->Text = ""+loop_count;
					 this->label6->Text = ""+c_repetitions;
				 }
			 }
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 c_repetitions = System::Int32::Parse(this->numericUpDown1->Text);
				 }
				 catch(Exception^ e)
				 {
					 c_repetitions = 1;
				 }
				 if (!running && !c_loop)
				 {					 
					 this->label4->Text = ""+loop_count;
					 this->label6->Text = ""+c_repetitions;
				 }
			 }
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 if(collapsed)
				 {
					 this->SetClientSizeCore(597,152);
					 collapsed = false;
				 }
				 else
				 {
					 this->SetClientSizeCore(215,152);
					 collapsed = true;
				 }
			 }
	private: System::Void checkBox1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
				 if(c_sticky)
				 {
					 this->TopMost = false;
					 c_sticky = false;
				 }
				 else
				 {
					 this->TopMost = true;
					 c_sticky = true;
				 }
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {				 
				 String^ encounter(this->comboBox1->Text);
				 RegistryKey^ regKey = Registry::CurrentUser;
				 String^ keyName  =  "Software\\CMtimer\\Encounters";
				 RegistryKey^ subKey = regKey->OpenSubKey(keyName,false);
				 String^ timer_interval = subKey->GetValue(encounter)->ToString();
				 this->textBox_interval->Text = timer_interval;
				 subKey->Close();
				 regKey->Close();
			 }
	private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Set up title with version number
				 this->Text = "Critical Mass Timer ("+this->ProductVersion+")";

				 // Set up tool tips
				 this->toolTip1->SetToolTip( this->button_reset, "reset timer" );
				 this->toolTip1->SetToolTip( this->button_startpause, "start/pause" );
				 this->toolTip1->SetToolTip( this->button_stop, "stop" );

				 // Check for registry keys and populate the registry with default keys if necessary
				 RegistryKey^ regKey = Registry::CurrentUser;

				 String^ keyName  =  "Software\\CMtimer";
				 RegistryKey^ subKey = regKey->CreateSubKey(keyName);
				 int count = subKey->ValueCount;
				 bool outdated = false;
				 if(count == 0)
				 {					 
					 outdated = true;
				 }
				 else if ((int)subKey->GetValue("Version") < 2)
				 {
					 outdated = true;
				 }
				 if (outdated)
				 {
					 // delete old entries if newer version detected
					 regKey->DeleteSubKeyTree(keyName);
					 subKey = regKey->CreateSubKey(keyName);
					 subKey->SetValue("Version", 2);
				 }

				 keyName  =  "Software\\CMtimer\\Encounters";
				 subKey = regKey->CreateSubKey(keyName);
				 count = subKey->ValueCount;
				 if(count == 0)
				 {
					 // Add the key and some default values
					 subKey = regKey->CreateSubKey(keyName);
					 subKey->SetValue("Gargoyle Master", 40);
					 subKey->SetValue("Yaremka", 60);
					 subKey->SetValue("Ahazu Zhagam", 60);
					 subKey->SetValue("Chatha", 30);
					 subKey->SetValue("Kylikki", 60);
					 subKey->SetValue("Vistrix", 38);
				 }

				 // Fill the combo boxes with info from the registry
				 array<String^>^subKeyValues = subKey->GetValueNames();
				 for (int i=0; i < subKeyValues->Length; i++)
				 {
					 this->comboBox1->Items->Add(subKeyValues[i]);
				 }

				 keyName  =  "Software\\CMtimer\\Sound";
				 subKey = regKey->CreateSubKey(keyName); //true means in write mode
				 count = subKey->ValueCount;
				 if(count == 0)
				 {
					 // Add the key and some default values
					 subKey = regKey->CreateSubKey(keyName);
					 subKey->SetValue("Beep File", c_sound_file);
					 subKey->SetValue("Beep Count", 5);
					 subKey->SetValue("Beep Enabled", 1);
				 }
				 c_sound_file = (String^)subKey->GetValue("Beep File");
				 c_beep_count = (int)subKey->GetValue("Beep Count");				 
				 if ((int)subKey->GetValue("Beep Enabled") == 0)
				 {
					 c_beep = false;
				 }
				 else
				 {
					 c_beep = true;
				 }

				 // Load sound file				 
				 if (File::Exists(c_sound_file))
				 {
					 splayer = gcnew SoundPlayer(c_sound_file);
					 splayer->Load();
				 }
				 else
				 {
					 c_beep = false;
				 }

				 // Set beep count from registry
				 this->checkBox2->Checked = c_beep;
				 this->numericUpDown2->Value = c_beep_count;				 

				 subKey->Close();
				 regKey->Close();
			 }
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(this->checkBox2->Checked)
				 {
					 c_beep = true;
				 }
				 else
				 {
					 c_beep = false;
				 }
				 RegistryKey^ regKey = Registry::CurrentUser;
				 String^ keyName  =  "Software\\CMtimer\\Sound";
				 RegistryKey^ subKey = regKey->CreateSubKey(keyName);
				 subKey->SetValue("Beep Enabled", (c_beep?1:0));
				 subKey->Close();
				 regKey->Close();
			 }
	private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 c_beep_count = (int)this->numericUpDown2->Value;
				 RegistryKey^ regKey = Registry::CurrentUser;
				 String^ keyName  =  "Software\\CMtimer\\Sound";
				 RegistryKey^ subKey = regKey->CreateSubKey(keyName);
				 subKey->SetValue("Beep Count", c_beep_count);
				 subKey->Close();
				 regKey->Close();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->openFileDialog1->InitialDirectory = "C:\\Windows\\Media\\";
				 this->openFileDialog1->Filter = "wav files (*.wav)|*.wav|All files (*.*)|*.*";
				 this->openFileDialog1->FilterIndex = 2;
				 this->openFileDialog1->RestoreDirectory = true;
				 if ( this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
				 {
					 c_sound_file = this->openFileDialog1->FileName;
					 splayer = gcnew SoundPlayer(c_sound_file);
					 splayer->Load();
					 RegistryKey^ regKey = Registry::CurrentUser;
					 String^ keyName  =  "Software\\CMtimer\\Sound";
					 RegistryKey^ subKey = regKey->CreateSubKey(keyName);
					 subKey->SetValue("Beep File", c_sound_file);
					 subKey->Close();
					 regKey->Close();

					 c_beep_count = (int)this->numericUpDown2->Value;
					 if(this->checkBox2->Checked)
					 {
						 c_beep = true;
					 }
					 else
					 {
						 c_beep = false;
					 }
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 About^ a = gcnew About;
			 a->ShowDialog( this );
		 }
};
}