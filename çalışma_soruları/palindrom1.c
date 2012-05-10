#include <stdio.h>
#include <string.h>

int main(){
    char dizi[100];
    int a=1,i,uzunluk;

    printf("dizgiyi giriniz:");
    gets(dizi);
    uzunluk=strlen(dizi);
    for(i=0; i<uzunluk/2 && a==1; ++i){
          if(dizi[i] != dizi[strlen(dizi) - i - 1])
             a=0;
          if(a==1)
               printf("%s bir palindrom",dizi);
          else
               printf("%s bir palindrom degil",dizi);
    }
    getch();
    return 0;
}
