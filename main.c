#include <stdio.h>
#include <stdlib.h>
#include "rutinasCiclos.c"

//L1d=3 MiB = 3,145,728 L1i = 2 MiB = 2,097,152 L1 = 5,242,880 TamLinea=64B       L2=80 MiB = 83,886,080          1,048,576 bytes
int S1= 81920;
int S2= 1310720;

int R[7] = {40960, 122880, 655360, 983040, 2621440, 5242880, 10485760}; //Nº de saltos
int D[5] = []; //Salto (5 potencias de 2)

int main(int argc, char *argv[]) {
    double *A;
    double S[9];
    for(int k=0;k<10;k++){
        A = (double*)aligned_alloc(1024, 1024 * sizeof(double));
        double* P = &A[0];
        double s;
        for(int i=0;i<5;i++){
            int dactual = D[i];
            for(int j=0;j<7;j++){
                int ractual = R[j];
                int ind[ractual];
                for(int r=0;r<ractual;r++){
                    ind[r] = r*dactual;
                }
                for(int r=0;r<ractual;r++){
                    s += A[ind[r]];
                }
            }
        }
        S[k] = s;
    }
    
}