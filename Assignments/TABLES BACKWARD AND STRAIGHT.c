#include <stdio.h>

int main(void) {
   
    int i, j;

    for (i = 1, j = 10; i <= 10 && j >= 1; i++, j--)
	 {
        printf("2 x %d = %d\n"  , i, 2*i);
         printf("9 x %d = %d\n", j, 9*j); 
    }

    return 0;
}
