#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    // Ask user for the temperature in celsius
    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Add formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    
    return 0;

	
	
	
	
	
	
}
