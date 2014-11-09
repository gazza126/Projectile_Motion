#pragma once
#include "Allformvariables.h"
#include "Projectile.h"
#include "MotionThread.h"
#include <time.h>
#include "PauseMenu.h"
 namespace ProjectileMotion
 {
 	using namespace System;
 	using namespace System::ComponentModel;
 	using namespace System::Collections;
 	using namespace System::Windows::Forms;
 	using namespace System::Data;
 	using namespace System::Drawing;
 	using namespace System::Threading;
 	using namespace System::Diagnostics;
 /// <summary>
 /// Summary for MyForm
 /// </summary>
 public ref class MyForm : 
public System::Windows::Forms::Form
 {
 public:
		MyForm(void)
 {
 			InitializeComponent();
 //
 //TODO: Add the constructor code here
 //
			this->SetStyle(static_cast<ControlStyles>(ControlStyles::AllPaintingInWmPaint | ControlStyles::UserPaint | ControlStyles::OptimizedDoubleBuffer), true);
 			this->UpdateStyles();
 //initialize the start position of circle
			Projectile1.ProjectilePos = Point(0, (Screen::PrimaryScreen->WorkingArea.Height - 50));
 			Screen_
width= Screen::PrimaryScreen->WorkingArea.Width;
 			Screen_height = Screen::PrimaryScreen->WorkingArea.Height;
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
 private:
		System::Windows::Forms::TextBox^ txtWindS;
 protected: 
private: System::Windows::Forms::TextBox^ txtGravity;
 private: System::Windows::Forms::TextBox^ txtResti;
 private: System::Windows::Forms::TextBox^ txtWindD;
 private: System::Windows::Forms::Button^ Exit;
 private: System::Windows::Forms::ComboBox^ comboBox1;
 private: System::Windows::Forms::Label^ lblWindV;
 private: System::Windows::Forms::Label^ lblRestitution;
 private: System::Windows::Forms::Label^ lblGravity;
 private: System::Windows::Forms::TextBox^ txtVelocityX;
 private: System::Windows::Forms::TextBox^ txtVelocityY;
 private: System::Windows::Forms::Label^ lblTimeElapsed;
 private: System::Windows::Forms::Timer^ Run_Game_Timer;
 private: System::Windows::Forms::Button^ btnPause;
 private: System::Windows::Forms::Button^ btnRandom;
 private: System::ComponentModel::IContainer^ components;
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
 			this->txtWindS = (gcnew System::Windows::Forms::TextBox());
 			this->txtGravity = (gcnew System::Windows::Forms::TextBox());
 			this->txtResti = (gcnew System::Windows::Forms::TextBox());
 			this->txtWindD = (gcnew System::Windows::Forms::TextBox());
 			this->Exit = (gcnew System::Windows::Forms::Button());
 			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
 			this->lblWindV = (gcnew System::Windows::Forms::Label());
 			this->lblRestitution = (gcnew System::Windows::Forms::Label());
 			this->lblGravity = (gcnew System::Windows::Forms::Label());
 			this->txtVelocityX = (gcnew System::Windows::Forms::TextBox());
 			this->txtVelocityY = (gcnew System::Windows::Forms::TextBox());
 			this->lblTimeElapsed = (gcnew System::Windows::Forms::Label());
 			this->Run_Game_Timer = (gcnew System::Windows::Forms::Timer(this->components));
 			this->btnPause = (gcnew System::Windows::Forms::Button());
 			this->btnRandom = (gcnew System::Windows::Forms::Button());
 			this->SuspendLayout();
 // 
 // txtWindS
 // 
			this->txtWindS->Location = System::Drawing::Point(12, 22);
 			this->txtWindS->Name = L"txtWindS";
 			this->txtWindS->Size = System::Drawing::Size(71, 20);
 			this->txtWindS->TabIndex = 0;
 			this->txtWindS->Text = L"WindSpeed";
 			this->txtWindS->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtWindS_KeyPress);
 			this->txtWindS->Leave += gcnew System::EventHandler(this, &MyForm::txtWindS_Leave);
 // 
 // txtGravity
 // 
			this->txtGravity->Location = System::Drawing::Point(118, 22);
 			this->txtGravity->Name = L"txtGravity";
 			this->txtGravity->Size = System::Drawing::Size(49, 20);
 			this->txtGravity->TabIndex = 1;
 			this->txtGravity->Text = L"Gravity";
 			this->txtGravity->Leave += gcnew System::EventHandler(this, &MyForm::txtGravity_Leave);
 //
 // txtResti 
 // 
			this->txtResti->Location = System::Drawing::Point(173, 22);
 			this->txtResti->Name = L"txtResti";
 			this->txtResti->Size = System::Drawing::Size(65, 20);
 			this->txtResti->TabIndex = 2;
 			this->txtResti->Text = L"Restitution";
 			this->txtResti->Leave += gcnew System::EventHandler(this, &MyForm::txtResti_Leave);
 //
 // txtWindD
 //
			this->txtWindD->Location = System::Drawing::Point(89, 22);
 			this->txtWindD->Name = L"txtWindD";
 			this->txtWindD->Size = System::Drawing::Size(23, 20);
 			this->txtWindD->TabIndex = 3;
 			this->txtWindD->Text = L"N";
 //
 // Exit
 //
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
 			this->Exit->Location = System::Drawing::Point(678, 1);
 			this->Exit->Name = L"Exit";
 			this->Exit->Size = System::Drawing::Size(25, 23);
 			this->Exit->TabIndex = 4;
 			this->Exit->Text = L"X";
 			this->Exit->UseVisualStyleBackColor = true;
 			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
 //
 // comboBox1
 // 
			this->comboBox1->FormattingEnabled = true;
 			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^ >(7) 
 {
  L"Arrow", L"Basketball", L"Bouncy Ball", L"Cannon Ball", L"Football", L"Frisby", L"Tennisball" 

}
);
 			this->comboBox1->Location = System::Drawing::Point(244, 22);
 			this->comboBox1->Name = L"comboBox1";
 			this->comboBox1->Size = System::Drawing::Size(121, 21);
 			this->comboBox1->TabIndex = 5;
 			this->comboBox1->Text = L"Select Projectile";
 			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
 //
 // lblWindV
 //
			this->lblWindV->AutoSize = true;
 			this->lblWindV->Location = System::Drawing::Point(12, 6);
 			this->lblWindV->Name = L"lblWindV";
 			this->lblWindV->Size = System::Drawing::Size(72, 13);
 			this->lblWindV->TabIndex = 6;
 			this->lblWindV->Text = L"Wind Velocity";
 // 
 // lblRestitution 
 // 
			this->lblRestitution->AutoSize = true;
 			this->lblRestitution->Location = System::Drawing::Point(170, 6);
 			this->lblRestitution->Name = L"lblRestitution";
 			this->lblRestitution->Size = System::Drawing::Size(57, 13);
 			this->lblRestitution->TabIndex = 7;
 			this->lblRestitution->Text = L"Restitution";
 //
 // lblGravity
 //
			this->lblGravity->AutoSize = true;
 			this->lblGravity->Location = System::Drawing::Point(115, 6);
 			this->lblGravity->Name = L"lblGravity";
 			this->lblGravity->Size = System::Drawing::Size(40, 13);
 			this->lblGravity->TabIndex = 8;
 			this->lblGravity->Text = L"Gravity";
 //
 // txtVelocityX 
 // 
 this->txtVelocityX->Location = System::Drawing::Point(371, 23);
 			this->txtVelocityX->Name = L"txtVelocityX";
 			this->txtVelocityX->Size = System::Drawing::Size(100, 20);
 			this->txtVelocityX->TabIndex = 9;
 			this->txtVelocityX->Text = L"Horizontal Speed";
 //
 // txtVelocityY
 // 
 this->txtVelocityY->Location = System::Drawing::Point(477, 22);
 			this->txtVelocityY->Name = L"txtVelocityY";
 			this->txtVelocityY->Size = System::Drawing::Size(100, 20);
 			this->txtVelocityY->TabIndex = 10;
 			this->txtVelocityY->Text = L"Vertical Speed";
 //
 // lblTimeElapsed
 // 
 this->lblTimeElapsed->AutoSize = true;
 			this->lblTimeElapsed->Location = System::Drawing::Point(583, 25);
 			this->lblTimeElapsed->Name = L"lblTimeElapsed";
 			this->lblTimeElapsed->Size = System::Drawing::Size(71, 13);
 			this->lblTimeElapsed->TabIndex = 11;
 			this->lblTimeElapsed->Text = L"Time Elapsed";
 //
 // Run_Game_Timer
 //
 			this->Run_Game_Timer->Interval = 40;
 			this->Run_Game_Timer->Tick += gcnew System::EventHandler(this, &MyForm::Run_Game_Timer_Tick);
 //
 // btnPause
 //
			this->btnPause->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
 			this->btnPause->Location = System::Drawing::Point(646, 1);
 			this->btnPause->Name = L"btnPause";
 			this->btnPause->Size = System::Drawing::Size(26, 23);
 			this->btnPause->TabIndex = 12;
 			this->btnPause->Text = L"||";
 			this->btnPause->UseVisualStyleBackColor = true;
 			this->btnPause->Click += gcnew System::EventHandler(this, &MyForm::btnPause_Click);
 // 
 // btnRandom
 //
			this->btnRandom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
 			this->btnRandom->Location = System::Drawing::Point(565, 1);
 			this->btnRandom->Name = L"btnRandom";
 			this->btnRandom->Size = System::Drawing::Size(75, 23);
 			this->btnRandom->TabIndex = 13;
 			this->btnRandom->Text = L"Randomize";
 			this->btnRandom->UseVisualStyleBackColor = true;
 			this->btnRandom->Click += gcnew System::EventHandler(this, &MyForm::btnRandom_Click);
 //
 // MyForm
 //
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
 			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
 			this->AutoScroll = true;
 			this->ClientSize = System::Drawing::Size(703, 381);
 			this->ControlBox = false;
 			this->Controls->Add(this->btnRandom);
 			this->Controls->Add(this->btnPause);
 			this->Controls->Add(this->lblTimeElapsed);
 			this->Controls->Add(this->txtVelocityY);
 			this->Controls->Add(this->txtVelocityX);
 			this->Controls->Add(this->lblGravity);
 			this->Controls->Add(this->lblRestitution);
 			this->Controls->Add(this->lblWindV);
 			this->Controls->Add(this->comboBox1);
 			this->Controls->Add(this->Exit);
 			this->Controls->Add(this->txtWindD);
 			this->Controls->Add(this->txtResti);
 			this->Controls->Add(this->txtGravity);
 			this->Controls->Add(this->txtWindS);
 			this->MinimizeBox = false;
 			this->Name = L"MyForm";
 			this->Text = L"Simulation";
 			this->WindowState =
 				System::Windows::Forms::FormWindowState::Maximized;
 			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
 			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
 			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
 			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
 			this->ResumeLayout(false);
 			this->PerformLayout();
 }

