#include <stdio.h>
int main()
{

    int i = 0;
    int res = ++i; // PRE INCREMENT -->  the value of the variable is increased by 1 before it's used in the current expression.
    // i is 6 and res becomes 6
    printf("%d\n", res);
    int k = 0;
    int res2 = k++; // POST INCREMENT --> the value of the variable is used in the current expression before it's increased by 1.
    // res2 is 5 and k becomes 6 after assignment
    printf("%d\n", res2);

    printf("\n");


    printf("Post-increment:\n");
    for (int i = 0; i < 5; i++) {
        printf("Before: %d\n", i);  // Print the value before increment
        printf("After: %d\n", i++); // Print the value before increment, then increment
    }

    printf("\nPre-increment:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Before: %d\n", i);  // Print the value before increment
        printf("After: %d\n", ++i); // Increment, then print the value after increment
    }

    return 0;
}



