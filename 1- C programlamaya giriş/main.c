#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Dil k�t�phanesi tan�mland�.
int main()
{
    setlocale(LC_ALL,"Turkish"); //Dil ayarlar� yap�ld�.
    printf("Merhaba D�nya\n");
    return 0;
}
