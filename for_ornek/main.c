#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Turkish");
    /*
    int sayi;

    printf("5e b�l�nebilen say�lar� bas�ral�m...\n");
    printf("L�tfen bir say� giriniz:");
    scanf("%d",&sayi);

    if(sayi>=0){
        for(int i=0;i<sayi;i+=5){
        printf("%d\n",i);
        }
    }
    else{
        for(int i=sayi;i<0;i+=5){
            printf("%d\n",i);
        }
    }*/
    //--------------------------------------------------------
    /*
    int sayi,toplam=0;

    printf("L�tfen say� giriniz:");
    scanf("%d",&sayi);

    for(int i=0;i<=sayi;i++){
        toplam+=i;
    }
    printf("0'dan %d olan say�lar�n toplam�:%d",sayi,toplam);
    */
    //-------------------------------------------------------------
    int biletsayisi=100;
    char biletal;

    for(;biletsayisi>0;){
        printf("Bilet almak ister misiniz?[E / e]");
        scanf(" %c",&biletal);

        if(biletal=='E' || biletal=='e'){
            int alinanbiletsayisi;
            printf("Ka� tane bilet istiyorsunuz?");
            scanf("%d",&alinanbiletsayisi);
           // biletsayisi--;
           biletsayisi= biletsayisi-alinanbiletsayisi;

        }

        else{
            break;
        }
        printf("Al�nan bilet say�s�:%d \n Kalan bilet say�s�:%d\n",100-biletsayisi,biletsayisi);
    }
    return 0;
}
