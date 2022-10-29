#include <stdio.h>
int main()
{
    int i,j,t,n;
    printf("Enter the Number of Elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Sorted Array: \n");
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0 && a[j]>t)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
    for(i=0;i<n;i++)
    {
        printf("Element %d: %d\n",i+1,a[i]);
    }
    
    return 0;
}

