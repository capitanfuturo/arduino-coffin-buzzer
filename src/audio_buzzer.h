/*
 * MIT License - Copyright (c) 2020 Giuseppe Caliendo
 * audio-buzzer 
 */
#ifndef AUDIO_BUZZER_H
#define AUDIO_BUZZER_H

#include <Arduino.h>

const unsigned int  NOTE_C2 = 66;
const unsigned int  NOTE_Db2 = 70;
const unsigned int  NOTE_D2 = 74;
const unsigned int  NOTE_Eb2 = 78;
const unsigned int  NOTE_E2 = 83;
const unsigned int  NOTE_F2 = 88;
const unsigned int  NOTE_Gb2 = 93;
const unsigned int  NOTE_G2 = 98;
const unsigned int  NOTE_Ab2 = 104;
const unsigned int  NOTE_A2 = 110;
const unsigned int  NOTE_Bb2 = 117;
const unsigned int  NOTE_B2 = 124;

const unsigned int  NOTE_C3 = 131;
const unsigned int  NOTE_Db3 = 139;
const unsigned int  NOTE_D3 = 147;
const unsigned int  NOTE_Eb3 = 156;
const unsigned int  NOTE_E3 = 165;
const unsigned int  NOTE_F3 = 175;
const unsigned int  NOTE_Gb3 = 185;
const unsigned int  NOTE_G3 = 196;
const unsigned int  NOTE_Ab3 = 208;
const unsigned int  NOTE_A3 = 220;
const unsigned int  NOTE_Bb3 = 233;
const unsigned int  NOTE_B3 = 247;

const unsigned int  NOTE_C4 = 262;
const unsigned int  NOTE_Db4 = 277;
const unsigned int  NOTE_D4 = 294;
const unsigned int  NOTE_Eb4 = 311;
const unsigned int  NOTE_E4 = 330;
const unsigned int  NOTE_F4 = 349;
const unsigned int  NOTE_Gb4 = 370;
const unsigned int  NOTE_G4 = 392;
const unsigned int  NOTE_Ab4 = 415;
const unsigned int  NOTE_A4 = 440;
const unsigned int  NOTE_Bb4 = 466;
const unsigned int  NOTE_B4 = 494;

const unsigned int  NOTE_C5 = 523;
const unsigned int  NOTE_Db5 = 554;
const unsigned int  NOTE_D5 = 587;
const unsigned int  NOTE_Eb5 = 622;
const unsigned int  NOTE_E5 = 659;
const unsigned int  NOTE_F5 = 698;
const unsigned int  NOTE_Gb5 = 740;
const unsigned int  NOTE_G5 = 784;
const unsigned int  NOTE_Ab5 = 831;
const unsigned int  NOTE_A5 = 880;
const unsigned int  NOTE_Bb5 = 932;
const unsigned int  NOTE_B5 = 988;

const unsigned int  NOTE_C6 = 1046;
const unsigned int  NOTE_Db6 = 1109;
const unsigned int  NOTE_D6 = 1175;
const unsigned int  NOTE_Eb6 = 1245;
const unsigned int  NOTE_E6 = 1319;
const unsigned int  NOTE_F6 = 1397;
const unsigned int  NOTE_Gb6 = 1480;
const unsigned int  NOTE_G6 = 1568;
const unsigned int  NOTE_Ab6 = 1661;
const unsigned int  NOTE_A6 = 1760;
const unsigned int  NOTE_Bb6 = 1865;
const unsigned int  NOTE_B6 = 1976;

const unsigned int  NOTE_C7 = 2093;
const unsigned int  NOTE_Db7 = 2217;
const unsigned int  NOTE_D7 = 2349;
const unsigned int  NOTE_Eb7 = 2489;
const unsigned int  NOTE_E7 = 2637;
const unsigned int  NOTE_F7 = 2794;
const unsigned int  NOTE_Gb7 = 2960;
const unsigned int  NOTE_G7 = 3136;
const unsigned int  NOTE_Ab7 = 3322;
const unsigned int  NOTE_A7 = 3520;
const unsigned int  NOTE_Bb7 = 3729;
const unsigned int  NOTE_B7 = 3951;
const unsigned int  NOTE_C8 = 4186;

const unsigned int  BPM120_1_2_tpt = 666;
const unsigned int  BPM120_1_4 = 500;
const unsigned int  BPM120_1_4_tpt = 333;
const unsigned int  BPM120_1_8 = 250;
const unsigned int  BPM120_1_8_dot = 375;
const unsigned int  BPM120_1_16_dot = 187;
const unsigned int  BPM120_1_16 = 125;

void beep(int note, int duration, int buzzer_pin);

#endif
