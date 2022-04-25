#include <stdio.h> //Standart Input-Output Kütüphanesi
#include <stdlib.h>
#include <locale.h>



int main(){
    int tamsayi = 6;
    double buyukYerKaplayacaKesirliSayi = 7.2;

    char karakter = 'K';
    char karakterDizisi[7] = "Ankara";
    float kesirliSayi = 9.2;

    printf("%d RAM'da %d byte yer kaplar \n",tamsayi,sizeof(int));
    printf("%.1f Ram da %d byte yer kaplar\n", buyukYerKaplayacaKesirliSayi,sizeof(double));

return 0;



}
