#include <stdio.h>

int main()
 {
    int a, b, c;
    
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

        // check if this is a valid triangle
       if (a + b > c && a + c > b && b + c > a) {
        
       
        if (a == b && b == c) 
		{
            printf("Equilateral Triangle\n"); // all sides equal
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n"); // any two sides equal
        }
        else {
            printf("Scalene Triangle\n"); // all sides different
        }
    } 
    else {
    	
        printf("Not a valid triangle\n"); // fails triangle rule
    }

    return 0;
    
}
