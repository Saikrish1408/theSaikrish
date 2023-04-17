#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100];
    scanf("%s",string);
    int count = 0;
    for(int i = 0 ; i < strlen(string)-1 ; i++)
    {
        int var2 = (int)string[i+1];
        if((int)string[i] == (var2-1))
        count++;
    }
    printf("%d",count);

    return 0;
}

