//LeetCode 2011 — Final Value After Operations
#include <stdio.h>

int main() {
    char ops[4][4] = {"--X", "X++", "++X", "X--"};
    int n = 4;
    int x = 0;

    for (int i = 0; i < n; i++) {
        if (ops[i][1] == '+')
            x++;
        else
            x--;
    }

    printf("%d", x);
    return 0;
}

