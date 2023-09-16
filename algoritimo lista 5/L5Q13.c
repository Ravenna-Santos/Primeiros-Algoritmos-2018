void main(){
	int cont=1, num, maior=0, n;
	printf("Digite N");
	scanf("%d", &n);
	while(cont<=n){
		printf("digite um numero:");
		scanf("%d", &num);
	if(num>maior){
		maior=num;
	}
	cont=cont+1;
	}
	printf("maior: %d\n", maior);
	system("PAUSE");
}
