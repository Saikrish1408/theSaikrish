#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            if(i == n)
            {
                printf("YES");
                break;
            }
            if(i != n)
            {
                printf("NO");
                break;
            }
        }
    }
    
    

    return 0;
}
