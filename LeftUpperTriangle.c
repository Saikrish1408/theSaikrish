#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        int count = i;   
        for(int j=i;j<=n;j++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }
    

    return 0;
}



// Test Case 1:

// 7
// 1 2 3 4 5 6 7 
// 2 3 4 5 6 7 
// 3 4 5 6 7 
// 4 5 6 7 
// 5 6 7 
// 6 7 
// 7 


// Test Case 2:

// 4
// 1 2 3 4 
// 2 3 4 
// 3 4 
// 4 
