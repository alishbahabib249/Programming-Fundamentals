#include <stdio.h>
#include <math.h>  // for sqrt()

int main(void) {
    float a, b, c, d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;   // discriminant

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        
        root2 = (-b - sqrt(d)) / (2*a);
        
        printf("Two real roots: %.2f and %.2f\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2*a);
        printf("One real root: %.2f\n", root1);
    } else {
        printf("No real roots (imaginary roots)\n");
    }

    return 0;
}
