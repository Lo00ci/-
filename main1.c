#include <stdio.h>
#include <stdlib.h>
#include "P.h"

int main() {
    int n;
    int i;
    printf("Enter the size of the matrices: ");
    scanf("%d", &n);

    double* matrix1 = (double*) malloc(n * n * sizeof(double));
    double* matrix2 = (double*) malloc(n * n * sizeof(double));

    printf("Enter the values for matrix 1:\n");
    for (i = 0; i < n * n; i++) {
        scanf("%lf", &matrix1[i]);
    }
    printf("Enter the values for matrix 2:\n");
    for ( i = 0; i < n * n; i++) {
        scanf("%lf", &matrix2[i]);
    }
 char op;
 int k;
 int j;
    printf("Enter the operation (+, -, *): ");
    scanf(" %c", &op);

    double* result = matrix_operation(matrix1, matrix2, i, j, k, n , op);
    
    for ( i = 0; i < n * n; i++) {
        printf("%lf ", result[i]);
        if ((i + 1) % n == 0) {
            printf("\n");
        }
    }

    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
