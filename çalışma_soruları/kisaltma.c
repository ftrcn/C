#include<stdio.h>

int main(){
    char cumle[100];
    int i=0;
    
    puts("bir cumle giriniz:");
    gets(cumle);
    
    while (cumle[i]!='\0'){
          if (i==0)
                putchar(cumle[i]);
          if (cumle[i]==' ' && cumle[i+1]!=' ')
                putchar(cumle[i+1]);
          i++;
    }
    getch();
    return 0;
}
    
    
    
