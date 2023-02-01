#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    fgets(string,100,stdin);
    int x,i=0;
    scanf("%d",&x);
    while(string[i] != '\0')
    {
        if(i%x == 0 && i != 0)
        printf("%c",string[i-1]);
        
        i++;
    }

    return 0;
}
