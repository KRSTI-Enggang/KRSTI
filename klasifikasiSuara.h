#ifndef KLASIFIKASISUARA_H
#define KLASIFIKASISUARA_H
#define VERSION "1.00"
#define DEBUG true.
#include <Arduino.h>

/*
  File ini berisi library yang digunakan untuk mengklasifikasikan suara yang didengar oleh robot
  fungsi dari file ini akan di pada file utama robot 1 untuk menjadi flag gerakan mulai atau berhenti
  ketika menerima lagu yang akan diputar
  yang dimana,file ini akan menerima inputan dari
*/
const uint8_t pinSuara = A0;
int nilai;
float tegangan;
int musik;

void suaraMusik() {
  nilai = analogRead(pinSuara);
  tegangan = nilai * 5.0 / 1023.0;
}

void klasifikasiSuara() {
  if (tegangan <= 3) {
    musik = 0;
  }
  else if (tegangan >= 3) {
    musik = 1;
  }
}
#endif
