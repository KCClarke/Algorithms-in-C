/*
4. Write a function int convert() that reads a decimal number one character
(digit) at a time, terminated by a blank, and returns the value of that number
*/
#include <stdio.h>

int convert(){
    int myInt = 0;
    char ch;
    while((ch = getchar()) != '\n'){
        myInt *= 10;
        myInt += (ch - '0');
    }
    return myInt;
}

int main(){
    int myInt = convert();
    printf("my int %d\n", myInt);
}