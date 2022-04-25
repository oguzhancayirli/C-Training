#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sipariskodu;
    float toplam, porsiyon;

    printf("MENU\t\tSIPARIS KODU\tFIYATI\n");
    printf("Baslangiclar\t\t1\t5.5TL\n");
    printf("Ara Sicakalr\t\t2\t7.5TL\n");
    printf("Salatalar\t\t3\t12TL\n");
    printf("Ana Yemekler\t\t4\t17.75TL\n");
    printf("Tatlilar\t\t5\t11.25TL\n");
    printf("Icecekler\t\t6\t2.25TL\n");
    printf("\tCIKIS ICIN 8'E BASINIZ...\n");

    menu:
    printf("Lutfen Yemek Istediginiz Urunun Kodu:");
    scanf("%d",&sipariskodu);

    if(sipariskodu == 8){
        goto cikis;
    }

    if (sipariskodu>0 && sipariskodu<=7){
        printf("Lutfen Porsiyon Belirtiniz:");
        scanf("%f",&porsiyon);
    }

    switch(sipariskodu){
        case 1 : if(porsiyon>0){ toplam += porsiyon*5.5; printf("Toplam Tutar:%fTL\n",toplam);}else{printf("Lutfen 0'dan Buyuk Deger Giriniz.\n");} break;
        case 2 : if(porsiyon>0){ toplam += porsiyon*7.5; printf("Toplam Tutar:%fTL\n",toplam);}else{printf("Lutfen 0'dan Buyuk Deger Giriniz.\n");} break;
        case 3 : if(porsiyon>0){ toplam += porsiyon*12;  printf("Toplam Tutar:%fTL\n",toplam);}else{printf("Lutfen 0'dan Buyuk Deger Giriniz.\n");}break;
        case 4 : if(porsiyon>0){ toplam += porsiyon*7.75; printf("Toplam Tutar:%fTL\n",toplam);}else{printf("Lutfen 0'dan Buyuk Deger Giriniz.\n");} break;
        case 5 : if(porsiyon>0){ toplam += porsiyon*11.25; printf("Toplam Tutar:%fTL\n",toplam);}else{printf("Lutfen 0'dan Buyuk Deger Giriniz.\n");} break;
        case 6 : if(porsiyon>0){ toplam += porsiyon*2.25; printf("Toplam Tutar:%fTL\n",toplam);}else{printf("Lutfen 0'dan Buyuk Deger Giriniz.\n");} break;
        default : printf("Lutfen 1-6 Arasinda Secim Yapiniz\n"); break;

    }

        goto menu;
        cikis: printf("Siparisiniz Tamamlandi\n");
        printf("Toplam Tutar:%f",toplam);
    return 0;
}
