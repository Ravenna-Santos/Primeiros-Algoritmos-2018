void main(){
	int n=1, maior=0;
	while(n!=0){
		printf("Digite um numero:");
		scanf("%d", &n);
		if(n>maior){
			maior=n;
		}
	}
	printf("Maior:%d\n", maior);
	system("PAUSE");
}
