#include <stdio.h>

int main() {
    int n, steps = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        if(n % 2 == 0)
            n = n / 2;
        else
            n = n - 1;

        steps++;
    }

    printf("Steps = %d", steps);

    return 0;
}

