// Array as function arguments --> only call by refrence no call by value
#include<stdio.h>

int sumOfElements(int A[] , int size){ // int A[] same as int* A --> pointer to base address of Array A[] // this is compiler jadu
    printf("Size of pointer A inside function --> %lu\n" , (unsigned long)sizeof(A)); // 8 in 64 bit systems
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        //sum += A[i];
        sum += *(A + i); // work both ways
    }
    return sum;
}

 /*
 size need to be passed from main function only as we can't calculate the size of array 
 inside the function as it is passed as a pointer to base element in the function and if we 
 calculate the size it will only give us the size of the pointer to first element of array
 */

void Double(int* A , int size){         // int A[] or int* A -->  it's the same 
    for(int i = 0 ; i < size ; i ++){
        A[i] = 2*A[i];
        // *(A) = 2* *(A); // same as above
    }
}
int main(){

    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]); // A will give the size of array A and A[0] will give the size of one element of array
    printf("Size of A in main function --> %lu\n"  , sizeof(A));
    int total = sumOfElements(&A[0] , size); // passing A --> i.e the pointer to base address of array A[] // A or &A[0] --> same
    printf("Sum of elements of array is --> %d\n" , total); // works as base address is passed in arguments and not a copy of array.
    
    Double(A , size);
    printf("New array --> ");
    for(int i = 0 ; i < size ; i++){
        printf("%d " , *(A+i)); //A[i] same 
    }
    printf("\n");

    return 0;
}