#include <stdio.h>
#include <conio.h>

int main ()

{
    int N, i, j, p, n;
    printf ( "To print all prime numbers between 1 to N\n" );
    printf ( "Enter the value of N\n" );
    scanf ("%d", &N);
    printf ( "Prime numbers between %d to %d\n", 1, N);

    for (i = 2; i <= N; i ++) {
        p = 0;

        for ( j = 2; j <= i/2; j++) {
            if ( i % j == 0) {
                p = 1;
                break;
            }
        }
        if ( p==0 && N!= 1)
            printf ( "%d, ", i );
    }
    getch ( );
    return 0;
}
