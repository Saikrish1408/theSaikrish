#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&n);
    
    for(int i = 1 ; i <= n; i++)
    {
        int count = 1;
        static int num = 1;
        for( ; count <= i ; ){
        printf("%d ",num++);
        count++;
        }
        
        printf("\n");
    }

    return 0;
}
