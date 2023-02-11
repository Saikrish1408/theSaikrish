#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    scanf("%s",string);
    int length = strlen(string);
    
    int middle = length/2;
    int count = 0;
    

    for(int index=middle;count<3;i++)
    {
        printf("%c",string[index-1]);
        count++;
    }
}
