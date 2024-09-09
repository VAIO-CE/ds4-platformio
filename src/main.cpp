#include <Arduino.h>
#include <ps4Controller.h>

void setup() {
  Serial.begin(115200);
  ps4.begin("d0:27:88:51:4c:50"); //replace with MAC address of your controller
  Serial.println("Ready.");
}

void loop() {
//  while (ps4.isConnected() == false) { // commented out as ps4 controller seems to connect quicker when microcontroller is doing nothing
//    Serial.println("ps4 controller not found");
//    delay(300);
//  }

  while (ps4.isConnected() == true) {
    if (ps4.Right()) Serial.println("Right Button");
    if (ps4.Down()) Serial.println("Down Button");
    if (ps4.Up()) Serial.println("Up Button");
    if (ps4.Left()) Serial.println("Left Button");

    if (ps4.Square()) Serial.println("Square Button");
    if (ps4.Cross()) Serial.println("Cross Button");
    if (ps4.Circle()) Serial.println("Circle Button");
    if (ps4.Triangle()) Serial.println("Triangle Button");

    if (ps4.UpRight()) Serial.println("Up Right");
    if (ps4.DownRight()) Serial.println("Down Right");
    if (ps4.UpLeft()) Serial.println("Up Left");
    if (ps4.DownLeft()) Serial.println("Down Left");

    if (ps4.L1()) Serial.println("L1 Button");
    if (ps4.R1()) Serial.println("R1 Button");

    if (ps4.Share()) Serial.println("Share Button");
    if (ps4.Options()) Serial.println("Options Button");
    if (ps4.L3()) Serial.println("L3 Button");
    if (ps4.R3()) Serial.println("R3 Button");

    if (ps4.PSButton()) Serial.println("PS Button");
    if (ps4.Touchpad()) Serial.println("Touch Pad Button");

    if (ps4.L2()) {
      Serial.printf("L2 button at %d\n", ps4.L2Value());
    }
    if (ps4.R2()) {
      Serial.printf("R2 button at %d\n", ps4.R2Value());
    }

    if (ps4.LStickX()) {
      Serial.printf("Left Stick x at %d\n", ps4.LStickX());
    }
    if (ps4.LStickY()) {
      Serial.printf("Left Stick y at %d\n", ps4.LStickY());
    }
    if (ps4.RStickX()) {
      Serial.printf("Right Stick x at %d\n", ps4.RStickX());
    }
    if (ps4.RStickY()) {
      Serial.printf("Right Stick y at %d\n", ps4.RStickY());
    }

    // if (ps4.Charging()) Serial.println("The controller is charging"); 
    // if (ps4.Audio()) Serial.println("The controller has headphones attached");
    // if (ps4.Mic()) Serial.println("The controller has a mic attached");

    Serial.printf("Battery Level : %d\n", ps4.Battery());

    Serial.println();
    // This delay is to make the output more human readable
    // Remove it when you're not trying to see the output
    delay(5000);
  }
}
