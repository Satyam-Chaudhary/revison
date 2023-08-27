#include<stdio.h>
int main(){
    int A[] = {2, 4, 5, 8, 1};
    printf("A gives us the base address or address of A[0] --> %lu\n" , (unsigned long)A); 
    // as A is a pointer to base address of array A[5]
    //A++ --> not possible as address can't be reassigned
    printf("&A[0] will also give us the base address of array by definition and is = A --> %lu\n" , (unsigned long)&A[0]);
    printf("1st element of array or --> %d\n" , A[0]);
    printf("1st element of array can be printed like this as well --> %d\n" , *A); // as A[0] == *A
    printf("A + 1 gives us the address of A[1] --> %lu\n" , (unsigned long)(A + 1)); //pointer arithmetic
    printf("&A[1] will also give us the address A[1] --> %lu\n" , (unsigned long)&A[1]);
    printf("2nd element of array or --> %d\n" , A[1]);
    printf("2nd element of array can be printed like this as well --> %d\n" , *(A+1));

    // therefore --> A + i == &(A + i) and A[i] == *(A + i)

    printf("Printing array using pointer concept\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d " , *(A + i));
    }
    printf("\n");

    printf("Printing array using normal concept\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d " , A[i]);
    }
    printf("\n");

    int* p = A; // == int* p = &A[0] as A is a pointer to the base address of A[5]
    // p++ --> not possible as pointer holds address and it is not reassignable
    printf("Base address of array using p --> %lu\n" , (unsigned long)p);
    printf("Base address using A --> %lu\n", (unsigned long)A);
    printf("Printing array using pointer p\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d " , *(p + i));
    }
    printf("\n");

    return 0;
}