#include <stdio.h>
#include <locale.h>
float aVista(float valor){
	    printf("Total: %.2f R$\n",valor);
	    printf("Total a pagar: %.2f R$.\n",valor * 0.8);
	    return(0);
	}

	float duasVezes(float valor){
	    printf("Total: %.2f R$\n",valor);
	    printf("2 parcelas de %.2f R$ cada\n", (valor * 0.9 )/ 2);
	    return(0);
	}
	
	float tresVezes(float valor){
	    printf("Total: %.2f R$\n",valor);
	    printf("3 parcelas de %.2f R$ cada\n", valor/3);
	    return(0);
	}
	
	float quatroVezes(float valor){
	    int parcelas;
	    printf("TOTAL : %.2f R$\n",valor);
	    printf("4 Parcelas de %.2f R$ cada\n", (valor * 1.03)/4);
	    return(0);
	}
	void main(){
		setlocale(LC_ALL, "Portuguese");
		 int opcao;
		 float valorCompra;
		for ( ; ; ){
			system("cls");
			printf("Entre com o TOTAL DA COMPRA: \n");
	    	scanf("%f",&valorCompra);
		
		    printf("Forma de pagamento:\n");
		
		    printf("1 - A vista\n");
		    printf("2 - 2 vezes\n");
		    printf("3 - 3 vezes\n");
		    printf("4 - 4 vezes\n");
		    printf("5 - Cancelar compra e fecha o programa\n");
		    
		    scanf("%d",&opcao);
            	
		    if (opcao == 5) {
	    	printf("FIM DO ALGORITMO");
	    	break;
		}
		switch(opcao){
	        case 1:
	            printf("PAGAMENGO A VISTA.\n");
	            aVista(valorCompra);
	            break;
	        case 2:
	            printf("PAGAMENTO EM 2X.\n");
	            duasVezes(valorCompra);
	            break;
	        case 3:
	            printf("PAGAMENTO EM 3X.\n");
	            tresVezes(valorCompra);
	            break;
	        case 4:
	            printf("PAGAMENTO EM 4X.\n");
	            quatroVezes(valorCompra);
	            break;
	        default:
            	printf("OPÇÃO INVÁLIDA\n");
	    }
	    system("PAUSE");
		}
	}
