#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Turkish");

    int secim;
    float sayi1,sayi2;

   baslangic :
       printf("1-Toplama\n2-Cikarma\n3-Bolme\n4-Carpma\n5-Ortalama\n6-Karakok Alma\n7-Ustunu almak\n8-Cikis\n");

       scanf("%d",&secim);



    switch(secim){

        case 1 :  printf("Toplamak Istediginiz 2 adet sayi giriniz:\n");
                  scanf("%f%f",&sayi1,&sayi2);
                  printf("%f ve %f Sayilarinin Tolami:%f'dir",sayi1,sayi2,sayi1+sayi2);

        break;

         case 2 :  printf("Cikarmak Istediginiz 2 adet sayi giriniz:\n");
                  scanf("%f%f",&sayi1,&sayi2);
                  printf("%f ve %f Sayilarinin Farki:%f'dir",sayi1,sayi2,sayi1-sayi2);

        break;

         case 3 :  printf("Bolmek Istediginiz 2 adet sayi giriniz:\n");
                  scanf("%f%f",&sayi1,&sayi2);
                  printf("%f ve %f Sayilarinin Bolumu:%f'dir",sayi1,sayi2,sayi1/sayi2);

        break;

         case 4 :  printf("Carpmak Istediginiz 2 adet sayi giriniz:\n");
                  scanf("%f%f",&sayi1,&sayi2);
                  printf("%f ve %f Sayilarinin Carpimi:%f'dir",sayi1,sayi2,sayi1*sayi2);

        break;

         case 5 :  printf("Ortalamasını Almak Istediginiz 2 adet sayi giriniz:\n");
                  scanf("%f%f",&sayi1,&sayi2);
                  printf("%f ve %f Sayilarinin Ortalamasi:%f'dir",sayi1,sayi2,(sayi1+sayi2)/2);

        break;

         case 6 :  printf("Karakok Almak Istediginiz 2 adet sayi giriniz:\n");
                  scanf("%f%f",&sayi1,&sayi2);
                  printf("%f ve %f Sayilarinin Karakoku:%f ve %f'dir",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));
                    break;

         case 7 :  printf("Ust Almak Istediginiz 2 adet sayi giriniz:\n");
                 scanf("%f%f",&sayi1,&sayi2);
                  printf("%f = %f ve %f = %fSayilarinin Ustu:%f'dir",sayi1,sayi2,pow(sayi1,sayi2));
                  break;

        case 8 :
                printf("Hesaplama Islemleri Sona Erdi");
                goto cikis;


        break;

        default : printf("Lutfen 1-8 arasinda bir sayi giriniz");

        break;
    }
 goto baslangic;
 cikis : return 0;
}
