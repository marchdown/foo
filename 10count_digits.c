#include <stdio.h>

main()
{
  int c, i, n_whitespace_characters, n_nondigit_nonwhitespace_characters;
  int ndigit[10];

  n_whitespace_characters = n_nondigit_nonwhitespace_characters = 0;

  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
          ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
          ++n_whitespace_characters;
        else
          ++n_nondigit_nonwhitespace_characters;

    printf("digits:\t");
    for (i = 0; i<10; i++)
      printf(" %d", ndigit[i]);
    printf("\nwhite space:\t%d, other characters:\t%d\n", n_whitespace_characters, n_nondigit_nonwhitespace_characters);
}
