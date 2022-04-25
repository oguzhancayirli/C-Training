#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Turkish");

    int sayi1,sayi2;
    printf("ilk sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);

    if(sayi1 % sayi2 == 0){
        printf("%d ve %d Sayilari birbirine bolunebilmektedir.",sayi1,sayi2);
    }

    else{
        printf("%d ve %d sayilari birbirine bolunememektedir",sayi1,sayi2);
    }



    return 0;
}
