#ifndef TUBUHTENGAH_H
#define TUBUHTENGAH_H
#define VERSION "1.0.0"
#define DEBUG true
#include <Arduino.h>
#include <Servo.h>

Servo servo1;  
Servo servo2;  
Servo servo3;  

/**
 * File yang berisi sekumpulan member untuk menggambar tubuh tengah
 * menggunakan Servo Ax-12A ( Dynamixel) 
 * atau servo arduino compatible   
 * yang dimana file ini akan di include pada file utama yang akan dipanggil
 * oleh fungsi main(), sehingga file ini akan di compile bersamaan dengan file utama
 * file ini berisi ID servo pada tiap-tiap servo yang akan digunakan pada sendi tubuh
 */

int kepalaX = 2;
int kepalaY = 3;
int pinggangX = 4;


void tubuhTengah() {
  servo1.attach(kepalaX);
  servo2.attach(kepalaY);
  servo3.attach(pinggangX);
}

#endif
