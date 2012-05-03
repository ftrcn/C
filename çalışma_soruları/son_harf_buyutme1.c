#include<stdio.h>
#include<ctype.h>

int main(){
    char cumle[100];
    int i=0;
    
    puts("bir cumle giriniz:");
    gets(cumle);
    
    while (cumle[i]!='\0'){
          if (isalnum(cumle[i]) && cumle[i+1]!=' ')
               putchar(cumle[i]);
          if (cumle[i]==' ' && cumle[i-1]!=' ')
                putchar(toupper(cumle[i-1]));
                i++;
    }
    getch();
    return 0;
}
    
    
    
