#include<stdio.h>

int main(){
    const int days_in_week = 7;
    printf("%d\n" , days_in_week);
    // days_in_week = 10; // constants are not unchangable
    //constants need to assigned at time of declaration
    //i.e
    //const int minutes_in_hour;
    //minutes_in_hour = 60; --> not possible
    const int BIRTHDAY = 31; // good practise to declare constants in uppercase
    printf("%d\n" , BIRTHDAY);

    return 0;
}