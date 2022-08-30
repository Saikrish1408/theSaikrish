//Addition of 1D array elements in an array.
#include <stdio.h>
int main () 
{
    short arrvar[5],k,sum;
    for ( short j=0 ; j<5 ; j++ )
    {
        scanf("%hi",&arrvar[j]);
    }
    printf("The Addition of Array Elements\n");
    for ( short k=0 ; k<5 ; k++)
    {
        sum = 0;
        sum = sum + arrvar[k];
    }
    printf("%d",sum);
    
    return 0;
}
