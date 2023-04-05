#ifndef KLASIFIKASI_SUARA_H
#define KLASIFIKASI_SUARA_H

#define VERSION "1.00"
#define DEBUG true.
#include <Arduino.h>

/*
* File ini berisi library yang digunakan untuk mengklasifikasikan suara yang didengar oleh robot
* fungsi dari file ini akan di pada file utama robot 1 untuk menjadi flag gerakan mulai atau berhenti
* ketika menerima lagu yang akan diputar
* yang dimana,file ini akan menerima inputan dari
*/
const uint8_t pinSuara = A0;
int nilai;
float tegangan;
bool musik;

void suaraMusik() {

    nilai = analogRead(pinSuara);
    tegangan = nilai * 5.0 / 1023.0;




}


void klasifikasiSuara() {
    if (tegangan < 5) {
        if (musik == HIGH) {

        } else {

        }
    } else {
        if(musik == HIGH) {

        } else {

        }
    }




#endif