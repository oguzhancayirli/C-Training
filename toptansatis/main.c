#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Turkish");

    int satis;
    float fiyati;

    printf("Alaca��n�z �r�n Adetini Yaz�n�z: ");
    scanf("%d",&satis);

    if(satis>=400){
         fiyati=0.75;
    }
    else if(satis>=300 && satis<400){
        fiyati=1.25;
    }
    else if(satis>=200 && satis<300){
        fiyati=2;
    }
    else if(satis>=100 && satis<200){
         fiyati=2.5;
    }
    else if(satis>0 && satis<100){
         fiyati=3;
    }
    else{
        printf("Lutfen Ge�erli Bir Adet Say�s� Giriniz: ");
    }

     printf("�demeniz Gereken Toplam Fiyat: %.0f TL",fiyati * satis);

    return 0;
}
