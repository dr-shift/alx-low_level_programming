#include <stdio.h>
int main(void)
{
    char let[26] = "abcdefghijklmnopqrstuvwxyz";
    int i;
    for (i = 0; i < 26; i++)
    {
        putchar(let[i]);
    }
    putchar('\n');
    return (0);
}
