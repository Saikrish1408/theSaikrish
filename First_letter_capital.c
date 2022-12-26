#include <stdio.h>
int main()
{
    char string[20];
    fgets(string,20,stdin);
    int i=0;
    while(string[i] != '\0')
    {
        if(i == 0)
        {
            string[i] = toupper(string[i]);
        }
        if(string[i] == ' ')
        {
            string[i+1] = toupper(string[i+1]);
        }
        i++;
    }
    printf("%s",string);
}
