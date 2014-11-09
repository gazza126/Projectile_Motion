#pragma once 

 using namespace System::Drawing;
  using namespace System::Collections;

  ref class Projectile 
 {

  public: Projectile(void);

  int width;
  int height;
  double PFF;
  double projectileRest;
  double SurfaceArea;
  char Type;
  Point ProjectilePos;
  double mass;
  double Terminal_Velocity;


  public: void setProjectile(int chosen)
 {
 	switch (chosen)
	{
 	case 0: 
		//Arrow 
		width=25;
		height =5;
		PFF = 0.2;
		projectileRest = 0;
		Terminal_Velocity = 7.9788;
		Type.Equals('Rect');
		break;
  case 1: 
//Basketball 
width=20;
  height =20;
  PFF=0.6;
  projectileRest = 0.6;
  Terminal_Velocity = 1.803;
  Type = 'Circ';
  break;
  case 2: 
//BouncyBall 
width=10;
  height =10;
  PFF=0.1;
  projectileRest = 0.8;
  Terminal_Velocity = 0.7361;
  Type = 'Circ';
  break;
  case 3: 
//Cannonball 
width= 18;
  height = 18;
  PFF = 0.8;
  projectileRest = 0.001;
  Terminal_Velocity = 2.0819;
  Type = 'Circ';
  break;
  case 4: 
//Football 
width= 19;
  height = 19;
  PFF = 0.5;
  projectileRest = 0.4;
  Terminal_Velocity = 1.6459;
  Type = 'Circ';
  break;
  case 5: 
//frisby 
width= 19;
  height = 5;
  PFF = 0.05;
  projectileRest = 0.001;
  Terminal_Velocity = 0.6101;
  Type = 'Rect';
 		break;
  case 6: 
//tennisball 
width= 13;
  height = 13;
  PFF = 0.3;
  projectileRest = 0.2;
  Terminal_Velocity = 1.2749;
  Type = 'Circ';
  break;
 }
 SurfaceArea = (width*height);
  mass = SurfaceArea/1000*PFF;
 }
 }
;
 