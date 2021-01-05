#include<stdio.h>

int main(){
	int cod[10], op,i,c, sair=0,j;
	float saldo[10],soma;
	
	for(i=0;i<10;i++){
		printf("Informe o codigo da conta: ");
		do{
		sair=0;
		scanf("%d",&c);
		for(j=0;j<i;j++){
			if(cod[j]==c){
				printf("Ja existe esse codigo!\nInforme outro: ");
				sair=1;
				break;
			}
		}
		if(sair==0){
			cod[i]=c;
		}
		}while(sair==1);
		printf("Informe o saldo da conta: ");
		scanf("%f",&saldo[i]);
	}
	
	do{
		printf("\n1 - Consultar saldo de uma conta\n");
		printf("2 - Efetuar deposito em uma conta\n");
		printf("3 - Efetuar saque em uma conta\n");
		printf("4 - Consultar o ativo bancario\n");
		printf("0 - Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				printf("\nInforme o codigo que deseja consultar: ");
				scanf("%d",&c);
				int existe=0;
				for(i=0;i<10;i++){
					if(c==cod[i]){
						printf("Conta %d \n",cod[i]);
						printf("Saldo %f \n",saldo[i]);
						existe=1;
					}
				}
				if(existe==0){
					printf("Nao existe conta cadastrada com esse codigo!\n");
				}
				break;
			case 2:
				printf("\nInforme o codigo da conta: ");
				scanf("%d",&c);
				float f;
				printf("Informe o valor a ser depositado: ");
				scanf("%f",&f);
				existe=0;
				for(i=0;i<10;i++){
					if(c==cod[i]){
						saldo[i] = saldo[i]+f;
						printf("Saldo atualizado!\n\n");
						existe=1;
					}
				}
				if(existe==0){
					printf("Nao existe conta cadastrada com esse codigo!\n");
				}
			break;
			case 3:
				printf("\nInforme o codigo da conta: ");
				scanf("%d",&c);
				printf("Informe o valor a ser sacado: ");
				scanf("%f",&f);
								existe=0;
				for(i=0;i<10;i++){
					if(c==cod[i]){
						if(saldo[i]>=f){
						
						saldo[i] = saldo[i]-f;
						printf("Saldo atualizado!\n");
						}else{
							printf("Saldo insuficiente!\n");
						}
						existe=1;
					}
				}
				if(existe==0){
					printf("Nao existe conta cadastrada com esse codigo!\n");
				}
			break;
			case 4:
				soma=0;
				for(i=0;i<10;i++){
					soma=soma+saldo[i];
				}
				printf("\nAtivo bancario: %f\n",soma);
					break;
		}
	}while(op!=0);
	return 0;
}
