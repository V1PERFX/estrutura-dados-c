// 1) (Repetição com FOR) Faça um programa no qual o usuário informe um nome e o número de vezes que este nome deve ser escrito. Após isso o programa deve exibir o nome informado de acordo com a quantidade desejada.
/*
Exemplo:
Nome: Artenildo
Vezes: 3
Artenildo Artenildo Artenildo
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[50];
	int times;
	
	printf("Enter the name...........: ");
	scanf(" %[^\n]", &name);
	
	printf("Enter the number of times: ");
	scanf("%d", &times);
  printf("\n");

	for (int i = 1; i <= times; i++){			
		printf("%d - %s\n", i, name);
	}

	/*
	Repetição FOR semelhante ao laço WHILE
	i = 1;             
	for (; i <= times;){			
		printf("%d - %s\n", i, name);
		i++;
	}
	*/
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
}

// 2) (Repetição com WHILE) Faça um programa no qual o usuário digite um número e o sistema apresente a tabuada do número de 0 a 10.
/*
Exemplo:
Digite um número: 6
6 X 0 = 0
6 X 1 = 6
6 X 2 = 12
6 X 3 = 18
6 X 4 = 24
6 X 5 = 30
6 X 6 = 36
6 X 7 = 42
6 X 8 = 48
6 X 9 = 54
6 X 10 = 60
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
  int number;
	
	printf("Enter the number to see the multiplication table: ");
	scanf("%d", &number);
  printf("\n");

	int i = 0;
	while(i <= 10){
		printf("%d X %d = %d\n", number, i, number * i);
		i++;
	}
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
}

// 3) (Repetição com DO/WHILE) Faça um programa no qual o usuário tenha que digitar a palavra "sair" para que consiga sair. Enquanto a palavra sair não for digitada ele ficará exibindo a mensagem "Digite SAIR para encerrar o programa: ".
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char word[20];

  do{	
		printf("Type 'exit' to terminate the program: ");
		scanf(" %[^\n]", &word);
	}while(strcmp(word, "exit") != 0);
	
	printf("\nCongratulations! you left!!!");
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
}