#include <stdio.h>

int main()
{

  int horas, min, seg;
  long int result_em_segundos;

  printf("Digite o número de horas:\n");
  scanf("%d", &horas);
  printf("Digite o número de minutos:\n");
  scanf("%d", &min);
  printf("Digite o número de segundos:\n");
  scanf("%d", &seg);

  horas = 60 * 60 * horas;
  min = 60 * min;

  printf("O resultado em segundos e de %d \n", horas + min + seg);

  return 0;
}