#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL,"Turkish");

    int sayi;
    int basamakSayisi=0;
    int sayidegerleritoplami=0;
    printf("Lütfen Sayý deðerlerinin toplamýný öðrenmek istediðiniz: ");
    scanf("%d",&sayi);
    int orijinal = sayi;
    do{
        sayidegerleritoplami+= sayi%10;
        basamakSayisi++;
        sayi = sayi/10;

    }while(sayi>0);
    printf("%d %d basamaklıdır ve sayi değerleri toplamı:%d'di",orijinal,basamakSayisi,sayidegerleritoplami);
    return 0;


}
