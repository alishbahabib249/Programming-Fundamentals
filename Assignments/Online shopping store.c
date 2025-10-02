#include <stdio.h>

int main(){
	
	float cost;
    float discount = 0;
	float saved;
	float Finalamount;
	
	
	printf("Enter the Cost : \n");
	scanf("%f" , &cost);
	
	  if (cost > 1999 && cost <= 4000) {
        discount = 0.20;   // 20%)
    }
    else if (cost > 4000 && cost <= 6000) {
        discount = 0.30;   // 30%
    }
    else if
	 ( cost > 6000 ) {
        discount = 0.50;   // 50%)
}

   saved = cost * discount;
   Finalamount = cost - saved;
   
   printf("Actual amount: %.2f\n", cost);
   printf("Saved Amount: %.2f\n" , saved);
   printf("Amount after discount: %.2f\n", Finalamount);
   
   return 0;
   
   

	
	
	
	
	
	
	
	
}
