#include <stdio.h>
#include <stdlib.h>

int main()
{   //Degiskenlerin Kullanici Tarafinden girilmesi Ornegi

    int n;
    float dizi[5]={}; //Dizi deðiskeninin 5 adet degeri oldugunu belirtiyoruz

    for(n=0;n<5;n++){
        printf("%d. Tanimlanacak degeri giriniz: ",n+1);    //Degiskenleri giririyoruz
        scanf("%f",&dizi[n]);
    }
    for (n=0;n<5;n++){
        printf("%f \n",dizi[n]);                //girilen degiskenleri yazdiriyoruz

    }

    return 0;
}
