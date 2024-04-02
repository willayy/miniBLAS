#include <stdio.h>
#include "miniBLAS.h"

int main() {
    int val = testret2asm();
    printf("%d\n", val);
    return 0;
}
