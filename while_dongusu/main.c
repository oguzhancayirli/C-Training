#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Turkish");
    float sayi;
    char devam;
    float buyuk=0;
    do{
        printf("L�tfen Bir Say� Giriniz:");
        scanf("%f",&sayi);

        if(sayi>buyuk){
            buyuk=sayi;
            printf("Yeni b�y�k say�m�z:%f\n",buyuk);
        }
        else{
            printf("B�y�k say�m�z de�i�memi�tir:%f",buyuk );
        }


        printf("B�y�k Say�y� Hesaplamaya Devam Etmek �stiyor Musunuz?(E,H)\n");
        scanf("%c",&devam);
    } while(devam=='E' || devam=='e');

    printf("Program ba�ar�l� bir �ekilde �al���yor\n");
    return 0;
}
