#include <stdio.h>
int main()
{
    int n,i,j,target,flag = 1,sum;
    printf("Enter the Number of the Elements in an Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array Elements:  \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Target Element: ");
    scanf("%d",&target);
    printf("The Target can be added in the Given Array\n");
    for(i=0;i<n;i++)
    {
        sum = a[i] + a[i+1];
        if(sum == target)
        {
            printf("Elements are %d and %d ",a[i],a[i+1]);
            printf("\n");
        }
        flag = 0;
    }
    if(flag == 1)
    {
        printf("May be you have entered the Same element you have given");
    }
    
    return 0;
}


