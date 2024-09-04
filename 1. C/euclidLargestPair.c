/*
Find the largest pair of numbers representable as integers in your C system
whose greatest common vivisor is 1.
*/

#include <stdio.h>
#include <limits.h>

void gcdClassic(unsigned long int u, unsigned long int v){
    unsigned long int t;
    int i = 0;
    while(u > 0){
        if(u < v) {t = u; u = v; v = t;}
        u = u%v; /*the classical version*/
        i++;
    }
    printf("gcd = %d\n", v);
    printf("gcdClassic steps %d\n", i);
}

int main(){
    unsigned long int bigBoi = ULONG_MAX;
    unsigned long int andre = bigBoi -1;
    printf("bigest number %lu\n", bigBoi);
    printf("   big number %lu\n", andre);
    gcdClassic(andre, bigBoi);
}