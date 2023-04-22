#include "main.h"
#include "pros/motors.h"
using namespace pros;
void powerDrive(int forwardPower, int turningPower){
  left1 = forwardPower + turningPower;
  left2 = forwardPower + turningPower;
  left3 = forwardPower + turningPower;
  left4 = forwardPower + turningPower;
  right1 = forwardPower - turningPower;
  right2 = forwardPower - turningPower;
  right3 = forwardPower - turningPower;
  right4 = forwardPower - turningPower;
}

void timed(int time){
  powerDrive(0, -68);
    delay(time);
  powerDrive(0, 0);
}
void driveFEncode(int distance){
    left1.tare_position();
    while (left1.get_position() <= distance){
        powerDrive(60, 0);
    }
    powerDrive(0, 0);
}