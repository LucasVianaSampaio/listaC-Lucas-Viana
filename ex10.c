#include <stdio.h>

int main()
{
  float comp, larg, alt, vol;

  printf("Digite abaixo o valor do comprimento em centímetros:\n");
  scanf("%f", &comp);
  printf("Digite abaixo o valor da largura em centímetros:\n");
  scanf("%f", &larg);
  printf("Digite abaixo o valor da altura em centímetros:\n");
  scanf("%f", &alt);

  printf("O volume da caixa em centímetros cúbicos é de %.2f", comp * larg * alt);

  return 0;
}