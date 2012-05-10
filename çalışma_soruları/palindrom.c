#include<stdio.h>
#include<string.h>

int palindrom(char  *dizi) {
	char *bas = dizi;			      
	char *son = dizi + strlen(dizi) - 1;    
	int i = 0;

	while ((bas + i) <= son) {               
		if (*(bas + i) != *(son - i))
			return 0;
		i++;
	}
	return 1;
}

int main(void) {
	char dizi[100];

	printf("cumle giriniz: ");
	gets(dizi);

	if (palindrom(dizi))
		printf("True");
	else
		printf("False");

	printf("\n");
	getch();
	return 0;
}
