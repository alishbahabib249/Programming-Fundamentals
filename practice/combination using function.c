#include <stdio.h>
int factorial(int x){
	int i;
    int fact = 1;
	for (i=2; i<=x; i++){
    fact = fact * i;
	}
	return fact;
}
  
    int main(){
	int n ;
	printf("Enter value of n ");
	scanf("%d",&n);
	int r ;
	printf("Enter value of r ");
	scanf("%d",&r);
	
	int nfact = factorial(n);
	int rfact = factorial(r);
	int nrfact = factorial(n-r);
	
	int ncr =   factorial(n)/factorial(r)*factorial(n-r);
	printf("The factorial of a given no : %d\n", ncr);
	return 0;
}
	
