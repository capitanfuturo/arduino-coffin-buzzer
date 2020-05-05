/*
 * MIT License - Copyright (c) 2020 Giuseppe Caliendo
 * coffin-buzzer 
 */
#include "audio_buzzer.h"

const unsigned int BUZZER_PIN = 3; //with PWM

int counter = 0;

void setup()
{
  //Setup pin modes
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop(){
  section1();
  section2();
  beep(NOTE_Gb3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_Gb3, BPM120_1_8, BUZZER_PIN);
  section2();

  section1();
  section2();
  beep(NOTE_Gb3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_Gb3, BPM120_1_8, BUZZER_PIN);
  section2();

  section1();
  section2();
  beep(NOTE_Gb3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_Gb3, BPM120_1_8, BUZZER_PIN);
  section2();

  section3();
  section4();
  section5();
  section6();
  section7();

  beep(NOTE_B3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_A3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Ab3, BPM120_1_8, BUZZER_PIN);
}

void section1(){
  beep(NOTE_Gb3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_Gb3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Db4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_B3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_A3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_Ab3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_Ab3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Ab3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_B3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_A3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Ab3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb3, BPM120_1_4, BUZZER_PIN);
  beep(NOTE_Gb3, BPM120_1_8, BUZZER_PIN);
}

void section2(){
  beep(NOTE_A4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Ab4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_A4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Ab4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_A4, BPM120_1_8, BUZZER_PIN);
}

void section3(){
  beep(NOTE_A3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_A3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_A3, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_A3, BPM120_1_8, BUZZER_PIN);
}

void section4(){
  beep(NOTE_Db4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Db4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Db4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Db4, BPM120_1_8, BUZZER_PIN);
}

void section5(){
  beep(NOTE_B4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_B4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_B4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_B4, BPM120_1_8, BUZZER_PIN);
}

void section6(){
  beep(NOTE_E4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_E4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_E4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_E4, BPM120_1_8, BUZZER_PIN);
}

void section7(){
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
  beep(NOTE_Gb4, BPM120_1_8, BUZZER_PIN);
}
