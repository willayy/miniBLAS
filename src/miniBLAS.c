#include "miniBLAS.h"
#include <stdio.h>

extern int testret2asm();

int test() {
    int val = testret2asm();
    return val;
}