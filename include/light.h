#include <Arduino.h>
#include <data.h>
/** This file contains the declarations for the global variables used
 *  in the rest of the program as flags and data. It also contains the 
 *  custom data structures and preset defaults. 
**/
#ifndef light
#define light

extern void RGBsetup();
extern void setRGB(byte r, byte g, byte b);
extern void setRGBsPos(sPosition sPos);

#endif