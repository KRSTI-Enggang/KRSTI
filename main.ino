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
  

bool modeMaster = true;

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

  } else {
    
  }

  //Inisiasi fungsi Suara
  klasifikasiSuara();
  suaraMusik();

  
}
