#include <stdio.h>

int main()

{
    int c1, c2, r1, r2, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

	int a[r1][c1], b[r2][c2], c[r1][c2];

    if (c1 != r2)
        {
            printf("Error! Column of the first matrix is not equal to the row of second matrix. \n");
            printf("Enter rows and columns for first matrix: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter rows and columns for second matrix: ");
            scanf("%d %d", &r2, &c2);
        }

    printf("Please Enter the first matrix\n");

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            printf("Enter the element A%d%d\t", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Please Enter the second matrix\n");
    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf("Enter the element B%d%d\t", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix A is as follows:\n");

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            printf("%d\t", a[i][j]);
        }

        printf("\n");

    }

    printf("Matrix B is as follows:\n");
    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf("%d\t", b[i][j]);
        }

        printf("\n");

    }

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            for (k=0; k<c1; k++)
            {
                c[i][j] += a[i][k]* b[k][j];
            }
        }
    }
   printf("Multiplication of two matrices is as follows:\n");

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf("%d\t", c[i][j]);

            if (j == c2-1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
