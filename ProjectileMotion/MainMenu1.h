#pragma once 
#include "Simulation.h"
namespace ProjectileMotion 
 {
 	using namespace System;
 	using namespace System::ComponentModel;
 	using namespace System::Collections;
 	using namespace System::Windows::Forms;
 	using namespace System::Data;
 	using namespace System::Drawing;
 /// <summary>
 /// Summary for Form1
 /// </summary>
 public ref class Form1 : 
public System::Windows::Forms::Form
 {
 public:
		Form1(void)
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
		~Form1()
 {
 			if (components) 
 {
 				delete components;
 }
 }
 private: System::Windows::Forms::Button^ button1;
 protected: 
 private: System::Windows::Forms::Button^ button2;
 private: System::Windows::Forms::Button^ button3;
 private: System::Windows::Forms::Button^ button4;
 private: System::Windows::Forms::Button^ button5;
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
 			this->button1 = (gcnew System::Windows::Forms::Button());
 			this->button2 = (gcnew System::Windows::Forms::Button());
 			this->button3 = (gcnew System::Windows::Forms::Button());
 			this->button4 = (gcnew System::Windows::Forms::Button());
 			this->button5 = (gcnew System::Windows::Forms::Button());
 			this->SuspendLayout();
 //
 // button1
 // 
			this->button1->Location = System::Drawing::Point(85, 34);
 			this->button1->Name = L"button1";
 			this->button1->Size = System::Drawing::Size(75, 23);
 			this->button1->TabIndex = 0;
 			this->button1->Text = L"New Game";
 			this->button1->UseVisualStyleBackColor = true;
 //
 // button2
 //
			this->button2->Location = System::Drawing::Point(85, 78);
 			this->button2->Name = L"button2";
 			this->button2->Size = System::Drawing::Size(75, 23);
 			this->button2->TabIndex = 1;
 			this->button2->Text = L"Load Game";
 			this->button2->UseVisualStyleBackColor = true;
 // 
 // button3
 //
			this->button3->Location = System::Drawing::Point(85, 122);
 			this->button3->Name = L"button3";
 			this->button3->Size = System::Drawing::Size(75, 23);
 			this->button3->TabIndex = 2;
 			this->button3->Text = L"Simulation";
 			this->button3->UseVisualStyleBackColor = true;
 			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
 //
 // button4
 //
			this->button4->Location = System::Drawing::Point(85, 163);
 			this->button4->Name = L"button4";
 			this->button4->Size = System::Drawing::Size(75, 23);
 			this->button4->TabIndex = 3;
 			this->button4->Text = L"Settings";
 			this->button4->UseVisualStyleBackColor = true;
 // 
 // button5
 // 
			this->button5->Location = System::Drawing::Point(253, 1);
 			this->button5->Name = L"button5";
 			this->button5->Size = System::Drawing::Size(29, 27);
 			this->button5->TabIndex = 4;
 			this->button5->Text = L"\?";
 			this->button5->UseVisualStyleBackColor = true;
 // 
 // Form1
 // 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
 			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
 			this->ClientSize = System::Drawing::Size(284, 261);
 			this->Controls->Add(this->button5);
  this->Controls->Add(this->button4);
 			this->Controls->Add(this->button3);
  this->Controls->Add(this->button2);
 			this->Controls->Add(this->button1);
  this->Name = L"Form1";
 			this->Text = L"Main Menu";
 			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
 			this->ResumeLayout(false);
 }
 #pragma endregion
 private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
 {
 // Loads simulation
		Form^ Sim = gcnew MyForm;
 //creates a new instance of MyForm (simulation.h)
		Sim->Show();
 // shows Sim (MyForm as created above)
		this->Hide();
 // Hides the current form until reshown 
 }
 private:
		 System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
 {
 }
 }
;
 }
 