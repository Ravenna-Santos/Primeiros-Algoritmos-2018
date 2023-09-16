void main(){
	int x,y,aux;
	printf("digite um numero x:");
	scanf("%d",&x);
	printf("digite um numero y:");
	scanf("%d",&y);
	aux=x;
	x=y;
	y=aux;
	printf("'x:'%d",x);
	printf("\n");
	printf("'y:'%d",y);
	printf("\n");
	system("PAUSE");
}
