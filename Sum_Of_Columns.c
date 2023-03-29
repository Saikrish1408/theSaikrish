#include <stdio.h>
int main()
{
    int r,c,sum = 0,count = 0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    
    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        scanf("%d",&a[i][j]);
    }
    
    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            if(i == 0 && a[i][j]%2 != 0)
            {
                for(int k = i ; k < r ; k++)
                sum += a[k][j];
            }
            else if(i == 0 && a[i][j]%2 == 0)
            count++;
        }
        if(i > 0)
        break;
    }
    if(count == c)
    printf("-1");
    else
    printf("%d",sum);

    return 0;
}
