#include <stdio.h>
#include <locale.h>
#include "bibli.h"
void main(){
	setlocale (LC_ALL, "portuguese");
	int a, b, c;
	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite outro número: ");
	scanf("%d", &b);
	c = somar(a,b);
	printf("%d + %d = %d", a, b, c);
	
}
