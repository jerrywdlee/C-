#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  //sound(247);
  //delay(1200);
  //sound(7);
  //delay(10000);
  //nosound();
  //Beep(494, 200);
  int i = 0;
  for (i = 0; i < 10; i++) {
    /* code */
    Beep(523.3,1200);
    Beep(587.3,1200);
    Beep(659.3,1200);
    Beep(698.3,1200);
    Beep(784.0,1200);
    Beep(880,1200);
    Beep(987.8,1200);
  }
  //Beep(494, 200);
  //Beep(523, 300);
  //Beep(578, 400);
  //Beep(659, 500);
  //Beep(698, 600);
  //Beep(784, 700);
  //Beep(880, 800);
  //Beep(932, 900);
  //Beep(1046, 1000);
  //Beep(1175, 1100);
  //Beep(1381, 1200);
  //Beep(1480, 1300);
  //Beep(1661, 1400);
	return 0;
}
