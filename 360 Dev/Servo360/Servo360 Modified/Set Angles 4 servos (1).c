/*
  Set Angles.c
  
  Turns to and holds positions.  
  Behaves like a standard RC servo when it reaches a given angle.
*/

#include "simpletools.h"
#include "servo360.h"

int main()
{
  // Connect is required before control.  The first argument is the I/O pin 
  // connected to the white control line, and the second is the I/O pin connected
  // to the yellow feedback line.
  int s1 = servo360_connect(12, 14);
  int s2 = servo360_connect(13, 15);
  int s3 = servo360_connect(16, 6);
  int s4 = servo360_connect(17, 7);
  //int s3 = 0;
  print("s1 = %d, s2 = %d, s3 = %d, s4 = %d\r", s1, s2, s3, s4);
  pause(1000);
  
  servo360_speed(12, 720);
  servo360_angle(13, -720);
  servo360_angle(16, 0);
  servo360_angle(17, 0);
  pause(1000);

  servo360_angle(12, 360);
  servo360_angle(13, -360);
  servo360_angle(16, 180);
  servo360_angle(17, -180);
  pause(1500);
   
  servo360_speed(12, 360 + 45);
  servo360_speed(13, -360 -45);
  servo360_angle(16, 360 + 180);
  servo360_angle(17, -360 - 180);
  pause(2500);

  servo360_angle(12, 0);
  servo360_angle(13, 0);
  servo360_angle(16, 0);
  servo360_angle(17, 0);
  pause(1000);
}
