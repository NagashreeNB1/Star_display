#include<stdio.h>

int Palindrome(int n);

int main()
{
    int num;
    printf("Enter the integer");
    scanf("%d",&num);
   if (Palindrome(num))
   {
       printf("Number is palindrome");
   }
   else
   {


   printf("Number is not palindrome");
    return 0;
   }
}

int Palindrome(int n)
{
    int reverse=0,mid,original=n;

    if(n<=0)
    {
        printf("Enter number is not valid\n");
        //Number should be greater Zero
    }
   while (n>0)
    {
        mid=n%10;//we receive the last number
        reverse=reverse*10+mid; //assign the last number to reverse
        n/=10;//delete the last number
    }
    return reverse==original;
}
