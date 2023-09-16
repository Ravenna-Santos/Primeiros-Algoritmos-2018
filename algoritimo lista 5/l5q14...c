void main(){
	int soma=0, x=1, n;
	printf("Digite um numero:");
	scanf("%d", &n);
	while(x<=n){
		soma=soma+x;
		x=x+1;
	}
	printf("soma: %d\n", soma);
	system("PAUSE");
}
