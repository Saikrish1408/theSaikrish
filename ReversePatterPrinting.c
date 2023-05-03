#include <stdio.h>
#include <string.h>
int main()
{
    int n,num = 0;
    scanf("%d",&n);
    int row = 1, start = 15 , column = 1;
    
    for(int i = n ; i >= 1 ; i--)
    {
        column = 0;
        num = 5;
        for(int j = start ; column < i ; j-=(num--))
        {
            printf("%d ",j);
            column++;
        }
        printf("\n");
        start--;
    }
    return 0;
}




// input: 
// n = 5
//output
// 15 10 6 3 1 
// 14 9 5 2 
// 13 8 4 
// 12 7 
// 11 







