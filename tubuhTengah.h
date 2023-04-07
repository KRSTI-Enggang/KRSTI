#ifndef TUBUHTENGAH_H
#define TUBUHTENGAH_H
#define VERSION "1.0.0"
#define DEBUG true
#include <Arduino.h>
#include <Servo.h>
Servo servo;  

/**
 * File yang berisi sekumpulan member untuk menggambar tubuh tengah
 * menggunakan Servo Ax-12A ( Dynamixel) 
 * atau servo arduino compatible   
 * yang dimana file ini akan di include pada file utama yang akan dipanggil
 * oleh fungsi main(), sehingga file ini akan di compile bersamaan dengan file utama
 * file ini berisi ID servo pada tiap-tiap servo yang akan digunakan pada sendi tubuh
 */

int kepalaX = 1;
int kepalaY = 2;
int pinggangX = 3;


void tubuhTengah() {
  servo.attach(kepalaX);
  servo.attach(kepalaY);
  servo.attach(pinggangX);
}

#endif
