#include <windows.h>
int main(int argc, char *argv[]) {
  int i = 0;
  for (i = 0; i < 1; i++) {
    /* code
    Beep(440,500); //A4
    //Delay(100);
    Sleep(100);
    Beep(261.626,500);//C4
    Sleep(100);
    */
    Beep(261.626,500);Sleep(100);
    Beep(277.183,500);Sleep(100);
    Beep(293.665,500);Sleep(100);
    Beep(311.127,500);Sleep(100);
    Beep(329.628,500);Sleep(100);
    Beep(349.228,500);Sleep(100);
    Beep(369.994,500);Sleep(100);
    Beep(391.995,500);Sleep(100);
    Beep(415.305,500);Sleep(100);
    Beep(440.000,500);Sleep(100);
    Beep(466.164,500);Sleep(100);
    Beep(493.883,500);Sleep(100);
  }
	return 0;
}
