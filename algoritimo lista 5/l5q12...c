void main(){
	int numero, contador=0;
	printf("digite um numero:");
	scanf("%d", &numero);
	for(contador=0; contador<=10; contador++){
		printf("%d X %d = %d\n", contador, numero, contador*numero);
	}
	system("PAUSE");
}
