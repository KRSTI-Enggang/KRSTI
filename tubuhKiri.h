#ifndef TUBUHKIRI_H
#define TUBUHKIRI_H
#define VERSION "1.0.0"
#define DEBUG true
#include <Servo.h>
#include <Arduino.h>
Servo servoKiri15;
Servo servoKiri16;
Servo servoKiri17;
Servo servoKiri18;
Servo servoKiri19;
Servo servoKiri20;
Servo servoKiri21;
Servo servoKiri22;
Servo servoKiri23;
Servo servoKiri24;
Servo servoKiri25;
/**
 * File yang berisi sekumpulan member untuk menggambar tubuh tengah
 * menggunakan Servo Ax-12A ( Dynamixel) 
 * atau servo arduino compatible   
 * yang dimana file ini akan di include pada file utama yang akan dipanggil
 * oleh fungsi main(), sehingga file ini akan di compile bersamaan dengan file utama
 * file ini berisi ID servo pada tiap-tiap servo yang akan digunakan pada sendi tubuh
 */
int pergelanganTanganKiriY = 16;
int lenganKiriY = 17;
int lenganKiriX = 18;
int bahuKiriY = 19;
int bahuKiriX = 20;
int pahaKiriY = 21;
int lututKiriY = 22;
int pergelanganKakiKiriY = 23;
int pergelanganKakiKiriX = 24;
int pinggulKiriY = 25;
int pinggulKiriX = 26;

void tubuhKiri() {
  servoKiri15.attach(pergelanganTanganKiriY);
  servoKiri16.attach(lenganKiriY);
  servoKiri17.attach(lenganKiriX);
  servoKiri18.attach(bahuKiriY);
  servoKiri19.attach(bahuKiriX);
  servoKiri20.attach(pahaKiriY);
  servoKiri21.attach(lututKiriY);
  servoKiri22.attach(pergelanganKakiKiriY);
  servoKiri23.attach(pergelanganKakiKiriX);
  servoKiri24.attach(pinggulKiriY);
  servoKiri25.attach(pinggulKiriX);
}
#endif
