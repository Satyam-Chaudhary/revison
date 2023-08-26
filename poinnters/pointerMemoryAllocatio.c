/*
relying on uninitialized memory or attempting to access memory that doesn't 
belong to your program can lead to undefined behavior. relying on uninitialized 
memory or attempting to access memory that doesn't belong to your program can l
ead to undefined behavior. 
*/ 

// 1025 --> 00000000 00000000 00000100 00000001 (binary rep of 1025 in 4 bytes , char stores 1 byte)
#include<stdio.h>
int main(){
    int a = 1025;
    int* p; // pointer to integer
    p = &a; //holds the initial byte address of integer a
    printf("size of integer --> %lu\n" , sizeof(int));
    printf("Address --> %lu , Value --> %d\n" , (unsigned long)p , *p); // the address will hold the initial or l
    printf("Address of p+1 --> %lu , Value --> %d\n" , (unsigned long)(p+1) , *(p+1)); // *(p+1) --> shows garbage value and p+1 increases by 4 bytes
    char* p0; // pointer to character
    p0 = (char* )p; // typecasted from pointer to integer to pointer to character
    printf("Address --> %lu , Value --> %d\n" , (unsigned long)p0 , *p0);
    printf("Address of p0+1 --> %lu , Value --> %d\n" , (unsigned long)(p0+1) , *(p0+1)); // p0+1 --> increase by just 1 byte(now dealing with char pointers) and *p0+1 --> changes value to 4 as the next byte holds 4 as binary in the previous int a
    printf("Address of p0+2 --> %lu , Value --> %d\n" , (unsigned long)(p0+2) , *(p0+2));// p0 + 2 --> increases by just 1 byte 
    
    return 0;
}