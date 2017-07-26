#include <stdio.h>


#define LOWER 0.
#define UPPER 300.
#define STEP  20.


/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300º */

void fahr2cel();
void cel2fahr();

int main(){
  fahr2cel();
  cel2fahr();
  return(0);
}
float convert_cel2fahr(float celsius){
  float fahr = celsius * (9./5) + 32;
  return(fahr);
}

float convert_fahr2cel(float fahr){

  return((fahr - 32) * (5./9));
}


void fahr2cel()
{
  float fahr, celsius;
  float lower, upper, step;

  fahr = UPPER; // type coercion
  //char heading[80] = "\nFahrenheit to Celsius conversion table\n"

  for(int i = 0; i < 40; i++) printf("#");
  printf("\nFahrenheit to Celsius conversion table\n");
  for(int i = 0; i < 40; i++) printf("#");
  printf("\n");

  while (fahr >= LOWER) {
    celsius = convert_fahr2cel(fahr);
    printf("%.0f\t%6.2f\n", fahr, celsius);
    fahr = fahr - STEP;
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
    fahr = convert_cel2fahr(celsius);
    printf("%.2f\t%6.2f\n", celsius, fahr);
    celsius += step;
  }
  printf("\n");

}
