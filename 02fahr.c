#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300º */

void fahr2cel();
void cel2fahr();

int main(){
  fahr2cel();
  cel2fahr();
  return(0);
}

void fahr2cel()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  fahr = lower; // type coercion

  for(int i = 0; i < 40; i++) printf("#");
  printf("\nFahrenheit to Celsius conversion table\n");
  for(int i = 0; i < 40; i++) printf("#");
  printf("\n");

  while (fahr <= upper) {
    celsius = (fahr - 32) * (5./9);
    printf("%.0f\t%6.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
  printf("\n");
}

void cel2fahr(){
  float celsius, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 7;

  celsius = lower;

  for(int i = 0; i < 40; i++) printf("#");
  printf("\nCelsius to Fahrenheit conversion table\n");
  for(int i = 0; i < 40; i++) printf("#");
  printf("\n");


  while(celsius <= upper) {
    fahr = celsius * (9./5) + 32;
    printf("%.2f\t%6.2f\n", celsius, fahr);
    celsius += step;
  }
  printf("\n");

}
