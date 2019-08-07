/*
 * MaxMatrix
 * Version 1.0 Feb 2013
 * Copyright 2013 Oscar Kin-Chung Au
 */

#include "FastLED.h"
#define NUM_LEDS 26
CRGB leds[NUM_LEDS];


#include "Arduino.h"
#include "MaxMatrix.h"



MaxMatrix::MaxMatrix(byte _data, byte _load, byte _clock, byte _num) 
{
	data = _data;
	load = _load;
	clock = _clock;
	num = _num;
	colour=0xFAFF67;
}

void MaxMatrix::init()
{

	FastLED.addLeds<WS2813, 6>(leds, NUM_LEDS); FastLED.setBrightness(40);

}

void MaxMatrix::setIntensity(byte intensity)
{
}

void MaxMatrix::clearMatrix()
{
}

void MaxMatrix::setCommand(byte command, byte value)
{
}


void MaxMatrix::setColumn(byte col, byte value)
{
}

void MaxMatrix::setColumnAll(byte col, byte value)
{
}

void MaxMatrix::setDot(byte col, byte row, byte value)
{
}

// rutina para Zowi, para meter sus caritas en la matriz de 8
void MaxMatrix::writeFull(unsigned long value) {
	  // memset(leds, 0, sizeof(leds));
 	 //  FastLED.show(); delay(100);
	for (int i=0; i<NUM_LEDS;i++){
 	  leds[i] = (colour*(1L & (value >> i))); FastLED.show(); delay(1);                
        }
}

