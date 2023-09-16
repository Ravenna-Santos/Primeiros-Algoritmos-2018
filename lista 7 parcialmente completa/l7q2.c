int bissexto( int parametroAno){
	if(parametroAno % 400 == 0){
		return 1;
	}
	else if(parametroAno % 4 == 0 && parametroAno % 100 != 0){
		return 1;
	}
	else{
		return 0;
	}
}
void main(){
	int ano;
	printf("Digite o ano: ");
	scanf("%d", &ano);
	if (bissexto (ano)==1){
		printf("O ano %d e bissexto", ano);
	}
	else{
		printf("O ano %d nao e bissexto", ano);
	}
}
