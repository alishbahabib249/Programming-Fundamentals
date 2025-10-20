#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Pairs whose sum is even:\n");
int i;
    for ( i = 1; i <= n; i++) {
    	int j;
        for ( j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                printf("(%d,%d) ", i, j);
            }
        }
    }

    printf("\n");
    return 0;
}
