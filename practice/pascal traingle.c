 #include <stdio.h>
 int factorial(int x){
	int i;
    int fact = 1;
	for (i=2; i<=x; i++){
    fact = fact * i;
	}
	return fact;
}
 
    int combination(int n , int r){
    int ncr =  factorial(n)/(factorial(r)*factorial(n-r));
    return ncr ;
 }
 
  int main(){
	int n ;
	printf("Enter value of n ");
    scanf("%d", &n);
     int i;
     for(i=0; i<=n; i++){
     
     	int j;
     	for (j=0; j<=i; j++){
     		int icj = combination (i,j);
     		printf("%d ", icj);
		 }
		 	int k;
     	for (k=0; k<=n; k++){
     		printf ("\t");
		 }
		 printf("\n");
	 }
	
return 0;
}
