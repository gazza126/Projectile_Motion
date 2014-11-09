#pragma once 
#include <time.h>

using namespace System::Threading;
 using namespace System::Drawing;
 using namespace System::Windows::Forms;

 ref class MotionThread 
{
 public: MotionThread(void);

 public: Point MoveProjectile(Point ProjectilePos, Point Velocity)
{

 ProjectilePos.X = ProjectilePos.X + Velocity.X;
 ProjectilePos.Y = ProjectilePos.Y + Velocity.Y;
 return ProjectilePos;

 } 

 };
