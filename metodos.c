#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M 16384
//#define A 0.5

//key == k tam == m

int metDivisao(int key){
    return key % M;
}


int metMultiplicacao(int key){
    double A = (sqrt(5) - 1)/2;
    //printf("%f\n", A);
    int piso = key * A;
    //printf("%d\n", piso);
    double frac = (key * A) - piso;
    //printf("%f\n", frac);
    
    return M * frac;
}

int main(){
    printf("%d\n", metMultiplicacao(123456));
    return 0;
}
