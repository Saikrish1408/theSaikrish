#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
    scanf("%s",s);
    
    int i = 0, sum = 0;
    
    while(s[i] != '\0')
    {
        s[i] = tolower(s[i]);
        int a = (int)s[i] - 96;
        sum += a;
        
        i++;
    }
    
    printf("%d",sum);

    return 0;
}


//Bangalore
//output: 75
