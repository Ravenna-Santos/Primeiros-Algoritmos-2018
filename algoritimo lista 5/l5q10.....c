void main(){
	int a, cont=1, soma=0, media;
	while(cont<=5){
		printf("digite um numero:");
		scanf("%d", &a);
		soma=soma+a;
		media=(soma/cont);
		cont=cont+1;
	}
	printf("soma: %d\n", soma);
	printf("media: %d\n", media);
	system("PAUSE");
}
