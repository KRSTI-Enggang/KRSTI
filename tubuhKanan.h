#ifndef TUBUHKANAN_H
#define TUBUHKANAN_H
#define VERSION "1.0.0"
#define DEBUG true
#include <Arduino.h>
#include <Servo.h>

Servo servoKanan4;
Servo servoKanan5;
Servo servoKanan6;
Servo servoKanan7;
Servo servoKanan8;
Servo servoKanan9;
Servo servoKanan10;
Servo servoKanan11;
Servo servoKanan12;
Servo servoKanan13;
Servo servoKanan14;

/**
 * File yang berisi sekumpulan member untuk menggambar tubuh kanan
 * menggunakan Servo Ax-12A ( Dynamixel) 
 * atau servo arduino compatible   
 * yang dimana file ini akan di include pada file utama yang akan dipanggil
 * oleh fungsi main(), sehingga file ini akan di compile bersamaan dengan file utama
 * file ini berisi ID servo pada tiap-tiap servo yang akan digunakan pada sendi tubuh
 */

int pergelanganTanganKananY = 5;
int lenganKananY = 6;
int lenganKananX = 7;
int bahuKananY = 8;
int bahuKananX = 9;
int pahaKananY = 10;
int lututKananY = 11;
int pergelanganKakikananY = 12;
int pergelanganKakikananX = 13;
int pinggulkananY = 14;
int pinggulkananX = 15;

void tubuhKanan() {
  servoKanan4.attach(pergelanganTanganKananY);
  servoKanan5.attach(lenganKananY);
  servoKanan6.attach(lenganKananX);
  servoKanan7.attach(bahuKananY);
  servoKanan8.attach(bahuKananX);
  servoKanan9.attach(pahaKananY);
  servoKanan10.attach(lututKananY);
  servoKanan11.attach(pergelanganKakikananY);
  servoKanan12.attach(pergelanganKakikananX);
  servoKanan13.attach(pinggulkananY);
  servoKanan14.attach(pinggulkananX);
}
#endif
