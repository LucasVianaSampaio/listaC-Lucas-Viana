#include <stdio.h>

int main()
{
  int x;

  printf("Digite um valor numérico inteiro:\n");
  scanf("%d", &x);

  printf("O antecessor desse número é %d e o sucessor é %d", x - 1, x + 1);
  return 0;
}