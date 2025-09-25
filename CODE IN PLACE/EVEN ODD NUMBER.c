#include <stdio.h>
int main(void)
{
	 int num;

    // Ask user to enter a number
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check If numer is even or odd by remainder 
    
    if (num % 2 == 0) {
        printf("%d is an Even Number\n", num);
        
    } else {
        printf("%d is an Odd Number\n", num);
    }

    return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
