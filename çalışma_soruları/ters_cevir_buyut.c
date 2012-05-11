#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char kelime[10];
    int i=0;
    
    puts("kelime giriniz:");
    gets(kelime);
    
    
    for(i=0;i<=strlen(kelime);i++){
         
          if (kelime[strlen(kelime)-i-1] ) 
                putchar(toupper(kelime[strlen(kelime)-i-1])); 
    }   
    getch();
    return 0;
}
    
    
    
