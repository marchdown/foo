#include <stdio.h>

main()
{
  long wc = 0;
  int c;
  while((c = getchar()) != EOF)
    if((c == '\t') || (c == '\n') || (c == ' '))
      ++wc;
  printf("%ld\n",wc);
}
