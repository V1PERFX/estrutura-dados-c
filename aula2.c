#include <stdio.h>
#include <stdlib.h>

main()
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
  scanf("%d", &idade);     // entrada - digitar o valor
  return 0;
}
