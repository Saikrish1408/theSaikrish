//This is the program for the largest of 5 array elements

#include <stdio.h>
void main()
{
    int n[5],i,j,k,large;
    for( i=0 ; i<5 ; i++)
    {
        printf("Enter the array element: ");
        scanf("%d",&n);
    }
    large = n[0];
    for( j=1 ; j<5 ; j++)
    {
        if( large < n[j])
        {
            large = n[j];
        }
    }
    printf("The largest number is: %d",large);
}

