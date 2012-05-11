#include<stdio.h>
#include<string.h>
int main(void)
{
    char cumle[100];
    int i=0;
    printf("cumle giriniz:");
    gets(cumle);
    cumle[0]=toupper(cumle[0]);
    for(i=0;i<strlen(cumle);i++){
        if(cumle[i+1]==' '){
            putchar(toupper(cumle[i]));     
        }
        else if(cumle[i-1]==' '){   
            putchar(toupper(cumle[i]));
        }       
        else if(cumle[i+1]=='\0'){
            putchar(toupper(cumle[i]));
        }
        else putchar(cumle[i]);      
    }
    getch();
    return 0;
}     
