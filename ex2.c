#include <stdio.h>

int main()
{

  int d;
  printf("\nEntre com um número decimal: ");
  scanf("%d", &d);
  printf("\nA conversão do número %d em hexa é %X:", d, d);

  printf("\nA conversão do número %d para octal é: %o", d, d);

  return 0;
}