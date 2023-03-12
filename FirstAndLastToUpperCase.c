#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char s[200];
    fgets(s,200,stdin);
    int l = strlen(s)-1;
    int i=0;
    while(s[i]!='\0')
    {
        if(i == 0)
        s[i] = toupper(s[i]);
        else if(s[i] != ' ' && s[i+1] == ' ')
        s[i] = toupper(s[i]);
        else if(s[i-1] == ' ' && s[i] != ' ')
        s[i] = toupper(s[i]);
        else if(s[i+1] == '\n')
        s[i] = toupper(s[i]);
        

        i++;
    }
    printf("%s",s);

    return 0;
}


// Test Case: 1
  
// i love c program
// I LovE C PrograM
  
//  Test Case: 2

// hello world
// HellO WorlD
