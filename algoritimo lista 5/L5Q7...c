void main(){
	int a, b, aux;
	printf("Digite um numero:");
	scanf("%d", &a);
	printf("Digite um numero:");
	scanf("%d", &b);
	if(b<a){
		aux=b;
		b=a;
		a=aux;
	}
	while(a<=b){
		if(a%2==1){
			printf("%d\n", a);
		}
		a=a+1;
	}
	system("PAUSE");
}
