#include<stdio.h>
#include<ctype.h>

int main(){
    
    char cumle[100];
    int i=0;
    
    puts("Bir cumle giriniz:");
    gets(cumle);
    
    for (i=0;i<strlen(cumle);i++){
        if (i==0)
           putchar(toupper(cumle[i]));
        else
           putchar(cumle[i]);
    }
    
    getch();
    return 0;
}
