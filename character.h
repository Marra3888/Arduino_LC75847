/*
  14 Segment Display Data for PT6523.
  Created by Fırat SOYGÜL, 20 Aralık 200x11
  (https://github.com/firatsoygul/PT6523)
*/

#ifndef character_h
#define character_h

//#include <avr/pgmspace.h>

const byte character7SEG[10][5][2] =
{   //0            1             1           2            2            3             3           4
{{0b11001000, 0b11100000}, {0b00001110, 0b10101000}, {0b00000010, 0b10101110}, {0b00000000, 0b00000000}}, //0
{{0b10001000, 0b00000000}, {0b00001100, 0b00000000}, {0b00000010, 0b10000000}, {0b10100000, 0b00000000}}, //1
{{0b11000100, 0b11000000}, {0b00000110, 0b11001000}, {0b00000010, 0b01101100}, {0b01100000, 0b00000000}}, //2
{{0b11001100, 0b10000000}, {0b00001110, 0b11000000}, {0b00000010, 0b11101000}, {0b00000000, 0b00000000}}, //3
{{0b10001100, 0b00100000}, {0b00001100, 0b01100000}, {0b00000010, 0b11000010}, {0b00000000, 0b00000000}}, //4
{{0b01001100, 0b10100000}, {0b00001010, 0b11100000}, {0b00000000, 0b11101010}, {0b00000000, 0b00000000}}, //5
{{0b01001100, 0b11100000}, {0b00001010, 0b11101000}, {0b00000000, 0b11101110}, {0b00000000, 0b00000000}}, //6
{{0b11001000, 0b00000000}, {0b00001110, 0b00000000}, {0b00000010, 0b10100000}, {0b00000000, 0b00000000}}, //7
{{0b11001100, 0b11100000}, {0b00001110, 0b11101000}, {0b00000010, 0b11101110}, {0b00000000, 0b00000000}}, //8
{{0b11001100, 0b10100000}, {0b00001110, 0b11100000}, {0b00000010, 0b11101010}, {0b00000000, 0b00000000}}  //9
};


#endif

//      {21, 80}, //Ç - 199
//      {14, 58}, //Ö - 214
//      {10, 42}, //Ü - 220
//      {14, 58}, //ö - 246
//      {10, 42}, //ü - 252
//      {0, 0}, //Ğ - 286
//      {0, 0}, //ğ - 287
//      {0, 0}, //İ - 304
//      {0, 0}, //Ş - 350
//      {0, 0}, //ş - 351