/*Experiment 6: Array
6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively.
Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the
compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility*/

#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q, i, j, k;

    printf("Name   : vinayak\n");
    printf("SAP_ID : 590029509\n");
    printf("Course : BCA\n");
    printf("Batch  : 5\n");
    printf("-----------------------------\n\n");

    printf("Enter the order of matrix A (rows and columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter the order of matrix B (rows and columns): ");
    scanf("%d %d", &p, &q);

    if (n != p)
    {
        printf("\nMatrix multiplication is NOT possible.\n");
        printf("Reason: Number of columns in A must be equal to the number of rows in B.\n");
        return 0;
    }

    printf("\nEnter elements of matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter elements of matrix B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);


    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            printf("%4d", B[i][j]);
        printf("\n");
    }

    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }

    return 0;
}

