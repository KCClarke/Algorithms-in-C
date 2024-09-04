/*
5. Write a function binary(int x) that prints out the binary equivalent of a
number.
*/
#include <stdio.h>

int largestPowOfTwo(int x){
    int largestPowOfTwo = 1;
    for(;;)
    {
        if(2 * largestPowOfTwo > x) break;
        largestPowOfTwo *= 2;
    }
    return largestPowOfTwo;
}

void binary(int x){
    int l = largestPowOfTwo(x);
    while(l > 0){
        if(x >= l){
            putchar('1');
            x -= l;
            }
        else {putchar('0');}
        
        l /= 2;
    }
    printf(" in binary \n\n");
}

int main(){
    int x = 1;
    while(x){
        printf("as a decimal: ");
        scanf("%d", &x);
        binary(x);
    }
}