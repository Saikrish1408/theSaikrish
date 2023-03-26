#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    
    int a[r][c], b[r][c];
    for (int i = 0; i < r ; i++) 
    {
        for(int j = 0 ; j < c ; j++)
        scanf("%d",&a[i][j]);
    }
    
    for (int i = 0; i < r ; i++) 
    {
        for(int j = 0 ; j < c ; j++)
        scanf("%d",&b[i][j]);
    }
    
    for(int  i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            if(a[i][j] == b[i][j])
            printf("T ");
            else
            printf("F ");
        }
        printf("\n");
    }
    
    
    return 0;
}
