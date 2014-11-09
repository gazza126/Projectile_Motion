#pragma once  #include <stdio.h> #include <stdlib.h> #include <iostream>   // float timetaken;  using namespace System;  using namespace System::ComponentModel;  using namespace System::Collections;  using namespace System::Windows::Forms;  using namespace System::Data;  using namespace System::Drawing;  using namespace System::Threading;  using namespace System::Diagnostics;  ref class Allformvariables  {  public: Allformvariables(void);  		//variables used on multiple forms 		Point initialVelocity;  		double WindSpeed;  		double Gravity;  		double restitution;  		char WindDirection;  		Point MouseStart;  		Point MouseEnd;  		Point Velocity;  		double AirResistance;  		double mass;  		Stopwatch Velocitytimer;  		double timetaken;  		//Set items  public: void Setfloats(double x, int change)  {  	//sets the values of double and float variables  	switch (change)  	{  	case 1: 		WindSpeed = x;  		break;  	case 2: 		Gravity = x;  		break;  	case 3: 		restitution = x;  		break;  	}  }  public: 	float TextintValidation(float Min, float Max, String^ text)  	{  		//validation for numerical textboxes  		Double x;  		String^ strMin = Convert::ToString(Min);  		//converts min and max values to string for use in messagebox  		String^ strMax = Convert::ToString(Max);  		try  		{  			x = Convert::ToDouble(text);  			//try's to convert text in the textbox to a double  			if (x < (Min - 0.000001))  			{  				//if text is less than the min value then show error 				MessageBox::Show("Please enter a value greater than or equal to " + strMin);  			}  			else if (x > Max)  			{  				//if text is greater than the max value then show error 				MessageBox::Show("Please enter a value smaller than or equal to " + strMax);  			}  			else  			{  				return(x);  			}  			//if text is okay then return value and set variable   		} 		catch (FormatException^ e)  		{  			//if text cannot be converted to a double then check if text box is empty  			if (text == "")  			{  				//if text box is empty then do nothing   			} 			else  			{  				//else if text box has a value which is not a double show error 				MessageBox::Show("Please enter a Decimal value");  			}  		}  	}  public: 	Point CalcinitalVelocity()  	{  		//calculate velocity on first mouse release  		initialVelocity.X = (MouseEnd.X + MouseStart.X) / 100;  		initialVelocity.Y = (MouseStart.Y - MouseEnd.Y) / 100;  		return initialVelocity;  	}  public: 	float CalcAirresistance(float PFF)  	{  		//calculate air resistance of chosen projectile with current wind speed 		AirResistance = (WindSpeed*WindSpeed)*(PFF*mass);  		return AirResistance;  	} public: void CalcCurrentVelocity(Int64 TimeTaken2, Point ProjectilePos, double TerminalV)  	//calculates current velocity during runtime   {  	timetaken = Convert::ToDouble(TimeTaken2) / 1000;  	//converts value from stopclock to a double and turns into seconds instead of milliseconds  	if (WindDirection == 'E')  	{  		//checks dirction of wind  		if (WindSpeed <= Velocity.X)  		{  			//checks whether wind is slower than projectile velocity  			Velocity.X = Velocity.X;  		}  		else if (WindSpeed > Velocity.X)  		{  			Velocity.X = initialVelocity.X + (AirResistance*timetaken);  		}  	}  	else if (WindDirection == 'W')  	{  		if (-WindSpeed >= Velocity.X)  		{  			Velocity.X = Velocity.X;  		}  		else if (-WindSpeed < Velocity.X)  		{  			Velocity.X = initialVelocity.X - (AirResistance*timetaken);  		}  	}  	if (Velocity.Y >= TerminalV*sqrt(Gravity))  	{  		Velocity.Y = Velocity.Y;  	}  	else if (Velocity.Y < TerminalV*sqrt(Gravity))  	{  		Velocity.Y = initialVelocity.Y + (Gravity*timetaken);  	}  }  }; 