#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Turkish");
    float sayi;
    char devam;
    float buyuk=0;
    do{
        printf("Lütfen Bir Sayý Giriniz:");
        scanf("%f",&sayi);

        if(sayi>buyuk){
            buyuk=sayi;
            printf("Yeni büyük sayýmýz:%f\n",buyuk);
        }
        else{
            printf("Büyük sayýmýz deðiþmemiþtir:%f",buyuk );
        }


        printf("Büyük Sayýyý Hesaplamaya Devam Etmek Ýstiyor Musunuz?(E,H)\n");
        scanf("%c",&devam);
    } while(devam=='E' || devam=='e');

    printf("Program baþarýlý bir þekilde çalýþýyor\n");
    return 0;
}
