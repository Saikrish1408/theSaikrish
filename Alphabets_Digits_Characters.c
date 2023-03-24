#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
    scanf("%s",s);
    
    int i = 0;
    
    while(s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            printf("%c",s[i]);    
        i++;
    }
    
    i = 0;
    
    while(s[i] != '\0')
    {
        if(s[i] >= '0' && s[i] <= '9')
            printf("%c",s[i]);    
        
        i++;
    }
    
    i = 0;
    
    while(s[i] != '\0')
    {
        if((int)s[i] >= 33 && (int)s[i] <= 47 || (int)s[i] >= 91 && (int)s[i] <= 96 || (int)s[i] >= 58 && (int)s[i] <= 64)
            printf("%c",s[i]);
        
        i++;
    }
    
    
    return 0;
}
