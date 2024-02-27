#include <stdio.h>
#include <math.h>

#define M 16384
#define A (sqrt(5) - 1)/2    //Melhor A segundo Knuth
//#define A 0.5

//key == k tam == m

int metDivisao(int key){
    return key % M;
}

int metMultiplicacao(int key){
    int piso = key * A;
    double frac = (key * A) - piso;
    
    return M * frac;
}

int main(){
    printf("%d\n", metMultiplicacao(123456));
    return 0;
}
