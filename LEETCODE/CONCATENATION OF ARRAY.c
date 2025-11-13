//LeetCode 1929 — Concatenation of Array
#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3};
    int n = 3;

    int ans[6];

    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    for (int i = 0; i < 2*n; i++)
        printf("%d ", ans[i]);

    return 0;
}

