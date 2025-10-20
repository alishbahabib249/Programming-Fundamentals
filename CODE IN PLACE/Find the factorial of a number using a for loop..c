#include <stdio.h>

int main() {
    int n;
    long long factorial = 1; 

    printf("Enter a number: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
    	int i;
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
