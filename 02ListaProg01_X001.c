#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char gab1[8], gab2[12][8];
	int mat[12],i,j=0;
	
	printf("Informe o gabarito correto(a,b,c,d,e): ");
	for(i=0;i<8;i++){
		fflush(stdin);
		scanf("%c",&gab1[i]);
	}
	
	for(i=0;i<12;i++){
		printf("Informe a matricula: ");
		fflush(stdin);
		scanf("%d",&mat[i]);
		printf("Informe o gabarito desse aluno(a,b,c,d,e): ");
		for(j=0;j<8;j++){
		fflush(stdin);
		scanf("%c",&gab2[i][j]);
		}
	}
	printf("\n----------------------------------------\n");
	for(i=0;i<12;i++){
		printf("\nMatricula: %d\n",mat[i]);
		printf("Gabarito: ");
		for(j=0;j<8;j++){
			printf(" %c", gab2[i][j]);	
		}
	}
	
	int ap=0, nota=0;
	
		for(i=0;i<12;i++){
			nota=0;
		for(j=0;j<8;j++){
			if(gab2[i][j]==gab1[j]){
				nota++;
			}
		}
		if(nota>=5){
			ap++;
		}
	}
	printf("\nAprovados: %d\n", ap);
	float p = (float)(ap*100)/12;
	printf("Porcentagem: %f ", p);
	return 0;
}
