/*
2. check what values your C system computes for un% v when u and v are not nessarily positive.
*/
#include <stdio.h>

int gcdClassic(int u, int v){
    int t;
    while(u > 0){
        if(u < v) {t = u; u = v; v = t;}
        u = u%v; /*the classical version*/
    }
    return v;
}

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
            printf("%d %d %d\n", x, y, gcdClassic(x, y));
    }
}