#include<stdio.h>
int main(){
    int a = 5;
    int *p; //declaring pointer for storing address of an integer data type
    p = &a;
    printf("%d\n", &a); //address of a
    printf("%d\n" , p); //pointer holding address of a
    printf("%d\n" , a); // value at a
    printf("%d\n" ,*p); //value at address p
    *p = 8;
    printf("%d\n" , a); // value at a --> changes to 8
    printf("%d\n" ,*p); //value at address p --> changes to 8
    // prrintf("%d\n" , *a); --> erroe as a is not a pointer

    char c = 'a';
    char *pc; //declaring poiner to store address of char data type
    pc = &c;
    printf("%c\n", &c); //address of a
    printf("%c\n" , pc); //pointer holding address of a
    printf("%c\n" , c); // value at a
    printf("%c\n" ,*pc); //value at address p
    *pc = 'a';
    printf("%c\n" , c); // value at a --> changes to 8
    printf("%c\n" ,*pc); //value at address p --> changes to 8
    
    

    
    return 0;
}