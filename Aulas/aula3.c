#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[50];
  int idade;
  char nota_letra;
  double ra;
  float nota_numero;

  printf("Digite o RA: ");
  scanf("%lf", &ra);

  printf("Digite o NOME: ");
  scanf(" %[^\n]", &nome);

  printf("Digite a NOTA-LETRA: ");
  scanf(" %c", &nota_letra);

  printf("Digite a NOTA-NUMERO: ");
  scanf("%f", &nota_numero);

  printf("Digite a IDADE: ");
  scanf("%d", idade);

  printf("\n\nOs Seguintes dados foram cadastrados:\n\n");

  printf("RA = %.01f\n", ra);
  printf("NOME = %s\n", nome);
  printf("LETRA = %c\n", nota_letra);
  printf("NUMERO = %.2f\n", nota_numero);
  printf("IDADE = %d\n", idade);

  //system("pause");
  return(0);
}