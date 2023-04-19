#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char string[100],ch;
    scanf("%s",string);
    int x,y;
    scanf("%d %d",&x,&y);
    int len = strlen(string)-y;
    for(int i = x ; i < len ; i++)
    {
        printf("%c",string[i]);
    }
    return 0;
}

