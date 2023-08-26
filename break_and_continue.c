#include<stdio.h>
int main(){
    //Break --> can be used to jump out of the loop
    for(int i = 1 ; i <= 10 ; i++){
        if(i > 5){
            break; // exits the loop when i > 5
        }
        printf("%d ", i);
    }
    printf("Outside the loop\n");

    //Continue --> breaks one iteration of the loop and contimues afterwards
    for(int i = 1 ; i <= 10 ; i++){
        if(i == 5){
            continue; //breaks loop iteration at i = 5
        }
        printf("%d " , i);
    }
    printf("Outside the loop! \n");
    return 0;
}