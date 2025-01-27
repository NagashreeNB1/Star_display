#include<stdio.h>

int main()
{
int count=0,n,temp,q,cnt;

printf("enter the integer:");
scanf("%d",&n);
q=n;
while(q!=0)
{
    q=q/10; //exclude the last number of the number
    count++;

}
cnt=count;
printf("%d",cnt);

}
