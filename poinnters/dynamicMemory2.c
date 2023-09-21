#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements of array: ");
    scanf("%d" , &n);
    //int* a = (int*)malloc(n * sizeof(int)); // no initialized memory block
    int* a = (int*)calloc(n , sizeof(int)); // --> initial memory value --> 0
    int arr[*a];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , (arr + i));
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d " , *(arr + i));
    }
    free(a); // pass the starting address of the memory block as argument --> frees the memory block
    // for(int i = 0 ; i < n ; i++){
    //     printf("%d " , *(arr + i));
    // }
    printf("\n");
    return 0;
}