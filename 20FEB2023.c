#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  
  int lastDigit = n%10;
  
  while(n>=9)
  {
    n/=10;
  }
  
  printf("%d%d",n,lastDigit);

}
