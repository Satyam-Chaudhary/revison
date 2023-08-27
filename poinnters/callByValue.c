

#include<stdio.h>

void increment(int a){ //(CALLED FUNCTION) // formal argument --> copy of a is passed  
    a = a + 1;
    printf("value of a inside the increment function --> %d\n" , a); // copy of a is increased inside the increment function
    printf("Addres of a in increment --> %lu\n" , (unsigned long)&a);
} 
int main(){ //CALLING FUNCTION
    int a = 5; // --> local variable have the scope only inside the main function
    increment(a); //actual argument
    printf("value of a in main function --> %d\n" , a); // doesn't increment as a copy of a is passed in the increment function
    printf("Addres of a in main --> %lu\n" , (unsigned long)&a); 
    return 0;
    // --> actual argument is mapped to formal argument and a copy is passed of actual argument in the formal argument
}