#include <stdio.h>                          

int main(void) {
    
	int num;                             

    printf("Enter an 8-bit number (0-255): ");
    scanf("%d", &num);    
	                 

   
    if (num & 8) { 
	                         
          num = num & (~8);           
		           }

    
    if (num & 64) {                         
        num = num & (~64);                  
    }

    printf("Resulting number = %d\n", num); 
    
    return 0;
    
}
