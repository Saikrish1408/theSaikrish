//Weather Today => Wipro

#include <stdio.h>
int main()
{
    int n,x,y,flag = 0;
    scanf("%d %d %d",&n,&x,&y);
    int array[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&array[i]);
        if(array[i] >= x && array[i] <= y)
        continue;
        else{
            printf("%d ",array[i]);
            flag = 1;
        }
    }
    if(flag == 0)
    printf("-1");
    return 0;
}
