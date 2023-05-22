#include <stdio.h>
#include <ctype.h>
int main()
{
    int n, count = 0;
    scanf("%d",&n);
    char ch = 'a';
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++,count++){
            if(count%2 == 0)
            printf("%c ",tolower(ch++));
            else
            printf("%c ",toupper(ch++));
            
            if((tolower(ch) > 'z') && count%2 == 0)
            ch = 'A';
            if((tolower(ch) > 'z') && count%2 != 0)
            ch = 'a';
        }
        printf("\n");
    }

    return 0;
}



// TEST CASE => 1
// INPUT - 4
// a 
// B c 
// D e F 
// g H i J 

// TEST CASE => 2
// INPUT - 8
// a 
// B c 
// D e F 
// g H i J 
// k L m N o 
// P q R s T u 
// V w X y Z a B 
// c D e F g H i J 


