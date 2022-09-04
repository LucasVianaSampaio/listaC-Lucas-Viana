#include <stdio.h>

int main()
{
  int cel;
  int fah;

  printf("Digite abaixo a temperatura em graus Celsius\n");
  scanf("%d", &cel);

  fah = (9 * cel + 160) / 5;
  printf("A temperatura em fahrenheit é de: %d°", fah);
  return 0;
}