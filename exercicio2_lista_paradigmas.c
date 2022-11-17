#include<stdio.h>
#include<stdlib.h>

main() {
	float salario[5];
	int cont;
	for (cont=0;cont<5;cont++)
	{
	printf("\nInforme o salario %d: ", cont+1);
	scanf("%f", &salario[cont];
	if(salario[cont]<1000)
	salario[cont]=salario[cont]*1.1;
	}
	for (cont=0;cont<5;cont++)
	printf("\nO salario %d é %.2f\n", cont+1, salario[cont]);
	system("pause");
	}
