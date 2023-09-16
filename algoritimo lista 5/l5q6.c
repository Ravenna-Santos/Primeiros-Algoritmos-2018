void main(){
	int x=13, soma=0, cont=0, media;
	while(x<=73){
		if(x%2==0){
			soma=soma+x;
			cont=cont+1;
		}
		x=x+1;
	}
	media=soma/cont;
	printf("media: %d", media);
	printf("\n");
	system("PAUSE");
}
