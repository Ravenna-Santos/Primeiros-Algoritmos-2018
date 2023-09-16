#include <stdio.h>
#include <locale.h>
#include <limits.h>
void main(){
	setlocale (LC_ALL, "portuguese");
	int x, soma=0, cont=0, maior, menor, num1, num2, i, num;
	char opcao;
	do{
		system("cls");
		printf("\tescolha uma das opções abaixo: \n");
	    printf("\tA- soma dos números digitados, o maior e o menor número, média dos números\n");
	    printf("\tB- ler dois números  e os números divisiveis por 3, soma dos números digitados\n");
	    printf("\tC- soma de 0 até o número lido\n");
	    printf("\tD- imprimir número de 1 até 12 e colocar o mês correspondente\n");
	    printf("\tE- SAIR DO PROGRAMA!!\n");
	    printf("digite a opção desejada: \n");
	    scanf("%c", &opcao);
	    if( opcao=='A' || opcao== 'a'){
	    	soma=0;
	    	cont=0;
	    	maior=0;
	    	menor=INT_MAX;
	    	for(;;) {
	    		printf("digite um número: ");
	    		scanf("%d", &x);
	    		if(x==0){
	    			break;
				}
				soma= soma+ x;
				cont++;
				if(x>maior){
					maior=x;
				}
				if(x< menor){
					menor=x;
				}
			}
			printf("soma dos números: %d\n", soma);
			printf("media dos numeros e: %d\n", soma/cont);
			printf("maior e igual a: %d\n", maior);
			printf("menor e igual a: %d\n", menor);
			system("pause");
		}
		 if( opcao=='B' || opcao== 'b'){
		 	soma=0;
		 	printf("\nInforme o primeiro número:");
		 	scanf("%d", &num1);
		 	printf("\nInforme o segundo número:");
		 	scanf("%d", &num2);
		 	for(i=num1; i<=num2 ;i++){
		 		if(i%3 == 0){
		 			printf("\nNúmero %d é divisível por 3", i);
		 			soma=soma+i;
				 }
			 }
			 printf("\nSoma dos números divisíveis por 3: %d", soma);
			 printf("\n");
			 system("PAUSE");	 	   
  }
   if( opcao=='C' || opcao== 'c'){
		 	soma=0;
		 	printf("\nInforme um número positivo:");
		 	scanf("%d", &x);
		 	if(x>0){
		 		for(i=0; i<=x; i++){
		 			soma=soma+i;
				 }
				printf("\nsoma dos numeros de 0 a %d é: %d", x, soma);
				printf("\n");
				system("PAUSE");
			}
		}
	if( opcao=='D' || opcao== 'd'){
		printf("\nInforme um número de 1 a 12");
		scanf("%d", &num);
		switch(num){
			case 1 :
				printf("Para o valor %d o Mês é Janeiro", num);
			break;
				case 2 :
				printf("Para o valor %d o Mês é Fevereiro", num);
			break;
				case 3 :
				printf("Para o valor %d o Mês é Março", num);
			break;
				case 4 :
				printf("Para o valor %d o Mês é Abril", num);
			break;
				case 5 :
				printf("Para o valor %d o Mês é Maio", num);
			break;
				case 6 :
				printf("Para o valor %d o Mês é Junho", num);
			break;
				case 7 :
				printf("Para o valor %d o Mês é Julho", num);
			break;
				case 8 :
				printf("Para o valor %d o Mês é Agosto", num);
			break;
				case 9 :
				printf("Para o valor %d o Mês é Setembro", num);
			break;
				case 10 :
				printf("Para o valor %d o Mês é Outubro", num);
			break;
				case 11 :
				printf("Para o valor %d o Mês é Novembro", num);
			break;
				case 12 :
				printf("Para o valor %d o Mês é Desembro", num);
			break;
			default :
				printf("O número %d não corresponde a um mês", num);
			break;
		}
		printf("\n");
		system("PAUSE");
	}
 }while(opcao!='E' && opcao!='e');
}
