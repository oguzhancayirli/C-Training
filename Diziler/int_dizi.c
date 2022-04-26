#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[] = {3,6,9,12,15}; //Deðskeni dizi seklinde tanýmlýyoruz.
                            //3 sayisi, 0. indise tekabul etmektedir.
                            //6 sayisi, 1. indise tekabul etmektedir.

    for(int i=1;i<5;i++){
        printf("%d\n",sayilar[i]);
    }
    /*  printf("%d",sayilar[0]);
        printf("%d",sayilar[1]);
        printf("%d",sayilar[2]);
        printf("%d",sayilar[3]);
        printf("%d",sayilar[4]);
        printf("%d",sayilar[5]);  */

    return 0;
}
