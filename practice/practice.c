#include <stdio.h>
int main (){
	
	int a,b,c;
	int max;
	
	//take input
	printf("Enter 3 numbers ");
	scanf("%d %d %d" , &a,&b,&c);
	
	//make the condition here 
	if(a>b && a>c)
		max = a;
		else if (b>a && b>c)
		max = b;
	else
		max = c;
	
	printf("The max of numbers is %d",max);
	
return 0;	
}
