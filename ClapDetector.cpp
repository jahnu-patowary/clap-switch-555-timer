#include "ClapDetector.h"

// Arduino functions used by this project.
// These are provided by the Arduino core when the code
// is uploaded to an Arduino board.
extern void pinMode(int pin, int mode);
extern int digitalRead(int pin);
extern unsigned long millis();

// Arduino constants
const int INPUT = 0;
const int HIGH = 1;


// Constructor
ClapDetector::ClapDetector(int pin, unsigned long cooldown)
{
    microphonePin = pin;
    cooldownTime = cooldown;
    lastClapTime = 0;
}


// Initialize microphone pin
void ClapDetector::begin()
{
    pinMode(microphonePin, INPUT);
}


// Check whether a clap has been detected
bool ClapDetector::detectClap()
{
    int sensorState = digitalRead(microphonePin);

    if (sensorState == HIGH)
    {
        unsigned long currentTime = millis();

        // Prevent multiple detections from the same clap
        if (currentTime - lastClapTime >= cooldownTime)
        {
            lastClapTime = currentTime;
            return true;
        }
    }

    return false;
}