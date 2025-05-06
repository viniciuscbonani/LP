/*#include <stdio.h>
int main(){
  int n1, n2, escolha;
  float result;
  printf("Número 1: ");
  scanf("%d", &n1);
  printf("Número 2: ");
  scanf("%d", &n2);
  do{
    printf("(1)Adição\n(2)Subtração\n(3)Divisão\n(4)Multiplicação\nDigite sua opção: ");
    scanf("%i", &escolha);
  } while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4);
  if (escolha == 1)
    result = n1 + n2;
  else if (escolha == 2)
    result = n1 - n2;
  else if (escolha == 3)
    result = (float)n1/n2;
  else
    result = n1*n2;
  printf("Resultado: %.1f", result);
}*/