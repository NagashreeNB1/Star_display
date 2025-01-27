#include<stdio.h>

int displayStarReverse(int n);

int main()
{
int num;
printf("Enter the number of lines to be printed:");
scanf("%d",&num);
displayStarReverse(num);
return 0;
}

int displayStarReverse(int n)
{
    int i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {


            printf(" ");

        }
    for(k=1;k<=2*i-1;k++)
    {
        printf("*");
    }
 printf("\n");
    }
    return 0;
}

