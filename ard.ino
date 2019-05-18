#include <PID_v1.h>
//define a PID instance
 Kp = 62.7, Ki = 57.9, Kd = 14;
PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

void setup() {
    //Adjust PID values
 myPID.SetOutputLimits(-10,10);
}

// the loop function runs over and over again forever
void loop() {

  Input = analogRead(Level_sensor);           
  setpoint  = analogRead(Desired);
    myPID.Compute(); //Compute PID every loop
    set_pump_directio() // set set_pump_direction 
}