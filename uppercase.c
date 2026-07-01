#include <stdio.h>

/*

* Bitwise operations for showing off

* Without calling `toupper`, pure bitwise operations are used to determine if a letter is lowercase and convert it

* Readability is approximately negative; for showing off only

*/
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c - (((c - 'a') & ~((c - 'a') >> 31) & (('z' - c) >> 31 ^ -1)) & 32));
    return 0;
}
