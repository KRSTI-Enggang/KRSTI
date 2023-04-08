#ifndef TUBUHKANAN_H
#define TUBUHKANAN_H
#define VERSION "1.0.0"
#define DEBUG true
#include <Arduino.h>
#include <Servo.h>
Servo servoKanan;

/**
 * File yang berisi sekumpulan member untuk menggambar tubuh kanan
 * menggunakan Servo Ax-12A ( Dynamixel) 
 * atau servo arduino compatible   
 * yang dimana file ini akan di include pada file utama yang akan dipanggil
 * oleh fungsi main(), sehingga file ini akan di compile bersamaan dengan file utama
 * file ini berisi ID servo pada tiap-tiap servo yang akan digunakan pada sendi tubuh
 */

int pergelanganTanganKananY = 4;
int lenganKananY = 5;
int lenganKananX = 6;
int bahuKananY = 7;
int bahuKananX = 8;
int pahaKananY = 9;
int lututKananY = 10;
int pergelanganKakikananY = 11;
int pergelanganKakikananX = 12;
int pinggulkananY = 13;
int pinggulkananX = 14;

void tubuhKanan() {
  servoKanan.attach(pergelanganTanganKananY);
  servoKanan.attach(lenganKananY);
  servoKanan.attach(lenganKananX);
  servoKanan.attach(bahuKananY);
  servoKanan.attach(bahuKananX);
  servoKanan.attach(pahaKananY);
  servoKanan.attach(lututKananY);
  servoKanan.attach(pergelanganKakikananY);
  servoKanan.attach(pergelanganKakikananX);
  servoKanan.attach(pinggulkananY);
  servoKanan.attach(pinggulkananX);
}
#endif
