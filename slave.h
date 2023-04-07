#include "WString.h"
#ifndef SLAVE_H
#define SLAVE_H
#define VERSION "1.0.0"
#define DEBUG true
#include <Arduino.h>
int statusSlave;
/**
 * File ini berisi library yang digunakan untuk berkomunikasi antara robot 1 dan robot 2 melalui bluetooth
 * File ini akan di include pada file utama yang akan dipanggil
 * oleh fungsi main(), sehingga file ini akan di compile bersamaan dengan file utama
 * ESP32 menerima dari master dan akan dikirimkan ke arduino melalui serial,
 * 
 */
void slave(){
    if (Serial.available()) {
    statusSlave = Serial.read();
    Serial.print(" flag yang diterima: ");
    Serial.println(statusSlave);
  }

}
#endif