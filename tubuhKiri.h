#ifndef TUBUHKIRI_H
#define TUBUHKIRI_H
#define VERSION "1.0.0"
#define DEBUG true
#include <Servo.h>
Servo servoKiri;
/**
 * File yang berisi sekumpulan member untuk menggambar tubuh tengah
 * menggunakan Servo Ax-12A ( Dynamixel) 
 * atau servo arduino compatible   
 * yang dimana file ini akan di include pada file utama yang akan dipanggil
 * oleh fungsi main(), sehingga file ini akan di compile bersamaan dengan file utama
 * file ini berisi ID servo pada tiap-tiap servo yang akan digunakan pada sendi tubuh
 */
int pergelanganTanganKiriY = 15;
int lenganKiriY = 16;
int lenganKiriX = 17;
int bahuKiriY = 18;
int bahuKiriX = 19;
int pahaKiriY = 20;
int lututKiriY = 21;
int pergelanganKakiKiriY = 22;
int pergelanganKakiKiriX = 23;
int pinggulKiriY = 24;
int pinggulKiriX = 25;

void tubuhKiri() {
  servoKiri.attach(pergelanganTanganKiriY);
  servoKiri.attach(lenganKiriY);
  servoKiri.attach(lenganKiriX);
  servoKiri.attach(bahuKiriY);
  servoKiri.attach(bahuKiriX);
  servoKiri.attach(pahaKiriY);
  servoKiri.attach(lututKiriY);
  servoKiri.attach(pergelanganKakiKiriY);
  servoKiri.attach(pergelanganKakiKiriX);
  servoKiri.attach(pinggulKiriY);
  servoKiri.attach(pinggulKiriX);
}
#endif
