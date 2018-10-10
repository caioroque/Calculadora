// Calculadora.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	//variavel local
	//visivel somente nesta funcao
	int op = 0;
	float num1 = 0, num2 = 0, resultado = 0;


	// \t da espaço na mesma linha
	printf("Hello world\n");

	printf("\n1 - SOMA\t3 - MULTIPLICACAO \n");
	printf("-------------------------------------------- \n");
	printf("2 - SUBTRACAO \t4 - DIVISAO \n");

	printf("\nEscolha uma opcao: ");
	scanf_s("%i", &op);

	printf("Digite o primeiro numero: ");
	scanf_s("%f", &num1);

	printf("Digite o segundo numero: ");
	scanf_s("%f", &num2);
	printf("\n");
	do
	{


		switch (op) {
		case 1:
			resultado = num1 + num2;
			break;
		case 2:
			resultado = num1 - num2;
			break;
		case 3:
			resultado = num1 * num2;
			break;
		case 4:
			resultado = num1 / num2;
			break;
		default:
			printf("\n Digite uma opcao valida");
			break;

		}
		printf("\n\t O resultado é: %0.2f", resultado);
		printf("\n Digite 1 para continuar: ");
		scanf_s("%i", &op);
	} while (op == 1);


	//system("pause");
	//return 0;

}

