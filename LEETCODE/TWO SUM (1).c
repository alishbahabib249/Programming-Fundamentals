#include <stdio.h>

int main() {
    int n, target;

    // Step 1: Ask user for how many numbers
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int nums[n];  // create an array of that size

    // Step 2: Take array input
    printf("Enter %d numbers:\n", n);
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 3: Take target input
    printf("Enter target value: ");
    scanf("%d", &target);

    // Step 4: Find the two numbers that add up to target
  
    for ( i = 0; i < n; i++) {
    	int j;
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("The two numbers are %d and %d\n", nums[i], nums[j]);
                printf("Their indices are [%d, %d]\n", i, j);
                return 0; 
				}}}

    // Step 5: If no pair found
    printf("No pair found that adds up to the target.\n");
    return 0;
}

