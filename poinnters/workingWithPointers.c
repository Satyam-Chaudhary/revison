#include<stdio.h>
int main(){
    int a;
    int* p; //can write like int *p as well
    p = &a;
    printf("%p\n" ,p); //&a --> address of a //(%p) --> format specifier to print pointers (gives hexadecimal output --> more human understandable)
    printf("%d\n" ,*p); //garbage value
    a = 8;
    printf("%d\n" ,*p);
    printf("%d\n" , &a); // addres of a same as p
    printf("%d\n" , a);
    *p = 10; //Derefrencing --> changes value at address p i.e a changes value of a
    printf("%d\n" , a);

    int b = 100;
    int* pb = &b; // pb = &a; //--> way to declare and initialize a pointer a single statement
    printf("%p\n" , pb);
    printf("%d\n" ,*pb);

    int c = 200;
    int* pc;
    pc = &c;
    printf("address --> %p\n" , pc); 
    printf("value at address--> %d\n" , *pc);
    int d = 400;
    *pc = d; // only value at p i.e c is changed
    printf("address --> %p\n" , pc);
    printf("value at address %d\n" , *pc);
    printf("value of c now -> %d\n" , c);

    return 0;
}