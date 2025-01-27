/* Palindrome for integer */
#include<Stdio.h>
int palindrome(int num)
{
int original=num;
int reverse=0;
if(num<0)
    return 0;
while(num>0)
{

    int digital=num%10;//Exact the last number of the integer
    reverse=reverse*10+digital; //assigning the last value to reverse
    num/=10; //removing the last value;

}
return original==reverse;
}

int main()
{
int n;
printf("Enter the integer to check whether Palindrome or not:");
scanf("%d",n);// integer to check palindrome or


{
if (palindrome(n))
    printf("Integer is Palindrome%d",n);
else
    printf("Integer is not Palindrome%d",n);
}
return 0;
}

