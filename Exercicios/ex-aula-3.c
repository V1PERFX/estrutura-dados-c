// 1)	Faça um programa que some a idade de duas pessoas. O usuário digita as idades das pessoas.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int age1, age2, calc;
	
	printf("Enter the age of the first person: ");
	scanf("%d", &age1);

	printf("Enter the age of the second person: ");
	scanf("%d", &age2);
	
	calc = age1 + age2;
	
	printf("\nThe calculation of ages %d + %d is: %d", age1, age2, calc);
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}

// 2)	Faça um programa que calcule a área de um retângulo. O usuário digita o valor dos lados.
#include<stdio.h>
#include<stdlib.h>

int main(){
	float side1, side2, area;
	
	printf("Enter side 1: ");
	scanf("%f", &side1);
		
	printf("Enter side 2: ");
	scanf("%f", &side2);
	
	area = side1 * side2;
	
	printf("\nThe area is %.2fm²", area);
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}

// 3)	Faça um programa que informe a velocidade média de um carro em km/h ao longo de um percurso. O usuário informa o tempo de viagem e a distância percorrida. O sistema informa a velocidade média.
#include<stdio.h>
#include<stdlib.h>

int main(){
	float km_traveled, hours_spent, average_speed;
	
	printf("Enter the traveled km: ");
	scanf("%f", &km_traveled);

	printf("Enter the hours spent: ");
	scanf("%f", &hours_spent);	
	
	average_speed = km_traveled / hours_spent;
	
	printf("Your average speed is %.2fKm/h", average_speed);
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}

// 4)	Faça um programa para converter dólares em reais.
#include<stdio.h>
#include<stdlib.h>

int main(){
	float price, dollar_value, real_value;
	
	printf("Enter the value of the US$ in R$: ");
	scanf("%f", &price);
	
	printf("How much US$ you want to convert: ");
	scanf("%f", &dollar_value);
	
	real_value = price * dollar_value;
	
	printf("\nYou have R$ %.2f\n", real_value);
	
	printf("\nUS$ %.2f equals R$ %.2f", dollar_value, real_value);
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}

// 5)	Faça um programa para calcular a idade de uma pessoa. O usuário deve informar o ano de nascimento e o ano atual para o sistema calcular.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int year_birth, current_year, age;
	
	printf("Enter the year of birth: ");
	scanf("%d", &year_birth);
	
	printf("Enter the current year: ");
	scanf("%d", &current_year);
	
	age = current_year - year_birth;
	
	printf("Age is %d years old", age);
	
	printf("\n\n");
	
	// Pausa o console Windows
	//system("pause");
	
	// Pausa o console Linux
	system("read -p 'Press Enter to continue...' var");
  return 0;
}