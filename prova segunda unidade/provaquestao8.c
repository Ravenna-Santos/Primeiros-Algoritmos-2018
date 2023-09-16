void main(){
	int x;
	printf("digite um numero:");
	scanf("%d",&x);
	if(x==1){
		printf("domingo");
	}
	else{
		if(x==2){
			printf("segunda");
		}
		else{
			if(x==3){
				printf("terca");
			}
			else{
				if(x==4){
					printf("quarta");
				}
				else{
					if(x==5){
					printf("quinta");
					}
					else{
						if(x==6){
							printf("sexta");
						}
						else{
							if(x==7){
								printf("sabado");
							}
							else{
								printf("numero invalido");
							}
						}
					}
				}
			}
		}
	}
	printf("\n");
	system("PAUSE");
}
