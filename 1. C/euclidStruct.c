/*
3.implement a procedure to reduce a given fraction to lowest terms using a
struct fraction { int numerator; int denominator; } .
*/

#include <stdio.h>

struct fraction { int numerator; int denominator;
} myFraction = {24, 48};

int gcdClassic(int u, int v){
    int t;
    while(u > 0){
        if(u < v) {t = u; u = v; v = t;}
        u = u%v; /*the classical version*/
    }
    return v;
}

int main(){
    int x = myFraction.numerator;
    int y = myFraction.denominator;
    
    printf("%d %d %d\n", x, y, gcdClassic(x, y));
    }