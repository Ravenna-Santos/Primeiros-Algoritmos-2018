float media( float nota1, float nota2, float nota3, char letra){
	float resultado;
	if(letra == 'a' || letra == 'A'){
		resultado=(nota1 + nota2 + nota3)/3;
	}
	else if(letra == 'p' || letra == 'P'){
		resultado=(nota1 * 5 + nota2 * 3 + nota3 *2)/(5+3+2);
	}
	return resultado;
}
void main(){
	float NOTA1, NOTA2, NOTA3, mediaa;
	char LETRA;
	printf("para media aritmetica digite a, para ponderada p: ");
	scanf("%c", &LETRA);
	printf("Digite a primeira nota: ");
	scanf("%f", &NOTA1);
	printf("Digite a segunda nota: ");
	scanf("%f", &NOTA2);
	printf("Digite a terceira nota: ");
	scanf("%f", &NOTA3);
	mediaa=media(NOTA1, NOTA2, NOTA3, LETRA);
	printf("A media e: %.2f ", mediaa);
}
