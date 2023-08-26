#include<stdio.h>
int main(){
    int myNumber[] = {1, 2, 4, 5, 6};
    printf("%d\n" ,myNumber[0]);
    myNumber[2] = 32;
    printf("%d\n" ,myNumber[2]);
    for(int i = 0; i < 5; i++){
        printf("%d " , myNumber[i]);
    }
        printf("\n");

    int myArr[5];
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d" , &myArr[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d " , myArr[i]);
    }
        printf("\n");

    return 0;
}