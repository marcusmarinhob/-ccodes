#include <stdio.h>

int main(void)
{
    char c;

    c = 10;
    c = 0xa;
    c = '\n';

    printf("O tamanho da variavel c eh: %lu\n", sizeof(c));

    return 0;
}
