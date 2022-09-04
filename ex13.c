#include <stdio.h>

int main()
{
  int a = 10;
  int b = 7;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("A variável a é %d e a variável b é %d", a, b);

  return 0;
}