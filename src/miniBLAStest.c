#include <stdio.h>
#include "miniBLAS.h"

int main() {

    printf("Computer has architecture: %s\n", ARCH);

    printf("Testing very simple external assembly func (should be 2, is: %d)\n", testret2asm());

    printf("Testing naiveVectorAdd\n");
    dbl_vector a;



    return 0;
}
