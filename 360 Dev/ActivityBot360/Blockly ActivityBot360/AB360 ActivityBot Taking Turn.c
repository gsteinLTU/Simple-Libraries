// ------ Libraries and Definitions ------
#include "simpletools.h"
#include "servo360.h"
#include "abdrive360.h"

// ------ Global Variables and Objects ------
int rightSpeed;



// ------ Main Program ------
int main() {

  // AB360 ActivityBot Taking Turns
  freqout(4, 1000, 3000);
  rightSpeed = 112;
  while (!((rightSpeed <= 0))) {
    drive_speed(128, rightSpeed);
    pause(1500);
    rightSpeed = (rightSpeed - 16);
  }
  drive_speed(0, 0);

}
