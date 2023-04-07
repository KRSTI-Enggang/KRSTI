#ifndef MASTER_H
#define MASTER_H
#define VERSION "1.0.0"
#define DEBUG true
#include <Arduino.h>
#include "klasifikasiSuara.h"
int statusMaster;

/**
 * File ini berisi library yang digunakan untuk berkomunikasi antara robot 1 dan robot 2 melalui bluetooth
 * File ini akan di include pada file utama yang akan dipanggil
 * oleh fungsi main(), sehingga file ini akan di compile bersamaan dengan file utama
 * menggunakan bluetooth ESP32,arduino akan mengirimkan ke ESP32 melalui serial,dan akan diteruskan ke ESP32 sebagai master ke robot 2
 * 
 */

void master() {
  statusMaster = Serial.write(musik);
}

#endif