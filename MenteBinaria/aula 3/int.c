#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void)
{
    uint16_t i = UINT_MAX;

    printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i*8);
    printf("O valor de i: %u\n", i);

    return 0;
}
