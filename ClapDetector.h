#ifndef CLAP_DETECTOR_H
#define CLAP_DETECTOR_H

class ClapDetector
{
private:
    int microphonePin;
    unsigned long cooldownTime;
    unsigned long lastClapTime;

public:
    ClapDetector(int pin, unsigned long cooldown);

    void begin();

    bool detectClap();
};

#endif