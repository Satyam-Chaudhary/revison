#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a; // pointer to integer or integer pointer
    // Pointer Arithmetic

    // --> %lu stands for unsiged long integer used to print address of memory in decimal format for better understanding, the pointers need to be type casted to unsigned long to make the function work
    // An "unsigned long integer" is a data type in programming that represents a whole number (integer) value that is non-negative (unsigned) and potentially capable of holding a larger range of values compared to a regular "int" data type. It's an integer data type with additional capacity and without the ability to hold negative values.
    printf("Addres of pointer p is %lu\n", (unsigned long)p);         // if p = 2000;
    printf("Addres of pointer p+1 is %lu\n", (unsigned long)(p + 1)); // then p+1 = 2004 as int is of 4 bytes and pointer stores addres of variable
    printf("Addres of pointer p+2 is %lu\n", (unsigned long)(p + 2));
    printf("Value at address p+1 is %d\n", *p);
    printf("Value at address p+1 is %d\n", *(p + 1)); // show garbage value as no value is assigned at memory addres p+1
    printf("Value at address p+1 is %d\n", *(p + 2)); // garbage value

    char c = 'a';
    char *pc = &c;                                                       // charcater to integer or character integer
    printf("Address of pointer pc is %lu\n", (unsigned long)pc);         //%lu --> unsigned long integer
    printf("Address of pointer pc + 1 is %lu\n", (unsigned long)pc + 1); // 1 greater than pc as char hold 1 byte of memory

    return 0;
}