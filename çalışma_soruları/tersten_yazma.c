#include <stdio.h>
#include <string.h>

int main(){
    char ifade[100];
    int k,uzunluk;
    puts("Ýfadenizi Giriniz\n");
    gets(ifade);

    uzunluk=strlen(ifade);
    for(k=uzunluk-1;k>=0;k--){
          putchar(ifade[k]);
          putchar('\n');
    }
    getchar();
    return 0;
}
