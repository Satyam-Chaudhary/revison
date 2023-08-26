#include<stdio.h>

int main(){
    int myNum = 5;
    if(myNum == 0)
        printf("Zero\n");
    if(myNum > 0)
        printf("positive\n");
    if(myNum < 0)   
        printf("Negative\n");


    // short hand if-else //--> Ternary operator
    int age = 20;
    ((age > 18) ? printf("Adult\n") : printf("Minor\n")); //condition true prints left one else prints right one

    
    
    return 0;
}