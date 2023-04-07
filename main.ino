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
  

void setup() {  
//Serial Baudrate
  Serial.begin(115200);
  
// Inisiasi Tubuh
  tubuhTengah();
  tubuhKanan();
  tubuhKiri();
  
}

void loop() {
  klasifikasiSuara();
  suaraMusik();

}
