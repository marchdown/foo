#include <stdio.h>
#define MAX_WORD_LENGTH 80
int main()
{
  int c; // don't initialize. is that an error?
  int wordlengths[MAX_WORD_LENGTH];
  int l, n;
  l = n = 0;
  // initialize the array
  for(int i = 0; i<80; i++){
    wordlengths[i] = 0;
  }

  while((c = getchar()) != EOF){
    putchar(c);
    if (c == ' '|| c == '\n' || c == '\t'){
      wordlengths[l] += 1;
      l = 0;
    }
    else
      ++l;
  }

  for (int i = 0; i<MAX_WORD_LENGTH; i++){
    printf("%d\t", i);
    for (int j = 0; j < wordlengths[i]; j++)
      printf("*");
    printf("\n");
  }

  return 0;
}
