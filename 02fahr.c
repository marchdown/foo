#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300º */

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  fahr = lower; // type coercion

  while (fahr <= upper) {
    celsius = (fahr - 32) * (5./9);
    printf("%.0f\t%.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
