#include <stdio.h>
#include <locale.h>
#include "bibli.h"
void main(){
	setlocale (LC_ALL, "portuguese");
	int a, b, c;
	printf("Digite um n�mero: ");
	scanf("%d", &a);
	printf("Digite outro n�mero: ");
	scanf("%d", &b);
	c = somar(a,b);
	printf("%d + %d = %d", a, b, c);
	
}
