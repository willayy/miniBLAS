#ifndef miniBLAS_h
    #define miniBLAS_h

    typedef double * dbl_vector;

    int testret2asm();

    void naiveVectorAdd(dbl_vector a, dbl_vector b, int vecSize);

    void optmVectorAdd(dbl_vector a, dbl_vector b, int vecSize);

    void optmVectorAdd_cpu_paralell(dbl_vector a, dbl_vector b, int vecSize);

    void optmVectorAdd_gpu_paralell(dbl_vector a, dbl_vector b, int vecSize);

#endif