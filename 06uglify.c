#include <stdio.h>

main()
{
  int c;
  int zapped = 1; // the hell we don't have booleans?!
  while((c = getchar()) != EOF)
    if(c == '\t') {
      printf("\\t");
    }
    else if(c == '\b') { // backspace is ^H.
      printf("\\b");
    }
    else if(c == '\\') {
      printf("\\\\");
    }
    else {

      putchar(c);  // now test this
    }
}
