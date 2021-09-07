// 1) (IF com decisão simples) Faça um programa no qual o usuário digite um número. Se o número digitado for negativo o sistema transforma em positivo e exibe na tela, se for positivo somente o exibe na tela.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	                            
	if (number < 0){
		number = number * (-1);
	}
	
	printf("The final value of the number is %d", number);
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}

// 2) (IF com decisão composta) Faça um programa no qual o usuário digite o RA e a SENHA (numérica). Se o RA e SENHA estiverem corretos o sistema informa "Bem vindo ao sistema!", caso contrário o sistema informa "Usuário ou senha inválidos!". Os dados corretos são RA=123456 e SENHA=654321.
#include<stdio.h>
#include<stdlib.h>

int main(){
	double ra;
	int pass;
	
	printf("Enter the RA.......: ");
	scanf("%lf", &ra);
	
	printf("Enter the PASSWORD.: ");
	scanf("%d", &pass);

	if (ra == 123456 && pass == 654321){
		printf("Welcome to the system!");
	}else{
		printf("Invalid username and password!");
	}
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}

// 3) (IF com decisão encadeada) Faça um programa no qual o usuário digite a nota da AV1 e a nota da AV2 de um aluno. O programa deve calcular a média do aluno e exibir uma mensagem conforme a média obtida. Os critérios são os seguintes:
/*
Critério                    Mensagem
Média >= 0 e média < 3      Reprovado! Você foi péssimo!
Média >= 3 e média < 6      Reprovado! Você está de DP!
Média >= 6 e média < 7      Aprovado! Passou por pouco!
Média >= 7 e média < 9      Aprovado! Você foi bem!
Média >= 9 e média <= 10    Aprovado! Você foi ótimo!
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	float note1, note2, average;
	
	printf("Enter note 1: ");
	scanf("%f", &note1);
	
	printf("Enter note 2: ");
	scanf("%f", &note2);
	
	average = (note1 + note2) / 2;
	
	printf("\nYour average is %.2f\n\n", average);
	
	if (average >= 0 && average < 3){
		printf("Disapproved! You were terrible!");
	}else if (average >= 3 && average < 6){
		printf("Disapproved! You are DP!");
	}else if (average >= 6 && average < 7){
		printf("Approved! It just passed!");
	}else if (average >= 7 && average < 9){		
		printf("Approved! You did well!");
	}else if (average >= 9 && average <= 10){
		printf("Approved! You were great!");
	}
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}

// 4) (IF com decisão encadeada) Faça um programa para calcular o IMC (índice de massa corpórea de uma pessoa) e informar um status adequado. Após o usuário informar o peso e a altura o sistema calcula o IMC e exibe uma mensagem conforme a tabela abaixo. Dica: Utilize a biblioteca #include<math.h> e a função pow(base, expoente) para calcular potência.

// Exemplo: imc = peso / pow(altura, 2);
#include<stdio.h>
#include<stdlib.h>

int main(){
  int weight;
  float height, imc;

  printf("Enter your weight ");
  scanf("%d", &weight);

  printf("Enter your height ");
	scanf("%f", &height);

  imc = weight / (height * height);
  //imc = weight / pow(height, 2);

  if (imc < 18.5){
		printf("Low Weight");
	}else if (imc >= 18.5 && imc <= 24.9){
		printf("Normal Weight");
	}else if (imc >= 25.0 && imc <= 29.9){
		printf("Overweight");
	}else if (imc >= 30.0 && imc <= 34.9){		
		printf("Obesity (Grade I)");
	}else if (imc >= 35.0 && imc <= 39.9){
		printf("Severe Obesity (Grade II)");
	}else if (imc >= 40.0){
		printf("Morbid obesity (Grade III)");
	}
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}