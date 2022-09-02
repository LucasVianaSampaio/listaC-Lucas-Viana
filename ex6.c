#include <stdio.h>

int main() {
  char sexo;
  float alt, peso;

  printf("Qual o seu sexo: M ou F?\n");
  scanf("%c", &sexo);
  printf("Qual a sua altura em metros?\n");
  scanf("%f", &alt);

  if (sexo == 'M') {
    peso = ((72.7 * alt) - 58);
    printf("O seu peso ideal é de: %.2f", peso);
  } else {
    peso = ((62.1 * alt) - 44.7);
    printf("O seu peso ideal é de: %.2f", peso);
  }

  return 0;
}