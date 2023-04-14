#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int flag = 0;
    
    for(int i = 0 ; i < strlen(str) ; i++)
    {
        if(i > 0 && i < strlen(str)-2)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                if(str[i+2] == 'a' || str[i+2] == 'e' || str[i+2] == 'i' || str[i+2] == 'o' || str[i+2] == 'u')
                {
                    printf("%c",str[i+1]);
                    flag = 1;
                }
            }
        }
    }
    if(flag == 0)
    printf("%d",-1);
    return 0;
}
