#include <stdio.h>

int main(void)  

{
    float celsius, fahrenheit;

   
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    // Weather recommendations 
    
    if (celsius >= 30) {
        printf("It's hot! Stay hydrated and wear light clothes.\n");
        
    } else if (celsius >= 20 && celsius <= 29) {
        printf("Nice weather! Perfect for outdoor activities.\n");
        
    } else if (celsius >= 10 && celsius <= 19) {
        printf("Cool weather. Wear a light jacket.\n");
        
    } else if (celsius >= 0 && celsius <= 9) {
        printf("Cold! Wear warm clothes.\n");
        
    
    } else {
        printf("Freezing! Stay indoors and bundle up.\n");
        
    }

    return 0;
}
