#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char string[100],ch;
    scanf("%s %c",string,&ch);
    int count = 0,i=0;
    
    while(string[i] != '\0')
    {
        if((i+1)%2 != 0 && string[i] == ch)
        count++;
        
        i++;
    }

    printf("%d",count);
    return 0;
}
