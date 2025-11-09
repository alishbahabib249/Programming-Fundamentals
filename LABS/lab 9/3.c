#include<stdio.h>

int main()
{
    int arr[3];      // Declare array of size 3
    int *ptr = arr;  // Initialize pointer to the first element of the array
    int i;           // Declare loop iterator variable

    // Fill the array with values using pointer notation
    for (i = 0; i < 3; i++) {
        *(ptr + i) = i + 1;  // Assign value i+1 to each element
    }

    // Print values of all array elements using pointer notation
    printf("\nDisplaying values using pointers:\n");
    for (i = 0; i < 3; i++) {
        printf("%d\n", *(ptr + i));  // Dereference pointer to print each element
    }

    // Print addresses of all array elements using pointer notation
    printf("\nDisplaying addresses using pointers:\n");
    for (i = 0; i < 3; i++) {
        printf("%p\n", (ptr + i));  // Print the address of each element
    }

    return 0;
}

