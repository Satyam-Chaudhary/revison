#include<stdio.h>

struct students
{
    int reg;
    char name;
};

int main(){
    //create a variable
    struct students s1;
    s1.reg = 229;
    s1.name = 'S';

    printf("reg no --> %d\n" , s1.reg);
    printf("name --> %c\n" , s1.name);
}