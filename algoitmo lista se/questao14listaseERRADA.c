#include<stdio.h>
#include<conio.h>
void main(){
	char y[8];
  
  printf("Escreva o nome da capital do Brasil: ");
  scanf("%s", y);
  if(y != "Brasilia" || y != "BRASILIA"){
  	printf("ERROU\n");
  }
  else{
  	printf("Parabens\n");
  }
  getch();
  system("PAUSE");
}
