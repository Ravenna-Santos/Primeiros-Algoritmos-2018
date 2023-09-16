float menornumero( float a, float b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
void main(){
	float n1, n2, menor;
	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	menor=menornumero(n1, n2);
	printf("%.2f e o menor numero digitado", menor);
}
