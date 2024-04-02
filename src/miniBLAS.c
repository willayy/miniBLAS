#include "miniBLAS.h"
#include <stdio.h>

extern int testret2asm();

extern void optmVectorAdd(dbl_vector, dbl_vector, int vecSize);

extern void optmVectorAdd_cpu_paralell(dbl_vector, dbl_vector, int vecSize);

extern void optmVectorAdd_gpu_paralell(dbl_vector, dbl_vector, int vecSize);

int test() {
    int val = testret2asm();
    return val;
}

void naiveVectorAdd(dbl_vector a, dbl_vector b, int vecSize) {
    for (int i = 0; i < vecSize; i++) {
        a[i] += b[i];
    }
}