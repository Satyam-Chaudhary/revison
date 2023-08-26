#include<stdio.h>

int main(){
    //While Loop
    int i = 1;
    while(i <= 5){
        printf("%d " ,i);
        i++;
    }
    printf("\n");

    //Do-while Loop --> Runs atleast once
    i = 1;
    do{
        printf("%d " ,i);
        i++;
    }
    while(i < 1);

    printf("\n");
    
    //For Loop --> when you know how many times to iterste through loop
    for(int i = 0 ; i < 6 ; i++){
        printf("%d ", i);
    }
    printf("\n");

    //Nested Loops 
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}