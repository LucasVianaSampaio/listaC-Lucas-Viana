#include <stdio.h>

int main()
{
  int num, cifra;

  printf("Digite um número inteiro:\n");
  scanf("%d", &num);

  if (num >= 0)
  {
    do
    {
      cifra = num % 10;
      printf("%d", cifra);
      num /= 10;
    } while (num != 0);
  }
  else if (num < 1)
  {
    num = num * -1;
    printf("-");
    do
    {
      cifra = num % 10;
      printf("%d", cifra);
      num /= 10;
    } while (num != 0);
  }
  return 0;
}