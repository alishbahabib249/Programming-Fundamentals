#include <stdio.h>

int cube(int x) // function returns cube
{
    return x * x * x;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = cube(num); // calling the function

    printf("Cube of %d is %d\n", num, result);

    return 0;
}

