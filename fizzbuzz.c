#include <stdio.h>
int main() {
  for (int i = 0; i < 100; i++){
    fizzbuzz(i);
  }

}

int fizzbuzz(int n) {
  if (n%3 == 0){
    printf("Fizz");
  }
  if (n%5 == 0){
    printf("Buzz");
  }
  if ((n%3 != 0) && (n%5 != 0)) printf("%d", n);
  printf("\n");
  return(0);
}
