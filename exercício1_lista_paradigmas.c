#include<stdio.h>
#include<stdlib.h>

main() {
    float salario[10], maior = -1;
    int cont;
    for (cont=0;cont<10;cont++)
    {
        printf ("\nInforme o valor do salario %d:", cont+1);
        scanf("%f", &salario[cont]);
        if(salario[cont]>maior)
        maior=salario[cont];
    }
printf("\nO maior salario digitado foi %.2f\n", maior);
system("pause");
}