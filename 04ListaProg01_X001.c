#include<stdio.h>
#include<string.h>

int main(){
	int o[48],i,op;
	int p, cont;
	char s[7];
	
	for(i=0;i<48;i++){
		o[i]=0;
	}
	
	do{
		printf("\n1 - Vender passagem\n");
		printf("2 - Mostrar quantidade de lugares livres\n");
		printf("3 - Mostrar mapa de ocupacao do onibus\n");
		printf("0 - Encerrar\n");
		printf("Informe a opcao: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				
				cont=0;
				for(i=0;i<48;i++){
					if(o[i]==1){
						cont++;
					}
				}
				if(cont==48){
					printf("\nOnibus lotado!\n");
				}else{
				printf("\nInforme o numero da poltrona desejada: ");
				scanf("%d",&p);
				if(o[p-1]==0){
					o[p-1]=1;
					printf("Venda efetivada!\n");
				}else{
					printf("Poltrona ocupada!\n");
				}
			}
			break;
			case 2:
				cont=0;
				for(i=0;i<48;i++){
					if(o[i]==0){
						cont++;
					}
				}
				printf("\nQuantidade de lugares livres: %d\n", cont);
					break;
			case 3:
				printf("\nLADO ESQUERDO\t\t\tLADO DIREITO\n");
				printf("------------------------------------------------------------------------\n");
				printf("JANELA\t\tCORREDOR\tCORREDOR\tJANELA\n");
				printf("------------------------------------------------------------------------\n");
				int j=0;
				for(i=0;i<48;i++){
					if(o[i]==0){
						strcpy(s, "livre");
					}else{
						strcpy(s, "ocupado");
					}
					if(i<9)
						printf("0%d-%s\t",i+1,s);
					else
						printf("%d-%s\t",i+1,s);
					if((i+1)%4==0){
						printf("\n");
					}
					
			}
		}
	}while(op!=0);
	return 0;
}
