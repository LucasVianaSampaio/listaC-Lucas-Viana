#include <stdio.h>

int main() {
  float f;

  puts("Digite um valor real:");
  scanf("%f", &f);

  printf("O valor inserido com apenas uma casa decimal: %.1f\n", f);
  return 0;
}