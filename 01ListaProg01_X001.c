#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nome[8][100];
	int dvd[8], i;
	
	for(i=0;i<8;i++){
		printf("Informe o nome: ");
		fflush(stdin);
		fgets(nome[i], 100, stdin);
		printf("Informe a quantidade de DVDs locados em 2010: ");
		scanf("%d",&dvd[i]);
	}
	
	printf("\n------------------------------------------\n");
	printf("Locacoes gratis\n");
	
	for(i=0;i<8;i++){
		printf("%s", nome[i]);
		int q = dvd[i]/10;
		printf("%d\n\n",q);
	}
	
	return 0;
}
