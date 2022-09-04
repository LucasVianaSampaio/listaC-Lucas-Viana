#include <stdio.h>

int main()
{
  float dolar, real;

  printf("Digite abaixo o valor da cotação do dólar atualmente:\n");
  scanf("%f", &dolar);
  printf("Por fim, digite a quantidade em reais que deseja converter:\n");
  scanf("%f", &real);

  printf("O valor em dólar do número digitado é: %.2f", real * dolar);

  return 0;
}