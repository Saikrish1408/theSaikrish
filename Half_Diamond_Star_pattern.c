#include <stdio.h>
int main()
{
    int n,k;
    printf("Enter the Number of Rows: ");
    scanf("%d",&n);
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for(int i = n-1 ; i >= 1 ; i--)
    {
        for(int j = i ; j >= 1 ; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
