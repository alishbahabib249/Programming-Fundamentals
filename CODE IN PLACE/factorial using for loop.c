
#include <stdio.h>

int main(){
	
	int num;
	long long factorial = 1;
	
	
	printf("Enter a number:\n");
	scanf("%d" , &num);
	
	
	if (num < 0){
	printf("Factorial of a negative number do not exist\n");
		}
	
	else{
		int i;
		for ( i = 1; i <= num; i++) {
            factorial *= i; }
            
            printf("Factorial of %d is %11d\n" , num, factorial);
            
            return 0;
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
