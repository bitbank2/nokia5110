//
// Nokia 5110 LCD display test program
//
// Written by Larry Bank 4/6/2016
//
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <nokia5110.h>

int main(int argc, char* argv[])
{
int rc;
int x, y;

	rc = nokiaInit(0, 22, 11, 13);
	if (rc != 0)
	{
		printf("Problem initializing nokia5110 library\n");
		return 0;
	}
	nokiaWriteString(14, 1, "Another", 0);
	nokiaWriteString(14, 2, "BitBank", 0);
	nokiaWriteString(6, 3, "FOSS tool", 0);
	nokiaWriteString(10, 4, "4/8/2017", 0);
	// draw a box around the whole display
	for (x=0; x<84; x++)
	{
		nokiaSetPixel(x, 0, 1);
		nokiaSetPixel(x, 47, 1);
	}
	for (y=0; y<48; y++)
	{
		nokiaSetPixel(0, y, 1);
		nokiaSetPixel(83, y, 1);
	}
	usleep(5000000);
	nokiaShutdown();

   return 0;
} /* main() */
