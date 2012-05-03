#include<stdio.h>
#include<ctype.h>

int main(){

    char dizi[100];
    int i=0;
    
    puts("cumle giriniz:");
    gets(dizi);
    while(dizi[i]!='\0'){
        if(isalnum(dizi[i])) 
            putchar(dizi[i]);                
        if(dizi[i]==' ' && dizi[i+1]!=' ')
           putchar(dizi[i]);
    i++;
    } 
    getch();
    return 0;
}
