#include <stdio.h>

int main()
{
    char s[1000];
    fgets(s,100,stdin);
    int i=0,a_count=0,e_count=0,i_count=0,o_count=0,u_count=0;
    
    while(s[i] != '\0')
    {
        if(s[i] == 'a')
        a_count++;
        else if(s[i] == 'e')
        e_count++;
        else if(s[i] == 'i')
        i_count++;
        else if(s[i] == 'o')
        o_count++;
        else if(s[i] == 'u')
        u_count++;
        
        i++;
    }
    printf("a %d\n",a_count);
    printf("e %d\n",e_count);
    printf("i %d\n",i_count);
    printf("o %d\n",o_count);
    printf("u %d\n",u_count);
    
    
    
    return 0;
}
