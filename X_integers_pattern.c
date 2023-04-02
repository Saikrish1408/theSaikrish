//X INTEGERS PATTERN IN C 

#include <stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int check=1,count=0;
    for(int i = 1 ; i <= x ; ++i ,check = (count*2) ,count=0)
    {
        int temp = n * i;
        for(int j = 1 ; j <= check ; j++)
        {
            printf("%d ",temp++);
            count+=1;
        }
        printf("\n");
    }
}


// INPUTS
// N = 8 
// X = 5
// OUTPUT
// 8 
// 16 17 
// 24 25 26 27 
// 32 33 34 35 36 37 38 39 
// 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 
