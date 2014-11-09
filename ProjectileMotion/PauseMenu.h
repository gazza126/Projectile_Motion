#pragma once 
namespace ProjectileMotion 
 {
  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;
 /// <summary> 
 /// Summary for MyForm1 
 /// </summary> 
public ref class MyForm1 : public System::Windows::Forms::Form 
 {
 public: MyForm1(void) 
 {
  InitializeComponent();
 // 
 //TODO: Add the constructor code here 
 // 
 }
 protected: 
 /// <summary> 
 /// Clean up any resources being used. 
 /// </summary> ~MyForm1() 
 {
  if (components) 
 {
  delete components;
 }
 }
 private: System::Windows::Forms::Button^ btnResume;
 private: System::Windows::Forms::Button^ btnMain;
 private: System::Windows::Forms::Button^ btnExitPause;
 protected: 
protected:
 private: 
 /// <summary> 
 /// Required designer variable. 
 /// </summary> System::ComponentModel::Container ^components;
  #pragma region Windows Form Designer generated code 
 /// <summary> 
 /// Required method for Designer support - do not modify 
 /// the contents of this method with the code editor. 
 /// </summary> void InitializeComponent(void) 
 {
  this->btnResume = (gcnew System::Windows::Forms::Button());
  this->btnMain = (gcnew System::Windows::Forms::Button());
  this->btnExitPause = (gcnew System::Windows::Forms::Button());
  this->SuspendLayout();
 // 
 // btnResume 
 // 
 this->btnResume->Location = System::Drawing::Point(99, 57);
  this->btnResume->Name = L"btnResume";
  this->btnResume->Size = System::Drawing::Size(75, 23);
  this->btnResume->TabIndex = 0;
  this->btnResume->Text = L"Resume";
  this->btnResume->UseVisualStyleBackColor = true;
  this->btnResume->Click += gcnew System::EventHandler(this, &MyForm1::btnResume_Click);
 // 
 // btnMain 
 // 
 this->btnMain->Location = System::Drawing::Point(99, 109);
  this->btnMain->Name = L"btnMain";
  this->btnMain->Size = System::Drawing::Size(75, 23);
  this->btnMain->TabIndex = 1;
  this->btnMain->Text = L"Main Menu";
  this->btnMain->UseVisualStyleBackColor = true;
 // 
 // btnExitPause 
 // 
 this->btnExitPause->Location = System::Drawing::Point(99, 163);
  this->btnExitPause->Name = L"btnExitPause";
  this->btnExitPause->Size = System::Drawing::Size(75, 23);
  this->btnExitPause->TabIndex = 2;
  this->btnExitPause->Text = L"Exit";
  this->btnExitPause->UseVisualStyleBackColor = true;
 // 
 // MyForm1 
 // 
 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
  this->ClientSize = System::Drawing::Size(284, 261);
  this->Controls->Add(this->btnExitPause);
  this->Controls->Add(this->btnMain);
  this->Controls->Add(this->btnResume);
  this->Name = L"MyForm1";
 	this->Text = L"Pause Menu";
  this->ResumeLayout(false);
 }
 #pragma endregion 
private: System::Void btnResume_Click(System::Object^ sender, System::EventArgs^ e) 
 {
 }
 }
;
 