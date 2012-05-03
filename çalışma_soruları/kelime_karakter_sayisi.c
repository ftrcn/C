#include<stdio.h>
#include<conio.h>


int main(){

    char dizi[100];
    int a=0;
    int i=0;
    
    puts("karakter dizisi giriniz:");
    gets(dizi);
    while(dizi[i]!='\0'){
        if(dizi[i]==' ' && dizi[i+1]!=' ')
           a++;
           i++;
           
    }
    printf("kelime sayisi:%d  \nkarakter sayisi:%d ",a+1,i);
    getch();
    return 0;
}
             
             
