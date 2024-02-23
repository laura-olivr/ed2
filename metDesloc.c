#include <stdio.h>
#include <math.h>

#define wBits 32
#define l 14

int metDesloc(int key){
    double A = (sqrt(5)-1)/2;   //Melhor A segundo Knuth
    long long int doisW = pow(2, wBits);    //2 elevado a w bits
    long long int a = A * doisW;    
    long long int resto = (key * a) % doisW;
    return (resto >> wBits - l);
}

/*  long int %ld
    long long int %lld
    unsigned decimal int %lu
*/

int main(){ 
    printf("%d", metDesloc(123456));
    return 0;
}