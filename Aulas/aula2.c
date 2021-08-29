#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main()
{
  int idade;      // %d
  float peso;     // %f
  double ra;      // %lf
  char nome[20];  // %s
  char caractere; // %c

  printf("Digite a idade: "); // saida - exibe na tela
  scanf("%d", &idade);        // entrada - digitar o valor

  printf("Digite o peso: "); // saida - exibe na tela
  scanf("%f", &peso);        // entrada - digitar o valor

  printf("Digite o RA: "); // saida - exibe na tela
  scanf("%lf", &ra);       // entrada - digitar o valor

  printf("Digite o nome: "); // saida - exibe na tela
  fflush(stdin);             // limpa a bufer do teclado
  gets(nome);                // leitura/entrada de string
  

  printf("Digite o caractere: "); // saida - exibe na tela
  fflush(stdin);                  // limpa a bufer do teclado
  caractere = getchar();

  printf("Dados cadastrados:\n\n");

  printf("Idade = %d\n", idade);
  printf("Peso = %f\n", peso);
  printf("RA = %lf\n", ra);
  printf("Nome = %s\n", nome);
  printf("Caractere = %c\n\n", caractere);

  //system("pause");
  return 0;
}
