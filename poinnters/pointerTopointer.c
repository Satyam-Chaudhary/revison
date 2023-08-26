#include<stdio.h>
int main(){
    int a = 5;
    printf("size of integer datatype --> %lu bytes.\n" , (unsigned long)sizeof(int));
    int* p = &a; // pointer to integer store address of a
    printf("Address p --> %lu\n" , (unsigned long)p);
    printf("Value at p --> %lu\n" , (unsigned long)*p);
    int** q; // pointer to pointer or pointer to pointer to integer or double pointer --> stores address of pointer storing address of an integer
    q = &p;
    printf("Address at q --> %lu\n" , (unsigned long)q);
    printf("Value at q --> %lu\n" , (unsigned long)*q); // tells value at the address q i.e address of a
    printf("Value at *q --> %lu\n" , (unsigned long)*(*q)); // derefrence twice // 5
    int*** r; //pointer to pointer to pointer to integer --> stores address of pointer to pointer
    r = &q;
    printf("Address at r --> %lu\n" , (unsigned long)r);
    printf("Value at r --> %lu\n" , (unsigned long)*r);
    printf("Value at *r --> %lu\n" , (unsigned long)*(*r));
    printf("Value at **r --> %lu\n" , (unsigned long)**(*r)); // derefrencing thrice

    return 0;
}