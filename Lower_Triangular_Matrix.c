#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the Number of Rows and Columns: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the Elements: \n");
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        scanf("%d",&a[i][j]);
    }
    
    printf("Pattern\n");
    for (int i = 0; i < n; i++) 
    {
        for(int j = 0 ; j < (i+1) ; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
