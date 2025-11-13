//LeetCode 136 — Single Number

#include <stdio.h>

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int n = 5;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("Single number = %d", nums[i]);
            return 0;
        }
    }
}



