#ifndef CONFIG_H
#define CONFIG_H

// Hardware pins
const int MIC_PIN = 2;
const int LED_PIN = 13;

// Time between two valid clap detections
const unsigned long CLAP_COOLDOWN = 300;

// Serial communication speed
const unsigned long SERIAL_BAUD_RATE = 9600;

#endif