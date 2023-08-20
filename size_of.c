#include<stdio.h>

int main(){
    int myNum = 5;
    float myFloat = 5.32;
    double myDouble;
    char myChar;
    printf("%lu\n" , sizeof(myNum));
    printf("%lu\n" , sizeof(myFloat));
    printf("%lu\n" , sizeof(myDouble));
    printf("%lu\n" , sizeof(myChar));
    //%lu --> used instead of %d for long unsigned int(no negative numbers)
    return 0; 
}