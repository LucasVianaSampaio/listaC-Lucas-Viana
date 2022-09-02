#include <stdio.h>

int main()
{
  int x;

  printf("Digite um número inteiro desejado:\n");
  scanf("%d", &x);

  printf("O valor ao quadrado do número inserido é: %d", x * x);
  return 0;
}