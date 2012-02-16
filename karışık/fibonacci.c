#include<stdio.h>

int iso(int a)

{

if(a<=1) return 1;

return iso(a-1)+iso(a-2);

}

void main()

{

int i,b;

printf("Bir sayi giriniz:");

scanf("%d",&b);

for (i=1; i<=b; i++)

if (iso(i)<=b)

printf("%5d",iso(i));

else goto son;

son:

getch();

}
