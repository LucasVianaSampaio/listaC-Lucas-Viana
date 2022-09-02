#include <stdio.h>

int main()
{
  float cliente;
  float total;

  printf("Digite abaixo o gasto do cliente\n");
  scanf("%f", &cliente);

  total = cliente + (cliente * 0.10);
  printf("O gasto total é de: %.2f\n", total);
  return 0;
}