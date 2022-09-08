#include <stdio.h>

int main()
{
  int a, b;

  puts("infome dois numeros inteiros");
  scanf("%d", &a);
  scanf("%d", &b);
  (a % b) ? printf("o primeiro não é multiplo do segundo\n\n") : printf("o primeiro é multiplo do segundo\n\n");

  return 0;
}