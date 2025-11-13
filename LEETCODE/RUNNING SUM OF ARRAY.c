//LeetCode 1480 — Running Sum of Array
#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = 4;

    int running[4];
    running[0] = nums[0];

    for (int i = 1; i < n; i++) {
        running[i] = running[i - 1] + nums[i];
    }

    for (int i = 0; i < n; i++)
        printf("%d ", running[i]);

    return 0;
}

