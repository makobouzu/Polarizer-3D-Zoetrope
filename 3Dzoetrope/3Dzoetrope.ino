#include <SPI.h> 			// also need to include SPI
#include <L6470Stepper.h>	// include library

#define pinCS	10
L6470Stepper stepper(pinCS);	// pass CS pin number

void setup()
{
	stepper.setup();
	stepper.rotate(CW, 200);		// pass CW or CCW
}

void loop()
{
  stepper.rotate(CW, 600);
  delay(20000);
}
