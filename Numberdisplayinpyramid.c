#include<stdio.h>
#include<string.h>


void main()
{
int i,j,k,a=1;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
        printf("%d ",a);
        a++;
        }
       
        printf("\n");
    }
}