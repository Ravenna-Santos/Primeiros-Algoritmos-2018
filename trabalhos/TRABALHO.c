#include <stdio.h>
#include <locale.h>
#include <limits.h>
void main(){
	setlocale (LC_ALL, "portuguese");
	int x, soma=0, cont=0, maior, menor, num1, num2, i, num;
	char opcao;
	do{
		system("cls");
		printf("\tescolha uma das op��es abaixo: \n");
	    printf("\tA- soma dos n�meros digitados, o maior e o menor n�mero, m�dia dos n�meros\n");
	    printf("\tB- ler dois n�meros  e os n�meros divisiveis por 3, soma dos n�meros digitados\n");
	    printf("\tC- soma de 0 at� o n�mero lido\n");
	    printf("\tD- imprimir n�mero de 1 at� 12 e colocar o m�s correspondente\n");
	    printf("\tE- SAIR DO PROGRAMA!!\n");
	    printf("digite a op��o desejada: \n");
	    scanf("%c", &opcao);
	    if( opcao=='A' || opcao== 'a'){
	    	soma=0;
	    	cont=0;
	    	maior=0;
	    	menor=INT_MAX;
	    	for(;;) {
	    		printf("digite um n�mero: ");
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
			printf("soma dos n�meros: %d\n", soma);
			printf("media dos numeros e: %d\n", soma/cont);
			printf("maior e igual a: %d\n", maior);
			printf("menor e igual a: %d\n", menor);
			system("pause");
		}
		 if( opcao=='B' || opcao== 'b'){
		 	soma=0;
		 	printf("\nInforme o primeiro n�mero:");
		 	scanf("%d", &num1);
		 	printf("\nInforme o segundo n�mero:");
		 	scanf("%d", &num2);
		 	for(i=num1; i<=num2 ;i++){
		 		if(i%3 == 0){
		 			printf("\nN�mero %d � divis�vel por 3", i);
		 			soma=soma+i;
				 }
			 }
			 printf("\nSoma dos n�meros divis�veis por 3: %d", soma);
			 printf("\n");
			 system("PAUSE");	 	   
  }
   if( opcao=='C' || opcao== 'c'){
		 	soma=0;
		 	printf("\nInforme um n�mero positivo:");
		 	scanf("%d", &x);
		 	if(x>0){
		 		for(i=0; i<=x; i++){
		 			soma=soma+i;
				 }
				printf("\nsoma dos numeros de 0 a %d �: %d", x, soma);
				printf("\n");
				system("PAUSE");
			}
		}
	if( opcao=='D' || opcao== 'd'){
		printf("\nInforme um n�mero de 1 a 12");
		scanf("%d", &num);
		switch(num){
			case 1 :
				printf("Para o valor %d o M�s � Janeiro", num);
			break;
				case 2 :
				printf("Para o valor %d o M�s � Fevereiro", num);
			break;
				case 3 :
				printf("Para o valor %d o M�s � Mar�o", num);
			break;
				case 4 :
				printf("Para o valor %d o M�s � Abril", num);
			break;
				case 5 :
				printf("Para o valor %d o M�s � Maio", num);
			break;
				case 6 :
				printf("Para o valor %d o M�s � Junho", num);
			break;
				case 7 :
				printf("Para o valor %d o M�s � Julho", num);
			break;
				case 8 :
				printf("Para o valor %d o M�s � Agosto", num);
			break;
				case 9 :
				printf("Para o valor %d o M�s � Setembro", num);
			break;
				case 10 :
				printf("Para o valor %d o M�s � Outubro", num);
			break;
				case 11 :
				printf("Para o valor %d o M�s � Novembro", num);
			break;
				case 12 :
				printf("Para o valor %d o M�s � Desembro", num);
			break;
			default :
				printf("O n�mero %d n�o corresponde a um m�s", num);
			break;
		}
		printf("\n");
		system("PAUSE");
	}
 }while(opcao!='E' && opcao!='e');
}
