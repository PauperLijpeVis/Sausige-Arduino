#include <FastLED.h>

#define NUM_LEDS 60

#define DATA_PIN 11
#define CLOCK_PIN 12
#define BRIGHTNESS 1000

const int buttonPin = 2;  
const int togglePin = 3;  


int buttonState = 0;       
long[] kleuren = {
    CRGB::Red,
    CRGB::Green,
    CRGB::Purple,
    CRGB::Blue
};
int currentColor = 0;
long Kleur = kleuren[currentColor];


CRGB leds[NUM_LEDS];

void setup() {
    FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);
}

void loop() {
    buttonState = digitalRead(buttonPin);

    if (buttonState == HIGH) {
        for (int i = 0; i <= NUM_LEDS; i++) {
            leds[i] = Kleur;
            FastLED.show();
            delay(5);
        }
    }

    delay(1000);

    if (buttonState == HIGH) {
        for (int i = NUM_LEDS; i >= 0; i--) {
            leds[i] = CRGB::Black;
            FastLED.show();
            delay(5);
        }
    }

    delay(1000);

    toggleState = digitalRead(togglePin);

    if (togglePin == HIGH) {
        if (currentColor + 1 < sizeof(kleuren)) {
            currentColor = currentColor + 1;
        } else {
            currentColor = 0;
        }
        Kleur = kleuren[currentColor]
    }

    delay(1000);
}
