void main(){
	int x;
	printf("digite um numero");
	scanf("%d",&x);
	if(x==5 || x==200 || x==400 || (x>=500 && x<=1000)){
		printf("numero igual a 5 ou 200 ou 400 ou no intervalo entre 500 e 1000");
	}
	else{
		printf("numero esta fora dos escorpos anteriores");
	}
	system("PAUSE");
}
