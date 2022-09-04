#include <stdio.h>

int main()
{
  int dias;
  float valor;
  float grati;
  float newvalor;

  printf("Qual foi o seu número de dias trabalhados?\n");
  scanf("%d", &dias);

  valor = (50.25 * dias);
  newvalor = valor - (valor * 0.10);

  if (dias <= 10)
  {
    printf("O seu valor líquido sem gratificação será de: %.3f reais", newvalor);
  }
  else if (dias <= 20)
  {
    grati = (newvalor * 0.20);
    printf("O seu valor líquido com gratificação de 20 porcento será de: %.3f reais", newvalor + grati);
  }
  else
  {
    grati = (newvalor * 0.30);
    printf("O seu valor líquido com gratificação de 30 porcento será de: %.3f reais", newvalor + grati);
  }
  return 0;
}