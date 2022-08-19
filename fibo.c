#include <stdio.h>

int main() {
  int n, i = 2;

  printf ("Digite um numero:\n");
  scanf ("%d", &n);

  int fibo[n];
  fibo[0] = 0;
  fibo[1] = 1;

  while (i <= n)
    {
      int soma;
      soma = fibo[i - 1] + fibo[i - 2];
      fibo[i] = soma;
      i++;
    }

  printf ("O numero de Fibonacci na posicao %d e %d", n, fibo[n]);
}
