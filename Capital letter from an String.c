// Printing only the CAPITAL letter in a String


#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char string_input[50];
    printf("Enter the String: ");
    scanf("%s",&string_input);
    int string_lenght = strlen(string_input);
    for(i=0;i<string_lenght;i++)
    {
        if(string_input[i] >= 'A' && string_input[i] <= 'Z')
        {
            printf("%c",string_input[i]); 
        }
    }
    
    
    

    return 0;
}
