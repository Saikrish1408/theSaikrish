#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);
    
    int i = 0;
    
    while(str[i] != '\0')
    {
        str[i] = tolower(str[i]);
        if(str[i+1] >= 'A' && str[i+1] <= 'Z')
        {
            printf("%c",str[i]);
            printf(" ");
        }
        else
        printf("%c",str[i]);
        
        i++;
    }

    return 0;
}
