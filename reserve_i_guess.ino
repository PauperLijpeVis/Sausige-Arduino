#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 60

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 11
#define CLOCK_PIN 12
#define BRIGHTNESS          1000

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

long Kleur = CRGB::DarkMagenta;

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  // Uncomment/edit one of the following lines for your leds arrangement.
  // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);

  // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);

  // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);
  // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  {
    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
    if (buttonState == HIGH) {
      // Turn the LED on, then pause
      leds[0] = Kleur;
      FastLED.show();
      delay(5);
      leds[1] = Kleur;
      FastLED.show();
      delay(5);
      leds[2] = Kleur;
      FastLED.show();
      delay(5);
      leds[3] = Kleur;
      FastLED.show();
      delay(5);
      leds[4] = Kleur;
      FastLED.show();
      delay(5);
      leds[5] = Kleur;
      FastLED.show();
      delay(5);
      leds[6] = Kleur;
      FastLED.show();
      delay(5);
      leds[7] = Kleur;
      FastLED.show();
      delay(5);
      leds[8] = Kleur;
      FastLED.show();
      delay(5);
      leds[9] = Kleur;
      FastLED.show();
      delay(5);
      leds[10] = Kleur;
      FastLED.show();
      delay(5);
      leds[11] = Kleur;
      FastLED.show();
      delay(5);
      leds[12] = Kleur;
      FastLED.show();
      delay(5);
      leds[13] = Kleur;
      FastLED.show();
      delay(5);
      leds[14] = Kleur;
      FastLED.show();
      delay(5);
      leds[15] = Kleur;
      FastLED.show();
      delay(5);
      leds[16] = Kleur;
      FastLED.show();
      delay(5);
      leds[17] = Kleur;
      FastLED.show();
      delay(5);
      leds[18] = Kleur;
      FastLED.show();
      delay(5);
      leds[0] = Kleur;
      FastLED.show();
      delay(5);
      leds[19] = Kleur;
      FastLED.show();
      delay(5);
      leds[20] = Kleur;
      FastLED.show();
      delay(5);
      leds[21] = Kleur;
      FastLED.show();
      delay(5);
      leds[22] = Kleur;
      FastLED.show();
      delay(5);
      leds[23] = Kleur;
      FastLED.show();
      delay(5);
      leds[24] = Kleur;
      FastLED.show();
      delay(5);
      leds[25] = Kleur;
      FastLED.show();
      delay(5);
      leds[26] = Kleur;
      FastLED.show();
      delay(5);
      leds[27] = Kleur;
      FastLED.show();
      delay(5);
      leds[28] = Kleur;
      FastLED.show();
      delay(5);
      leds[29] = Kleur;
      FastLED.show();
      delay(5);
      leds[30] = Kleur;
      FastLED.show();
      delay(5);
      leds[31] = Kleur;
      FastLED.show();
      delay(5);
      leds[32] = Kleur;
      FastLED.show();
      delay(5);
      leds[33] = Kleur;
      FastLED.show();
      delay(5);
      leds[34] = Kleur;
      FastLED.show();
      delay(5);
      leds[35] = Kleur;
      FastLED.show();
      delay(5);
      leds[36] = Kleur;
      FastLED.show();
      delay(5);
      leds[37] = Kleur;
      FastLED.show();
      delay(5);
      leds[38] = Kleur;
      FastLED.show();
      delay(5);
      leds[39] = Kleur;
      FastLED.show();
      delay(5);
      leds[40] = Kleur;
      FastLED.show();
      delay(5);
      leds[41] = Kleur;
      FastLED.show();
      delay(5);
      leds[42] = Kleur;
      FastLED.show();
      delay(5);
      leds[43] = Kleur;
      FastLED.show();
      delay(5);
      leds[44] = Kleur;
      FastLED.show();
      delay(5);
      leds[45] = Kleur;
      FastLED.show();
      delay(5);
      leds[46] = Kleur;
      FastLED.show();
      delay(5);
      leds[47] = Kleur;
      FastLED.show();
      delay(5);
      leds[48] = Kleur;
      FastLED.show();
      delay(5);
      leds[49] = Kleur;
      FastLED.show();
      delay(5);
      leds[50] = Kleur;
      FastLED.show();
      delay(5);
      leds[51] = Kleur;
      FastLED.show();
      delay(5);
      leds[52] = Kleur;
      FastLED.show();
      delay(5);
      leds[53] = Kleur;
      FastLED.show();
      delay(5);
      leds[54] = Kleur;
      FastLED.show();
      delay(5);
      leds[55] = Kleur;
      FastLED.show();
      delay(5);
      leds[56] = Kleur;
      FastLED.show();
      delay(5);
      leds[57] = Kleur;
      FastLED.show();
      delay(5);
      leds[58] = Kleur;
      FastLED.show();
      delay(5);
      leds[59] = Kleur;
      FastLED.show();
      delay(5);
      leds[60] = Kleur;
      FastLED.show();
      delay(5);
    }
  }

  delay(1000);

  {
    // read the state of the pushbutton value:
    buttonState = digitalRead(buttonPin);

    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
    if (buttonState == HIGH) {
      // Now turn the LED off, then pause
      leds[60] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[59] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[58] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[57] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[56] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[55] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[54] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[53] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[52] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[51] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[50] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[49] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[48] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[47] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[46] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[45] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[44] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[43] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[42] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[41] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[40] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[39] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[38] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[37] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[36] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[35] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[34] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[33] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[32] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[31] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[30] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[29] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[28] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[27] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[26] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[25] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[24] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[23] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[22] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[21] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[20] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[19] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[18] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[17] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[16] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[15] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[14] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[13] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[12] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[11] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[10] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[9] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[8] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[7] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[6] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[5] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[4] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[3] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[2] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[1] = CRGB::Black;
      FastLED.show();
      delay(5);
      leds[0] = CRGB::Black;
      FastLED.show();
      delay(5);
    }
  }

  delay(1000);

}
