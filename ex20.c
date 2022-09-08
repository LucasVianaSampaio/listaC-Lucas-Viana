#include <stdio.h>

int main()
{
  int num;

  printf("Digite um número abaixo:\n");
  scanf("%d", &num);

  switch (num % 2)
  {
  case 0:
    printf("O número é par");
    break;
  default:
    printf("O número é ímpar");
  }

  return 0;
}