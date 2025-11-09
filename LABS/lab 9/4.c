#include <stdio.h>

void cubeByReference(int *nPtr) {
    *nPtr *= *nPtr * *nPtr;  // Cube the value at the pointer
}

int main(void) {
    int number = 5;  // Initialize the variable 'number'
    
    printf("Original value of number: %d\n", number);
    
    // Passing the address of 'number' to the function cubeByReference
    cubeByReference(&number);
    
    // Output the modified value of 'number'
    printf("New value of number after cubing: %d\n", number);
    
    return 0;
}

