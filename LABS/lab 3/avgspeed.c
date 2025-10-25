// average speed
#include <stdio.h>

int main()
{
    float d1,d2,d3,d4,d5,time,avgSpeed;
    printf("Car Average Speed Calculator!!!\n");
    printf("Distance can never be in negative!\n");
    printf("Enter distance1:");
    scanf("%f",&d1);
    printf("Enter distance2:");
    scanf("%f",&d2);
    printf("Enter distance3:");
    scanf("%f",&d3);
    printf("Enter distance4:");
    scanf("%f",&d4);
    printf("Enter distance5:");
    scanf("%f",&d5);
    printf("Enter the time you travelled in (1 to 5):");
    scanf("%f",&time);
	    time == 1?avgSpeed = (d1)/time:
	    time == 2?avgSpeed = (d1+d2)/time:
	    time == 3?avgSpeed = (d1+d2+d3)/time:
	    time == 4?avgSpeed = (d1+d2+d3+d4)/time:
	    time == 5?avgSpeed = (d1+d2+d3+d4+d5)/time:
    printf("Enter correct time\n");
    printf("The Average Speed of your car is:%f",avgSpeed);printf("Program ended!");
}