#pragma endregion 
 // Local form Variables are declared here int SelectedIndex;
 		MotionThread MoveProj;
 		Allformvariables Variables;
 		Projectile Projectile1;
 		int Screen_width;
 		int Screen_height;
 		Boolean Game_running;
 		Boolean On_Exit_Click;
 // end of variable declaration 
 private:
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
 {
 			srand(unsigned(time(NULL)));
 // initialises srand with a time seed 
			Randomize();
 // Calls Randomize Procedure 
 }
 private:
		void Randomize()
 {
 //Randomize Procedure to set all variable on load and Randomize button click
			Double x;
 			x = randomnum1(0.1, 80.0, 80);
 // sets WindSpeed
			Variables.Setfloats(x, 1);
 			x = randomnum1(0.1, 18.0, 18);
 //sets Gravity
			Variables.Setfloats(x, 2);
 			x = -(randomnum1(0.001, 1.0, 1));
 //sets Coefficeient ofRestitution
			Variables.Setfloats(x, 3);
 			Variables.WindDirection = (randomchar(2));
 //Sets WindDirection 
 //Set Text Boxes 
			txtWindS->Text = Variables.WindSpeed.ToString();
 			txtWindD->Text = Variables.WindDirection.ToString();
 			txtGravity->Text = Variables.Gravity.ToString();
 			txtResti->Text = Variables.restitution.ToString();
 }
 //Random Number Generator
 		Double randomnum1(Double min, Double max, int randmax)
 //Self written random number generator function 
 {
 			Double RandomVal;
 			for (int i = 0;
 				i <= max;
 				i++) 
 // sets the values to randomize against 
 {
 				RandomVal = (float)rand() / (RAND_MAX + 1) + (rand() % randmax);
 				RandomVal = round_num(RandomVal);
 }

			return RandomVal;
 }
 //
 //
 /// 
 //Set WindDirection 
		char randomchar(int max)
 {
 //Generates random number for Wind Direction 
			char y;
 			srand(time(NULL));
 			int RandomVal = rand() % (max)+1;
 			switch (RandomVal) 
 {
 			case 1: y = 'E';
 				break;
 			case 2: y = 'W';
 				break;
 }
 return y;
 }
 //Double round 
 // 
 //
		Double round_num(Double value)
 {
 //Rounds numbers
			Double nearest = floorf(value * 100 + 0.5) / 100.00;
 			return nearest;
 }
 //
 //Randomizeing ends here
 private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e)
 {
 //Exit button exits application and program
		Game_running = false;
 		Application::Exit();
 }
 private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
 {
 //Combo Box to select Projectile
		SelectedIndex = comboBox1->SelectedIndex;
 //Gets the selected index of the comboBox
		Projectile1.setProjectile(SelectedIndex);
 //Sets the	 projectile using procedure in Projectile.h class 
		this->Refresh();
 //Refreshes the form so that OnPaint function redraws the projectile
 }
 private: System::Void txtWindS_Leave(System::Object^ sender, System::EventArgs^ e)
 {
 //TextBox entry for windspeed
		Variables.WindSpeed = Variables.TextintValidation(0.1, 80.0, txtWindS->Text);
 }
 private: System::Void txtGravity_Leave(System::Object^ sender, System::EventArgs^ e)
 {
 //TextBox entry for Gravity
		Variables.Gravity = Variables.TextintValidation(0.1, 18.0, txtGravity->Text);
 }
 private: System::Void txtResti_Leave(System::Object^ sender, System::EventArgs^ e)
 {
 //TextBox entry for Coefficient of Restitution 
		Variables.restitution = -Variables.TextintValidation(-1.00, -0.001, txtResti->Text);
 }
 private: System::Void txtWindS_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
 {
 		if (e->KeyChar == (char)13)
 {
 }
 }
 //ALL CALCULATIONS START HERE
 private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
 {
 //check whether left mouse button has been pressed down
		Variables.MouseStart = MousePosition;
 // gets the current mouse position
 }
 private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
 {
 // check whether left mouse button has been released 
		if (Game_running)
 {
 }
 //checks to see if the mouse has already been released and simulation is running
		else if (Game_running == false)
 {
 //if game isn't running set game as running and calculate inital velocity
			Game_running = true;
 			Variables.MouseEnd = MousePosition;
 			Variables.mass = Projectile1.mass;
 			Variables.Velocity = Variables.CalcinitalVelocity();
 			Variables.Velocitytimer.Start();
 			Variables.AirResistance = Variables.CalcAirresistance(Projectile1.PFF);
 			Game_running = true;
 			Run_Game_Timer->Enabled;
 //Enables form timer
 			Run_Game_Timer->Start();
 //Starts Form timer and game loop
 }
 }
 private: void Run_Game()
 {
 //Game loop to continuously calculate and update velocity whilst game is running 
		if (Game_running)
 {
 //only runs if game is running
			Update_sim();
 // updates velocity and projectile pos
			Variables.Velocitytimer.Start();
 //restarts Stopclock to calculate runtime which is used in calculations 
			Draw_sim();
 //calls procedure to redraw form and update projectile pos
 }
 }
 private: void Update_sim()
 {
 //update simulation procedure 
		Variables.Velocitytimer.Stop();
 //stops timer momentarily to get elapsed time used for calculatons 
		lblTimeElapsed->Text = Convert::ToString(Variables.Velocitytimer.ElapsedMilliseconds);
 //gets elapsed time 
		Variables.CalcCurrentVelocity(Variables.Velocitytimer.ElapsedMilliseconds, Projectile1.ProjectilePos, Projectile1.Terminal_Velocity);
 // calls function in AllformVariables.h from Variables instance of class 
		Projectile1.ProjectilePos = MoveProj.MoveProjectile(Projectile1.ProjectilePos, Variables.Velocity);
 //calls function from MotionThread.h and sets the new projectile pos
 }
 private: void Draw_sim()
 {
 		this->Refresh();
 //redraws form 
		txtVelocityX->Text = Convert::ToString(Variables.Velocity.X);
 //updates horizontal velocity text box 
		txtVelocityY->Text = Convert::ToString(Variables.Velocity.Y);
 //updates Vertical velocity text Box
 }
 // Display the chosen Projectile
 private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
 {
 //Paints the projectile onto the form
 }
 protected: virtual void OnPaint(PaintEventArgs^ e) override
 {
 		Graphics^ g = e->Graphics;
 		g->SmoothingMode = Drawing2D::SmoothingMode::HighQuality;
 		g->DrawEllipse(Pens::Black, Projectile1.ProjectilePos.X, Projectile1.ProjectilePos.Y, Projectile1.width, Projectile1.height);
 		g->FillEllipse(Brushes::Red, Projectile1.ProjectilePos.X, Projectile1.ProjectilePos.Y, Projectile1.width, Projectile1.height);
 		switch (Projectile1.Type)
 {
 		case 'Rect': g->DrawRectangle(Pens::Black, Projectile1.ProjectilePos.X, Projectile1.ProjectilePos.Y, Projectile1.width, Projectile1.height);
 			g->FillRectangle(Brushes::Red, Projectile1.ProjectilePos.X, Projectile1.ProjectilePos.Y, Projectile1.width, Projectile1.height);
 			break;
 		case 'Circ': g->DrawEllipse(Pens::Black, Projectile1.ProjectilePos.X, Projectile1.ProjectilePos.Y, Projectile1.width, Projectile1.height);
 			g->FillEllipse(Brushes::Red, Projectile1.ProjectilePos.X, Projectile1.ProjectilePos.Y, Projectile1.width, Projectile1.height);
 			break;
 }
 }
 private: System::Void Run_Game_Timer_Tick(System::Object^ sender, System::EventArgs^ e) 
 {
 //timer to hold simulation at a steady update rate 
 // update rate is ran at 40milliseconds which equals to roughly 25 frames per second Run_Game();
 }
 private: System::Void btnPause_Click(System::Object^ sender, System::EventArgs^ e) 
 {
 //Pauses the simulation and shows pause menu Form^ Pause = gcnew MyForm1;
 		Variables.Velocitytimer.Stop();
 		Run_Game_Timer->Stop();
 		Pause->Show();
 //shows the pause form 
 }
 private: System::Void btnRandom_Click(System::Object^ sender, System::EventArgs^ e)
 {
 //calls randomization function to change varibales not usable during runtime 
		if (Game_running)
 {
 }

		else if (Game_running == false)
 {
 			Randomize();
 }
 }
 private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
 {
 		if (Mouse_Down)
 {
 			txtVelocityX->Text = Convert::ToString((MousePosition.X + Variables.MouseStart.X) / 100);
 			txtVelocityY->Text = Convert::ToString((Variables.MouseStart.Y - MousePosition.Y) / 100);
 }
 		else if (Mouse_Down = false)
 {
 }
 }
 }
;
 }
;
 	 