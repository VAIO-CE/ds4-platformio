#include "ds4_control.h"

ps4Controller DS4Control::ps4;

void DS4Control::notify()
{
    int yAxisValue{(ps4.data.analog.stick.ly)};
    int xAxisValue{(ps4.data.analog.stick.rx)};

    int throttle{map(yAxisValue, -127, 127, -255, 255)};
    int steering{map(xAxisValue, -127, 127, -255, 255)};
    int motorDirection{1};

    int rightMotorSpeed{abs(throttle) - steering};
    int leftMotorSpeed{abs(throttle) + steering};
    rightMotorSpeed = constrain(rightMotorSpeed, 0, 255);
    leftMotorSpeed = constrain(leftMotorSpeed, 0, 255);

    rotateMotor(rightMotorSpeed * motorDirection, leftMotorSpeed * motorDirection);
}

void DS4Control::onConnect()
{
    Serial.println("DS4 Connected!");
}

void DS4Control::onDisconnect()
{
    rotateMotor(0, 0);
    Serial.println("DS4 Disconnected!");
}

void DS4Control::rotateMotor(int rightMotorSpeed, int leftMotorSpeed)
{
    // Control Right Motor Direction
    if (rightMotorSpeed < 0)
    {
        digitalWrite(motorRightPin1, LOW);
        digitalWrite(motorRightPin2, HIGH);
    }
    else if (rightMotorSpeed > 0)
    {
        digitalWrite(motorRightPin1, HIGH);
        digitalWrite(motorRightPin2, LOW);
    }
    else
    {
        digitalWrite(motorRightPin1, LOW);
        digitalWrite(motorRightPin2, LOW);
    }

    if (leftMotorSpeed < 0)
    {
        digitalWrite(motorLeftPin1, LOW);
        digitalWrite(motorLeftPin2, HIGH);
    }
    else if (leftMotorSpeed > 0)
    {
        digitalWrite(motorLeftPin1, HIGH);
        digitalWrite(motorLeftPin2, LOW);
    }
    else
    {
        digitalWrite(motorLeftPin1, LOW);
        digitalWrite(motorLeftPin2, LOW);
    }

    // Set Motor Speeds
    // To-Do
}

void DS4Control::vTaskDS4Control(void *pvParameters)
{
    // To-Do
}