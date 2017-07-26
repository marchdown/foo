#include <stdio.h>

// states
#define IN 1
#define OUT 0
#define blank ' '
main()
{
  int c, lc, wc, cc, state; // can I declare and initialize in one line? no.
  state = OUT; // redundant
  c = lc = wc = cc = 0; // chain assignment: a = (b = (c = d))

  while((c = getchar()) != EOF){
    ++cc;
    if (c == '\n') ++lc;
    if ((c == blank)||(c == '\t')||(c == '\n')) state = OUT;
    else if (state == OUT) {
      state = IN;
      ++wc;
    }
  }
  printf("lines:\t\t%d\nwords:\t\t%d\ncharacters:\t%d\n", lc, wc, cc);
}
