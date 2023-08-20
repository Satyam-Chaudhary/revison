#include<stdio.h>
#include<stdbool.h> // (not a built in data type)for booleans to be used otherwise because it was added afterwards in c

int main(){

    bool is_Mragank_gay = true;
    bool is_Mragank_not_gay = false;
    printf("%d\n" ,is_Mragank_gay);
    printf("%d\n" , is_Mragank_not_gay);

    // --> %d use as format speciffier to print boolean outputs
    // 0 --> false
    // 1(any value not zero) --> true

    printf("%d\n", 10 > 9);
    printf("%d\n" , is_Mragank_gay == is_Mragank_not_gay);
    int myAge = 17;
    int voterAge = 18;
    printf("%d\n" , myAge >= voterAge);
    return 0;
}

