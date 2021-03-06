#pragma once
#include "QuestionMark.h"
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <windows.h>
#include <shellapi.h>
#include <iostream>

namespace GettingFar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(15, 25);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(290, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 75, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Set Percentage";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(290, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Set";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Make sure one of your discord deafen hotkeys are \"\\\"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(280, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"\?";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 172);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(290, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Donate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(15, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(290, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Credits";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(15, 64);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(290, 20);
			this->numericUpDown2->TabIndex = 8;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Speed of scan (500 recommended)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(314, 201);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"GettingFar";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		system("@echo off");
		system("echo Opened \"How?\"\n");
		MessageBox::Show("Go to Discord Settings > Keybinds > Add a keybind > Unassigned > Toggle Deafen > Record Keybind > Press \"\\\"");
	}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	system("@echo off");
	system("echo Opened \"credits\"\n");
	MessageBox::Show("Made by D9ED and AzureGH in RCDProgramming for zSpectrix");
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	system("@echo off");
	system("start https://paypal.me/scottcow");
	system("echo Opened paypal.\n");
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	system("@echo off");
	system("echo Settings have been set!\n");
}
};
}
