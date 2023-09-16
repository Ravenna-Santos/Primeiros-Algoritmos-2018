void main(){
	int x;
	printf("digite um numero");
	scanf("%d",&x);
	if(x%10==0 || x%5==0 || x%2==0){
		printf("o numero e divisivel por 10 ou 5 ou 2");
	}
	else{
		printf("o numero nao e divisivel por 10 nem por 5 nem por 2");
	}
	system("PAUSE");
}
