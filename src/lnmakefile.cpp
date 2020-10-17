#include "../inc/lnmakefile.h"
#include "../inc/template.h"

int sum(int a, int b)
{
    struct_4bit tmp;

    tmp.bit_0123 = 10;
    tmp.bit_4567 = 9;
    
    uint8_t sum = tmp.bit_0123 * tmp.bit_4567;
    return (a+b+sum);
}