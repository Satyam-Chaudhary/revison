#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a; // goes to stack
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    printf("%lu\n" , (unsigned long)p);
    printf("%d\n" , *p);
    printf("%lu\n" , (unsigned long)&p);
    free(p);
    


    
    return 0;
}