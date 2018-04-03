#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating point version */

int main(void)
{
  printf("fahr celsius\n");
  float fahr, celsius;
  int step, lower, upper;

  lower = 0; /* lower limit of the temperature table */
  upper = 300; /* upper limit of the temperature table */
  step = 20; /* step size */
  fahr = lower;

  while(fahr <= upper)
  {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
