#include<stdio.h>
int main(){
    // Void pointer --> Generic pointer
    int a = 10;
    int* p = &a;
    void* p0;
    p0 = p; // no need to typecast as (void*)p0 
    printf("size of integer datatype --> %lu bytes.\n" , sizeof(int));
    printf("Address of a --> %lu\n" , (unsigned long)&a);
    printf("Address at p --> %lu\n" , (unsigned long)p);
    printf("Address at p0 --> %lu\n" , (unsigned long)p0);
    // --> you can't print *p0 as the generic or void pointer is only holding the address and not pointing to any value that the memory address holds
    // printf("Value --> %d\n" , *p0); --> NOT POSSIBLE IN THE CASE OF VOID OR GENERIC POINTER
    // neither can we do pointer arithmetic with void pointers as they don't point to any particular datatype so we don't have any idea of the next memory address
    //printf("Address of p0 + 1 --> %lu\n" , (unsigned long)(p0+1); --> NOT POSSIBLE

   
    return 0;
}