/*
1. impliment the classical version of Euclids algorithm (pg 9)
*/
#include <stdio.h>

int gcd(int u, int v){
    int t, i = 0;
    while(u > 0){
        if(u < v) {t = u; u = v; v = t;}
        u = u-v;
        i++;
    }
    printf("gcd steps %d\n", i);
    return v;
}

int gcdClassic(int u, int v){
    int t, i = 0;
    while(u > 0){
        if(u < v) {t = u; u = v; v = t;}
        u = u%v; /*the classical version*/
        i++;
    }
    printf("gcdClassic steps %d\n", i);
    return v;
}

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
        if(x>0 && y>0){
            printf("%d %d %d\n", x, y, gcd(x, y));
            printf("%d %d %d\n", x, y, gcdClassic(x, y));
        }
    }
}