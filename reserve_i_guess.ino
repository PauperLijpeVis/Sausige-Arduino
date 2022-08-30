#include <FastLED.h>

#define NUM_LEDS 60

#define DATA_PIN 11
#define CLOCK_PIN 12
#define BRIGHTNESS 1000

const int buttonPin = 2;  


int buttonState = 0;       
long Kleur = CRGB::Red;


CRGB leds[NUM_LEDS];

void setup() {
    FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);
}

void loop() {
    buttonState = digitalRead(buttonPin);
    {
        if (buttonState == HIGH) {
            for (int i = 0; i <= NUM_LEDS; i++) {
                leds[i] = Kleur;
                FastLED.show();
                delay(5);
            }
        }
    }

    delay(1000);

    {
        buttonState = digitalRead(buttonPin);

        if (buttonState == HIGH) {
            // Now turn the LED off, then pause
            for (int i = NUM_LEDS; i >= 0; i--) {
                leds[i] = CRGB::Black;
                FastLED.show();
                delay(5);
            }
        }
    }

    delay(1000);
}
