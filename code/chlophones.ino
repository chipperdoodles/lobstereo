#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2SQuad        i2s_in;      //xy=62.5,270
AudioMixer4              mix1;         //xy=218,270
AudioOutputI2SQuad       i2s_out;      //xy=382,273
AudioConnection          patchCord1(i2s_in, 0, mix1, 0);
AudioConnection          patchCord2(i2s_in, 1, mix1, 1);
AudioConnection          patchCord3(i2s_in, 2, mix1, 2);
AudioConnection          patchCord4(i2s_in, 3, mix1, 3);
AudioConnection          patchCord5(mix1, 0, i2s_out, 0);
AudioConnection          patchCord6(mix1, 0, i2s_out, 1);
AudioConnection          patchCord7(mix1, 0, i2s_out, 2);
AudioConnection          patchCord8(mix1, 0, i2s_out, 3);
AudioControlSGTL5000     sgtl_1;     //xy=95,112
AudioControlSGTL5000     sgtl_2;     //xy=96,75
// GUItool: end automatically generated code

const int myInput = AUDIO_INPUT_LINEIN;

void setup() {
  // put your setup code here, to run once:
  
  AudioMemory(24);
  
  // Enable the audio shields, select input, and enable output

  sgtl_1.setAddress(LOW);
  sgtl_1.enable();
  sgtl_1.inputSelect(myInput);
  sgtl_1.volume(0.5);

  sgtl_2.setAddress(HIGH);
  sgtl_2.enable();
  sgtl_2.inputSelect(myInput);
  sgtl_2.volume(0.5);
 
  mix1.gain(0, 0.5);
  mix1.gain(1, 0.5);
  mix1.gain(2, 0.5);
  mix1.gain(3, 0.5);

}


void loop() {
  // put your main code here, to run repeatedly:
  //TODO add buttons for mute/volume/fade between inputs
//  int pot1 = analogRead(A3);  // knob = 0 to 1023
//  float gain1 = (float)pot1 / 1023.0;
//  mix1.gain(0, gain1);
//  mix1.gain(1, gain1);
//  
//  int pot2 = analogRead(A4);
//  float gain2 = (float)pot2 / 1023.0;
//  mix1.gain(2, gain2);
//  mix1.gain(3, gain2);
//
}
