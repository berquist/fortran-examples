#include <stdio.h>

double fpow_(double *xbase, double *xexponent);

int main(void)
{

  double base = 2;
  double exp = 8;
  double result = fpow_(&base, &exp);

  printf("%lf^%lf = %lf\n", base, exp, result);

  return 0;

}
