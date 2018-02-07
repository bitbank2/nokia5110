//
// Nokia 5110 LCD display library
// written by Larry Bank
// Copyright (c) 2018 BitBank Software, Inc.
// converted from Linux 2/5/2018
//
#define FONT_NORMAL 0
#define FONT_SMALL 1
#define FONT_LARGE 2

//
// Uncomment this define to allow the pixel functions to work
// It requires an extra 504 bytes of memory (rare on Arduinos)
//
// #define BACKING_RAM

//
// Power up the display
//
void nokiaPowerUp(void);
//
// Set the display into low power mode
//
void nokiaPowerDown(void);
//
// Initializes the LCD controller into "horizontal write mode"
// Prepares the font data for the orientation of the display
// Parameters: GPIO pin numbers used for the DC/RST/LED control lines
// If not using the LED backlight, set iLED to -1
//
int nokiaInit(int iDC, int iReset, int iLED);
//
// Fill the display with a byte pattern
//
void nokiaFill(byte pattern);

//
// Fill the display with a byte pattern
//
void nokiaFill(byte pattern);

//
// Controls the LED backlight
//
void nokiaBacklight(int bOn);
//
// Set the contrast value (0 = min, 15 = max)
//
int nokiaSetContrast(unsigned char ucContrast);
//
// Set (or clear) an individual pixel
// The local copy of the frame buffer is used to avoid
// reading data from the display controller
//
int nokiaSetPixel(int x, int y, unsigned char ucColor);
//
// Read the pixel at the given x,y
// if the library is not initialized, or the coordinates are
// not within the valid range, it returns 0
//
int nokiaGetPixel(int x, int y);
//
// Draw a string of normal (8x8), small (6x8) or large (16x24) characters
// At the given col+row
//
int nokiaWriteString(int x, int y, char *szMsg, int bInverted, int iSize);


