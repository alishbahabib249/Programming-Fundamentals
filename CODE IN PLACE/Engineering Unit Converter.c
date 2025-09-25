#include <stdio.h>

// program 4: Engineering Unit Converter

int main() 
{
    float watts, kilowatts;
    
    printf("Enter power in watts: ");
    scanf("%f", &watts);

    kilowatts = watts / 1000;

    printf("The power in kilowatts is: %.2f\n", kilowatts);
    return 0;
}
