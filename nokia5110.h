#ifndef NOKIA5110_H
#define NOKIA5110_H
//
// NOKIA5110
// Library for accessing the Nokia 5110 84x48 LCD display
// Written by Larry Bank (bitbank@pobox.com)
// Copyright (c) 2017 BitBank Software, Inc.
// Project started 4/8/2017
//
// Initialize the library
int nokiaInit(int iSPIChannel, int iDC, int iReset, int iLED);

// Turns off the display and frees the resources
void nokiaShutdown(void);

// Fills the display with the byte pattern
int nokiaFill(unsigned char ucPattern);

// Turns the backlight on or off
void nokiaBacklight(int bOn);

// Write a text string to the display at x (column 0-83) and y (row 0-5)
// bLarge = 0 - 8x8 font, bLarge = 1 - 16x24 font
int nokiaWriteString(int x, int y, char *szText, int bLarge);

// Sets a pixel to On (1) or Off (0)
// Coordinate system is pixels, not text rows (0-83, 0-47)
int nokiaSetPixel(int x, int y, unsigned char ucPixel);

// Reads a pixel (as 0 or 1)
// Coordinate system is pixel, not text rows (0-83, 0-47)
int nokiaGetPixel(int x, int y);

// Sets the contrast level of the display
// Valid values are 0-255 where 0=lightest and 255=darkest
int nokiaSetContrast(unsigned char ucContrast);
#endif // NOKIA5110_H
