#include <stdio.h>

int main(void)
{
  int x;
  float div;

  printf("Escreva abaixo um valor inteiro:\n");
  scanf("%d", &x);

  printf("O triplo do número digitado é: %d\n", 3 * x);
  printf("O quadrado do número digitado é: %d\n", x * x);

  div = (float)x / 2;
  printf("A metade do valor do número digitado é: %.2f\n", div);

  return 0;
}