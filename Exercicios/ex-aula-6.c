// 1) Faça um programa no qual o usuário cadastre 5 números de RA em um vetor e depois permita realizar uma busca e informar se existe ou não.
/*
Exemplo:
RAs cadastrados:
904865
364858
173839
440560
626745

Consultar:  904865

RA encontrado!!!
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	double ra[10];	
	double numero;
	
	for (int i = 0; i <= 9; i++){
		printf("Enter the RA in the index %d: ", i);
		scanf("%lf", &ra[i]);
	}
	
	printf("\n\nEnter a number to consult: ");
	scanf("%lf", &numero);
	
	int achou = 0;
	for (int i = 0; i <= 9; i++){
		if (ra[i] == numero){
			printf("Found in the index %d!\n",i);
			achou = 1;
		}
	}

	if (achou == 0){
		printf("The number was not found %.0lf\n", numero);
	}

	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
}