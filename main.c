#include <math.h>
#include <stdio.h>

double factorial(double n)
{
  double factorial = 1;
  for (double i = 1; i <= n; i++)
  {
    factorial *= i;
  }

  return factorial;
}

double calculate(int digits, int terms)
{
  double summation;

  for (int i = 1; i <= terms; i++)
  {
    double numerator = pow((-1), i) * factorial(6 * i) * (545140134 * i + 13591409);
    double denominator = factorial(3 * i) * pow(factorial(i), 3) * pow(640320, 3 * i + 3 / 2);

    summation += numerator / denominator;
  }

  summation *= 12 / pow(640320, 1.5);

  return 1 / summation;
}

int main()
{
  int digits;
  scanf("%d", &digits);

  int terms = (digits / 13) + 1;

  printf("%f", calculate(digits, terms));

  return 0;
}