/*
 * Header file to load LEDs for Keeping Carbon Stored
 * Calico Rose
 * October 20, 2025
 * Loading and setting up the LEDs associated with the tiles that are
 * stomped on for the game.
 */

#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN 6
#define TOTAL_LEDS 14

CRGBArray<TOTAL_LEDS> ledStrip;

void setupLED()
{
    FastLED.addLeds<NEOPIXEL, LED_PIN>(ledStrip, TOTAL_LEDS);
    ledStrip.fill_solid(CRGB::Black);
    FastLED.show();
}

void turnGreen()
{
    ledStrip.fill_solid(CRGB::Green);
    FastLED.show();
}

void turnRed()
{
    ledStrip.fill_solid(CRGB::Red);
    FastLED.show();
}

void turnBlack()
{
    ledStrip.fill_solid(CRGB::Black);
    FastLED.show();
}