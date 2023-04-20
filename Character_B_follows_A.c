#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],a,b;
    scanf("%s\n",str);
    scanf("%c\n",&a);
    scanf("%c",&b);
    int count = 0;
    for(int i = 0 ; i < strlen(str)-1 ; i++)
    {
        if(str[i] == a)
        {
            if(str[i+1] == b)
            count = count + 1;
        }
    }
    printf("%d",count);
    
}


