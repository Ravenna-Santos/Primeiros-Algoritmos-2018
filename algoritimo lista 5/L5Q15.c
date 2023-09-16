void main(){
	int n, fatorial=1, cont;
	printf("Digite um numero:");
	scanf("%d", &n);
	cont=n;
	if(n==1||n==0){
		fatorial=1;
	}
	else{
		while(cont>1){
			fatorial=fatorial*cont;
			cont=cont-1;
		}
	}
	printf("Fatorial: %d\n", fatorial);
	system("PAUSE");
}
