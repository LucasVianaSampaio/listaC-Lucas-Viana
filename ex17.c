#include <stdio.h>
#include <stdlib.h>

int main()
{
  int l;
  printf("Digite abaixo um valor inteiro, positivo ou negativo:\n");
  scanf("%d", &l);

  int m = abs(l);

  printf("O valor absoluto do núnero inserido é: %d", m);

  return 0;
}