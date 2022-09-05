#include <math.h>
#include <stdio.h>

int main()
{
  float raio;
  float pi = 3.14159;

  printf("Digite abaixo o raio do círculo:\n");
  scanf("%f", &raio);

  printf("O diâmetro do círculo é: %.2f\n", raio * 2);
  printf("A circuferência do círculo é: %.2f\n", 2 * pi * raio);
  printf("A área do círculo é: %.2f", pow(raio, 2) * pi);

  return 0;
}