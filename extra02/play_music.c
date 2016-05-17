#include <windows.h>
#include <stdio.h>

int main()
{
    PlaySound("./chinchin.wav", NULL, SND_ASYNC);
    system("pause");
    return 0;

}
