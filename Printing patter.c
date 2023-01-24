//Output:
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// A B C D E 
// A B C D 
// A B C 
// A B 
// A





#include<stdio.h>
int main()
{
    int n;
    printf("Enter the NUmber of Rows: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",64+j);
        }
        printf("\n");
    }
}






