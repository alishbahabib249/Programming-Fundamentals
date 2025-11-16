#include <stdio.h>

void readMatrix(int m[5][5], int r, int c) {
    int i, j;
    printf("Enter %d x %d values:\n", r, c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void multiply(int x[5][5], int y[5][5], int z[5][5], int rA, int cA, int cB) {
    int i, j, k;

    for (i = 0; i < rA; i++) {
        for (j = 0; j < cB; j++) {
            z[i][j] = 0;

            for (k = 0; k < cA; k++) {
                z[i][j] = z[i][j] + (x[i][k] * y[k][j]);
            }
        }
    }
}

void printMatrix(int m[5][5], int r, int c) {
    int i, j;

    printf("\nMatrix Output:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matA[5][5], matB[5][5], product[5][5];
    int rowsA, colsA, rowsB, colsB;

    printf("Size of Matrix A (rows columns): ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Size of Matrix B (rows columns): ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Error! Columns of A must match rows of B.\n");
        return 0;
    }

    printf("\n--- Matrix A Input ---\n");
    readMatrix(matA, rowsA, colsA);

    printf("\n--- Matrix B Input ---\n");
    readMatrix(matB, rowsB, colsB);

    multiply(matA, matB, product, rowsA, colsA, colsB);

    printf("\n--- Result (A × B) ---\n");
    printMatrix(product, rowsA, colsB);

    return 0;
}

