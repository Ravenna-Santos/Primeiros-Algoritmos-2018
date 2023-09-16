float calcularNovoValor( float v, float p){
	float n=v*(1+p/100);
	return n;
}
void main(){
	float valor, percentual, novovalor;
	printf("Digite o valor inicial: ");
	scanf("%f", &valor);
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &percentual);
	novovalor=calcularNovoValor(valor, percentual);
	printf("Valor reajustado R$: %.2f", novovalor);
}
