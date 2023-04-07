#include "klasifikasiSuara.h"
#include "tubuhKanan.h"
#include "tubuhKiri.h"
#include "tubuhTengah.h"
#include "zonaA.h"
#include "zonaB.h"
#include "zonaB.h"
#include "master.h"
#include "slave.h"

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  klasifikasiSuara();
  suaraMusik();

}
