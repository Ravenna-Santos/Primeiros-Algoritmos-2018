//principal
#include <stdio.h>
#include <locale.h>
int somar(int e, int d){
	int soma = e + d;
	return soma;
}

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
