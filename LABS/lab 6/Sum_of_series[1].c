#include<stdio.h>
int main()
{            //Sum of Series (1+1/4+1/8+1/12+....+1/400)

	float sum=0.0;
	int D=4;
	
	sum=1+sum;
	while(D<=400){
		
		sum=sum+1.0/D;
		D=D+4;	
	}
	 printf("Sum= %.3f\n",sum);
	return 0;
}
