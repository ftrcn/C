#include<stdio.h>

int main(){
    
    char dizgi[100];
    int i=0;
    
    puts("dizgiyi giriniz:");
    gets(dizgi);
    
    while(dizgi[i]!='\0'){
         i++;
    }
    printf("Dizgi uzunlugu:%d",i);
    getch();
    return 0;
    
}
    
