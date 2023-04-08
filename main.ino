#include "klasifikasiSuara.h"
#include "tubuhKanan.h"
#include "tubuhKiri.h"
#include "tubuhTengah.h"
#include "zonaA.h"
#include "zonaB.h"
#include "zonaB.h"
#include "master.h"
#include "slave.h"
#include <Servo.h>

bool modeMaster = true; //Jika master maka true,jika slave maka false.

void setup() {
  //Serial Baudrate
  Serial.begin(115200);

  // Inisiasi Tubuh
  tubuhTengah();
  tubuhKanan();
  tubuhKiri();
}

void loop() {
  //Inisiasi Sebagai master/slave
  if (modeMaster == true) {
    master();
  } else {
    slave();
  }

  //Inisiasi fungsi Suara
  klasifikasiSuara();
  suaraMusik();
}
