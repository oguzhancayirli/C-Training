#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    //char ad[6]= "Melda";

    char ad[6]= {'M','e','l','d','a','\0'};

        for(n=0;n<6;n++){
            printf("%c \n",ad[n]);
        if(ad[n]=='\0'){    //Her karakter yazdirilinca if kosulunun icine giriyor
            printf("isim yazdirma tamamalandi");
        }

        }




    return 0;
}
