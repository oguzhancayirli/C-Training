#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL,"Turkish");
    int sayi1,sayi2,buyuksayi,kucuksayi,kalan;
    do{
        printf("EBOB'unu bulmak istediðiniz iki adet sayýyý giriniz: \n");
        scanf("%d%d",&sayi1,&sayi2);

    }while (sayi1<=0 || sayi2<=0);

    if(sayi1>sayi2){
        buyuksayi=sayi1;
        kucuksayi=sayi2;
    }
    else{
        buyuksayi=sayi2;
        kucuksayi=sayi1;
    }

    kalan = buyuksayi%kucuksayi;

    while(kalan!=0){
        if(kalan>= kucuksayi){
            buyuksayi = kalan;
        }
        else{
            buyuksayi=kucuksayi;
            kucuksayi=kalan;
        }
        kalan = buyuksayi%kucuksayi;
}

    printf("EBOB(%d,%d)=%d",kucuksayi,buyuksayi,kucuksayi);
    return 0;
}
