// pointer as function arguments --> CALL BY REFERENCE
#include<stdio.h>

void increment(int* p){ // --> since we are passing a pointer to integer as formal argument therefore we are getting the actual address of a or the local variable at which pointer is pointing to
    *p = *p + 1; // value at address p i.e a is incremented in the actual argument
}

int main(){
    int a = 10;
    increment(&a); // we are giving address of a to the pointer to integer
    printf("Value of a after increment is --> %d\n" , a); // it is actually incremented
    return 0;
}