#include <math.h>
#include <stdio.h>

int main()
{
  float x, y, resto;

  printf("Digite dois números abaixo:\n");
  scanf("%f", &x);
  scanf("%f", &y);

  printf("A soma dos números digitados é: %.2f\n", x + y);
  printf("O produto dos números digitados é: %.2f\n", x * y);
  printf("A diferença dos números digitados é: %.2f\n", x - y);
  printf("O quociente dos números digitados é: %.2f\n", x / y);

  resto = fmod(x, y);
  printf("O resto da divisão dos números digitados é: %.2f\n", resto);

  return 0;
}