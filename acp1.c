#include <stdio.h>
#include <stdlib.h>
#include "rutinasCiclos.c"

//L1d=3 MiB = 3,145,728 L1i = 2 MiB  = 2,097,152 L1 = 5,242,880 TamLinea=64B       L2=80 MiB = 83,886,080          1MiB = 1,048,576 bytes
//getconf -a | grep CACHE  

/*int R[7] = {40960, 122880, 655360, 983040, 2621440, 5242880, 10485760}; //Nº de saltos
int D[5] = []; //Salto (5 potencias de 2)

int main(int argc, char *argv[]) {
    double *A;
    double S[9]; //Array de Resultados
    for(int k=0;k<10;k++){
        double s;
        for(int i=0;i<5;i++){
            int dactual = D[i];
            for(int j=0;j<7;j++){
                int ractual = R[j];
                int ind[ractual];
                A = (double*)aligned_alloc(1024, 1024 * sizeof(double)); //Vector variable con R y D
                double* P = &A[0]; //Puntero al primer elemento del array
                for(int r=0;r<ractual;r++){
                    ind[r] = r*dactual; //Array de índices de N*D
                }
                for(int r=0;r<ractual;r++){
                    s += A[ind[r]]; //Suma
                }
                free(P); //Libera cada array al final
            }
        }
        S[k] = s;
    }
    
}*/

int main(int argc, char *argv[]){
    
    if (argc<4){
        perror("Faltan los argumentos.");
        exit(1);
    }

    int D = atoit(argv[1]);
    int L = atoi(argv[2]);
    double *A = (double*)aligned_alloc(64, 1024 * sizeof(double)); //Vector variable con R y D
    double* P = &A[0]; //Puntero al primer elemento del array
    int ind[L];
    int S[9];
    int R;

    if(){
        R=
    }

    for(int i=0;i<L;i++){
        ind[i] = i*D;
    }

    double s=0.0;

    for(int j =0;j<10;j++){
        for (int i=0;i<L;i++){
            s += A[ind[i]];
        }
        S[j] = s;
    }

    free(P);
                
}