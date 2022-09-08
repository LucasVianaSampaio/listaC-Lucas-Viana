#include <stdio.h>
#include <math.h>

int main()
{
  float num1, num2, num3, aux;

  puts("informe três valores");
  scanf("%f %f %f", &num1, &num2, &num3);

  printf("a media aritmetica dos numeros digitados é %.2f\n\n", (num1 + num2 + num3) / 3);

  aux = (float)1 / 3;

  printf("a media geométrica é %.2f", pow(num1 * num2 * num3, aux));
}