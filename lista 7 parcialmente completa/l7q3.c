int potenc (int b, int e){
	if(e==0){
		return 1;
	}
	else{
		return b*potenc(b, e-1);
	}
}
void main(){
	int expoente, base, resultado;
	printf("Digite a base da potencia: ");
	scanf("%d", &base);
	printf("Digite o expoente da potencia: ");
	scanf("%d", &expoente);
	resultado=potenc(base, expoente);
	printf("O resultado da potencia e: %d \n", resultado);
}
