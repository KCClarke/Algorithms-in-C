/*
8. Write a program to compute the greatest common divisor of three integers u,
v, and w.
*/

#include <stdio.h>

int gcdClassic(int u, int v){
    int t, i = 0;
    while(u > 0){
        if(u < v) {t = u; u = v; v = t;}
        u = u%v;
        i++;
    }
    return v;
}

void gcdOfThree(int u, int v, int w){
    int x = gcdClassic(u, v);
    x = gcdClassic(x, w);
    printf("the gcd of %d, %d and %d is %d\n", u, v, w, x);
}

int main(){
    int u, v, w;
    for(;;){
    printf("enter three: ");
    scanf("%d %d %d", &u, &v, &w);
    gcdOfThree(u, v, w);
    }
}