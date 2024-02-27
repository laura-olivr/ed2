#include <stdio.h>
#include <math.h>

#define wBits 32
#define l 14
#define A (sqrt(5) - 1)/2    //melhor A segundo Knuth

/*  long int %ld
    long long int %lld
    unsigned decimal int %lu
*/

int metDesloc(int key){
    long long int doisW = pow(2, wBits);    //2 elevado a w bits
    long long int a = A * doisW;    
    long long int resto = (key * a) % doisW;
    return (resto >> wBits - l);
}

int main(){ 
    printf("%d", metDesloc(123456));
    return 0;
}
