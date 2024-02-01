#include<stdio.h>
void main() {
    int i,j,n=5;
    for ( i = 1; i <= n; i++ )
    {
        /* code */
        for ( j = i; j < n; j++ )
        {
            /* code */
            printf(" ");
        }

        for ( j = 1; j <= i; j++ )
        {
            /* code */
            if ( j == 1 || j%2 != 0 )
            {
                /* code */
                printf("*");
            }
            else
            {
                /* code */
                printf(" ");
            }
        }
        for ( j = 2; j <= i; j++ )
        {
            /* code */
            if ( i == j || i%2 != 0 && j%2 != 0 || j == 2 && i%2 == 0 )
            {
                /* code */
                printf("*");
            }
            else
            {
                /* code */
                printf(" ");
            }
        }

        printf("\n");
        
    }
    
}