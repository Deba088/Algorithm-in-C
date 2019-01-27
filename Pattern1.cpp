//This code takes an integer value and output a pattern
/*  Input:4
    Output:   	
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n, a[100][100],i,j;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for(int c=0;c<n;c++)
    {
        for(j=c;j<(2*n)-c-1;j++)
        {
            a[c][j]=n-c;
        }
        for(i=c;i<(2*n)-c-1;i++)
        {
            a[i][2*n-c-2]=n-c;
        }
        for(j=c;j<(2*n)-c-1;j++)
        {
            a[2*n-c-2][j]=n-c;
        }
        for(i=c;i<(2*n)-c-1;i++)
        {
            a[i][c]=n-c;
        }
    }
    for(int k=0;k<2*n-1;k++)
    {
        for(int l=0;l<2*n-1;l++)
        {
            printf("%d ",a[k][l]);
        }
        printf("\n");
    }
    return 0;
}


