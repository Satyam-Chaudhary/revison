#include<stdio.h>

int main(){
    int num1 = 5;
    int num2 = 2;
    float div = (float)num1/num2; // explict conversion (need to specify)
    printf("%f\n" , div);
    printf("%.1f\n",div); //decimal precison
    return 0;
}