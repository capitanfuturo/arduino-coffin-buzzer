/*
 * MIT License - Copyright (c) 2020 Giuseppe Caliendo
 * audio-buzzer 
 */
#include "audio_buzzer.h"

void beep(int note, int duration, int buzzer_pin) {

  //Play tone on buzzerPin
  tone(buzzer_pin, note, duration);
  delay(duration);

  //Stop tone on buzzerPin
  noTone(buzzer_pin);
  delay(50);
}
