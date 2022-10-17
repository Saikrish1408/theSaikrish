//Bubble Sort using Pointers

#include <stdio.h>
int swap(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}
int main()
{
    int i,j,temp,n,f=0;
    printf("Enter the Number of Elements in the Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array Elements: \n");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The Sorted Elements are: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            f = 0;
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                f = 1;
            }
        }
        if(f==0)
        {
                break;
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("Element %d: %d\n",i+1,a[i]);
    }
    printf("These are the Sorted Elements using Bubble Sort");
}

