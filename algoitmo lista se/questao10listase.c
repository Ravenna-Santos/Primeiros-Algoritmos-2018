void main(){
	int x;
	printf("digite um numero");
	scanf("%d",&x);
	if(x%3==0 && x%5==0){
		printf("numero divisivel por 3 e por 5");
	}
	else{
		printf("numero nao divisivel por 3 e por 5");
	}
	system("PAUSE");
}
