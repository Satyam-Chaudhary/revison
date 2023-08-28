//character arrays and pointers
#include<stdio.h>
#include<string.h>
int main(){
    char C[20];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0'; //null terminator is must at end to know the character array when the string ends
    printf("%s\n" , C); // %s --> to print string
    int len = strlen(C);
    printf("Size in bytes --> %lu\n" , (unsigned long)sizeof(C)); // 1 more than length as it counts the null terminator
    printf("Length --> %d\n" , len); //counts till it sees a null character //strlen --> to know the length of string

    char C2[5] = {'J' , 'O' , 'H' , 'N' , '\0'}; // can be declared and initialized like this as well need to explictly tell about the null terminator
    printf("%s\n" , C2); 
    int lenC2 = strlen(C2);
    printf("Size in bytes --> %lu\n" , (unsigned long)sizeof(C2));
    printf("Length --> %d\n" , lenC2); 

    char Name[20] = "SATYAM CHAUDHARY"; //using string literals // need to be declared and initialized in one line // and null terminator is implicit
    printf("Name --> %s\n" , Name);
    int len2 = strlen(Name);
    printf("Size in bytes --> %lu\n" , (unsigned long)sizeof(Name));
    printf("Length of Name --> %d\n" , len2);

    char Name2[] = "Shivam Kumar"; // we can avoid to write size it will automatically get the size + 1(null terminator)
    printf("Name2 --> %s\n" , Name2);
    int len3 = strlen(Name2);
    printf("Size in bytes --> %lu\n" , (unsigned long)sizeof(Name2));
    printf("Length of Name --> %d\n" , len3);
    return 0;
}