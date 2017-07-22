#include <stdio.h>

main()
{
  int c;
  int zapped = 1;
  while((c = getchar()) != EOF)
    if(c == ' ') {
      zapped = 1;
    }
    else {
      // empty else branch behaves weirdly. I'm not sure if whatespace or even a blank semicolon does anything here.
      if (zapped == 1){
        putchar(' ');
        zapped = 0;
      }
      putchar(c);  // now test this
    }
}
