/*
6. Give all the values that u and v take on when gcd is invoked with the initial
call gcd(12345, 56789)

7. Exactly how many C statements are executed in the call for the previous
exercise?
    In the spirit of the book the gcd and gcdClassic have been compared here.
the gcd runs 32.5 times more than the gcd and drags around a bunch of statements
to populate and print the values. Furthermore, many of the values in the gcd call
are redundant where none of the gcdClassic are. It seems likely if one was to
optimize gcd using obscure C shenanagins the gcdClassic would still pull ahead.
*/

#include <stdio.h>

void printArray(char *label, int array[], int size){
    int i;
    printf("%s ", label);
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    putchar('\n');
}

int gcd(int u, int v){
    int t, i = 0;
    int steps = 260;
    int valuesOfU[steps];
    int valuesOfV[steps];
    while(u > 0){
        valuesOfU[i] = u;
        valuesOfV[i] = v;
        if(u < v) {t = u; u = v; v = t;}
        u = u-v;
        i++;
    }
    printArray("values of u: ", valuesOfU, steps);
    printArray("values of v: ", valuesOfV, steps);
    printf("gcd steps %d\n", i);
    return v;
}

int gcdClassic(int u, int v){
    int t, i = 0;
    int steps = 8;
    int valuesOfU[steps];
    int valuesOfV[steps];
    while(u > 0){
        valuesOfU[i] = u;
        valuesOfV[i] = v;
        if(u < v) {t = u; u = v; v = t;}
        u = u%v; /*the classical version*/
        i++;
    }
    printArray("values of u: ", valuesOfU, steps);
    printArray("values of v: ", valuesOfV, steps);
    printf("gcdClassic steps %d\n", i);
    return v;
}

int main(){
    int x = 12345, y = 56789;
    putchar('\n');
    printf("%d %d %d\n\n", x, y, gcd(x, y));
    printf("%d %d %d\n", x, y, gcdClassic(x, y));
    putchar('\n');
}