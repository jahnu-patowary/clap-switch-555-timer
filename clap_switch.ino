#include "config.h"
#include "ClapDetector.h"

// Create the clap detector object
ClapDetector clapDetector(MIC_PIN, CLAP_COOLDOWN);

// Store the current LED state
bool ledState = false;

void setup()
{
    // Configure LED pin as output
    pinMode(LED_PIN, OUTPUT);

    // Start serial communication
    Serial.begin(SERIAL_BAUD_RATE);

    // Initialize clap detector
    clapDetector.begin();

    // LED starts OFF
    digitalWrite(LED_PIN, LOW);

    Serial.println("Clap Switch Started");
}

void loop()
{
    // Check if a clap is detected
    if (clapDetector.detectClap())
    {
        // Toggle LED state
        ledState = !ledState;

        // Update LED
        digitalWrite(LED_PIN, ledState ? HIGH : LOW);

        // Display status
        if (ledState)
        {
            Serial.println("Clap detected -> LED ON");
        }
        else
        {
            Serial.println("Clap detected -> LED OFF");
        }
    }
}