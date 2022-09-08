#include <stdio.h>

int main()
{
  float horatrab;
  float val_pg;
  short int numhora;
  float inss;

  puts("Informe o valor da hora de aula:");
  scanf("%f", &horatrab);
  puts("Informe o total de horas trabalhadas:");
  scanf("%hi", &numhora);
  puts("informe o percentual do inss");
  scanf("%f", &inss);

  val_pg = numhora * horatrab;
  printf("o valor bruto a receber é de %.2fR$\n", val_pg);
  inss /= 100;
  val_pg -= val_pg * inss;

  printf("o valor liquido a receber é de %.2fR$\n", val_pg);

  return 0;
}