Berikut berupa standarisasi dalam penulisan program robot penari KRSTI Enggang

Program ditulis dengan standar “Camel Case” misalnya nama ariabel dari tangan kanan menjadi tanganKanan,bukan tangan_kanan atau TANGANKANAN/tangankanan agar mudah dibaca dan rapi.

Program dituliskan secara OOP dengan beberapa struktur file yaitu :

Main Program Ber-Ekstensi .ino untuk memanggil setiap header dan function dari file .h, akana da dua program utama yaitu mainRobot1 dan mainRobot2.

zonaA berisi sekumpulan fungsi dan sekuensial timing yang akan memanggil member servo ID dan menuliskan derajat servo dan waktu gerakan pembuka pada zona A.

zonaB berisi sekumpulan fungsi dan sekuensial timing yang akan memanggil member servo ID dan menuliskan derajat servo dan waktu gerakan tarian di zona B.

zonaC berisi sekumpulan fungsi dan sekuensial timing yang akan memanggil member servo ID dan menuliskan derajat servo dan waktu gerakan penutup.

tubuhKanan.h Berisi member class untuk tubuh bagian kanan yang berisi servo ID dan GPIO yang digunakan.

tubuhKiri.h Berisi member class untuk tubuh bagian kiri yang berisi servo ID dan GPIO yang digunakan.

tubuhTengah.h Berisi member class untuk tubuh bagian tengah yang berisi servo ID dan GPIO yang digunakan.

komunikasiUtama.h berisi fungsi komunikasi antara bluetooth dan laptop

master.h berisi fungsi komunikasi antara robot 1 ke robot 2 sebagai master yang akan mengirim instruksi ke robot 2.

slave.h berisi  fungsi komunikasi antara robot 2 ke robot 1 sebagai slave yang akan menerima instruksi dari robot  1.

Definisi.h berisi kumpulan library yang digunakan,file ini bersifat global

Library eksternal yang digunakan
- HC-05 : https://github.com/jdunmire/HC05 // HC-05
- https://github.com/ROBOTIS-GIT/Dynamixel2Arduino
- https://github.com/pschatzmann/ESP32-A2DP

sisanya library bawaan dari development board

Board dan hardware yang digunakan 
- ESP32
- HC-05 Bluetooth
- Dynamixel AX-12A
- Arduino Servo Compatible ?

Kerangka Mekanik 
-  



