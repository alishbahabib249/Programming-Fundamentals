#include <stdio.h>

int factorial (int x){
	int fact = 1;
	int i;
	for(i=2; i<=x; i++){
		fact = fact * i;
		}
		return fact;
}
int main (){
	int n;
	printf("Enter the value of n ");
	scanf("%d", &n);
	int r;
	printf("Enter the value of r ");
	scanf("%d", &r);
	
   int nfact = factorial(n);
   int rfact = factorial(r);
   int nrfact = factorial(n-r);
   int npr;
   npr = factorial(n)/factorial(n-r);
    
    printf("%d ", npr);
    
    return 0;
}
