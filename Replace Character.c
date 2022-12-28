#include <stdio.h>
#include <stdlib.h>
int main()
{
    char string[50],Replace_character,Replacement_character;
    printf("Enter the String: ");
    fgets(string,50,stdin);
    printf("Enter the Character to be Replaced and The Replaced Character: \n");
    scanf("%c\n",&Replace_character);
    scanf("%c",&Replacement_character);
    int i=0;
    while(string[i] != '\0')
    {
        if(string[i] == Replace_character)
        {
            string[i] = Replacement_character;
        }
        i++;
    }
    printf("The Updated String is: %s ",string);
    return 0;
}
