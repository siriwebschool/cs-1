
#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
int main()  // Explicit return type int
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;  // Increment character count
        if (c == '\n')
            ++nl;  // Increment line count

        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;  // We're outside a word
        }
        else if (state == OUT)
        {
            state = IN;  // We're entering a word
            ++nw;  // Increment word count
        }
    }

    // Print the result: number of lines, words, and characters
    printf("%d %d %d\n", nl, nw, nc);

    return 0;  // Return statement for successful completion
}



int arr [] = {1,2,3}
address = base address X size of the data type
1000+4 = 1004, 1008