#include<stdio.h>
#include<stdlib.h>

main() {
  int tamanho, i;
  float vetor[tamanho], soma=0;
  printf("\nInforme quantos valores você vai digitar (tamanho do vetor):");
  scanf("%d",&tamanho);
  for (i = 0; i < tamanho; i++) 
    {
      printf("\nDigite o valor [%d]:", i);
      scanf("%f", &vetor[i]);
      soma=soma+vetor[i];
  }
  printf("\nA media dos valores digitados é %.2f\n", soma/tamanho);
  system("pause");
}
