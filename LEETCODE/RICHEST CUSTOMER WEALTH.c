//LeetCode 1672 — Richest Customer Wealth
#include <stdio.h>

int main() {
    int accounts[3][3] = {
        {1, 2, 3},
        {3, 2, 1},
        {4, 5, 6}
    };

    int rows = 3, cols = 3;
    int max = 0;

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += accounts[i][j];
        }
        if (sum > max) max = sum;
    }

    printf("Maximum wealth = %d", max);
    return 0;
}

