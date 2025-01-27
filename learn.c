
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPalindrome(int x);

int main()
{
    int n;
printf("enter the integer:");
scanf("%d",&n);
 if( isPalindrome(n)==true)
    printf("its a palindrome");
 else
    printf("its not a palindrome");
 return 0;

}

bool isPalindrome(int x)
{

    int remin=0,last,original=x;
 
 if(x<=0)
    {
      return false;
    }
  

    while(x>0)
    {

      last=x%10;//to find the last value
      remin=remin*10+last;
      x/=10;//to eleminate the last value
    }
       return remin==original;
}

