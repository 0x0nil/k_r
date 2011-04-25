#include <stdio.h>

/* 验证表达式getchar() != EOF 的值是0还是1. */
/* copy input to output; 2nd version */
int main(int argc, char *argv[])
{
    int c;

    int b = 1;
    while (b)
    {
        b = (c = getchar()) != EOF;
        putchar(c);
        printf("\nb = %d\n", b);
    }
    return 0;
}
