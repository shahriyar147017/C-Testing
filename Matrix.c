#include <stdio.h>
int main ()
{
    int A[50][50], B[50][50],C[50][50],r,c,o,i,j,k, sum;

    printf("Please enter the no of rows\n");
    scanf("%d", &r);
    printf("Please enter the no of columns\n");
    scanf("%d", &c);

    printf ("Please enter the first (A) matrix\n");

    for (i=0; i <r; i++) {
        for (j=0; j<c; j++) {
            scanf ("%d",&A[i][j]);
        }
    }

    printf ("Please enter the second (B) matrix\n");

    for (i=0; i <r; i++) {
        for (j=0; j<c; j++) {
            scanf ("%d",&B[i][j]);
        }
    }

    printf ("The value of first matrix is\n");
    for (i=0; i <r; i++) {
        for (j=0; j<c; j++) {
            printf ("%d\t",A[i][j]);
        }
    printf ("\n");
    }

    printf ("The value of second matrix is\n");
    for (i=0; i <r; i++) {
        for (j=0; j<c; j++) {
            printf ("%d\t",B[i][j]);
        }
    printf ("\n");
    }
    printf("Please select an operation\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Transpose\n");
    scanf("%d", &o);
    if (o == 1) {
        for (i=0; i<r; i++) {
            for (j=0; j<c; j++){
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        printf ("The summation of two matrix is\n");
        for (i=0; i <r; i++) {
            for (j=0; j<c; j++) {
                printf ("%d\t",C[i][j]);
            }
        printf ("\n");
        }
    }
    if (o == 2) {
        for (i=0; i<r; i++) {
            for (j=0; j<c; j++){
                C[i][j] = A[i][j] - B[i][j];
            }
        }

        printf ("The subtraction of two matrix is\n");
        for (i=0; i <r; i++) {
            for (j=0; j<c; j++) {
                printf ("%d\t",C[i][j]);
            }
        printf ("\n");
        }
    }

    if (o == 3) {
        for (i=0; i<r; i++) {
            for (j=0; j<c; j++){
                sum = 0;
                for (k=0; k<r; k++) {
                    sum = sum + A[i][k] * B[k][j];
                }
                C[i][j] = sum;
            }
        }

        printf ("The multiplication of two matrix is\n");
        for (i=0; i <r; i++) {
            for (j=0; j<c; j++) {
                printf ("%d\t",C[i][j]);
            }
        printf ("\n");
        }
    }

    if (o == 4) {
            int a;
        printf("Transpose of matrix\t 1. A or 2. B\n");
        scanf("%d", &a);

        if (a==1) {
            printf ("The transpose of matrix A is\n");
            for (i=0; i <r; i++) {
                for (j=0; j<c; j++) {
                    printf ("%d\t",A[j][i]);
                }
            printf ("\n");
            }
        }
        if (a==2) {
            printf ("The transpose of matrix A is\n");
            for (i=0; i <r; i++) {
                for (j=0; j<c; j++) {
                    printf ("%d\t",A[j][i]);
                }
            printf ("\n");
            }
        }
    }
    return 0;

}
