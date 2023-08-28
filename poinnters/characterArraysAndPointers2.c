//Arrays always pass through call by reference
#include<stdio.h>
void print(char C[]){ // compiler sees this as char* C == char C[]
    int i = 0;
    while(C[i] != '\0'){  //*(C+i) == C[i]
        printf("%c " , *(C+i)); // *(C+i) == C[i]
        i++;
    }
    printf("\n");
}

void print2(char* C){   // same as char C[]
    
    while(*C != '\0'){  
        printf("%c " , *C);  // getting value at address C
        C++;        // assigning the next address to the pointer to char by using pointer arithmetic as C --> pointer variable
    }
    printf("\n");
}

int main(){
    char C[20] = "Hello"; // using string literals so null terminator is implicit
    print(C); // same as &C[0]
    print2(C);
    return 0;
}