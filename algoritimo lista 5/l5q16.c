void main(){
	int n, num=1, h=0;
	printf("Digite um numero:");
	scanf("%d", &n);
	while(num<=n){
		h=h+(1/num);
		num=num+1;
	}
	printf("H:%d\n", h);
	system("PAUSE");
}
