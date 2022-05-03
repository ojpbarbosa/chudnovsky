#include <math.h>
#include <stdio.h>

int factorial(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f *= i;
  }

  return f;
}

double calculate(int digits, int terms)
{
  double sum;

  for (int i = 1; i <= terms; i++)
  {
    double numerator = pow((-1), i) * factorial(6 * i) * (545140134 * i + 13591409);
    double denominator = factorial(3 * i) * pow(factorial(i), 3) * pow(640320, 3 * i + 3 / 2);

    sum += numerator / denominator;
  }

  sum *= 12 / pow(640320, 1.5);

  return 1 / sum;
}

int main()
{
  int digits;
  scanf("%d", &digits);

  int terms = (digits / 13) + 1;

  printf("%f", calculate(digits, terms));

  return 0;
}