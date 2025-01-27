#include<stdio.h>

int displayStar(int n);
int displayStarReverse(int n);

int main()
{
    int num;
    printf("Enter the number of line to be displayed:");
    scanf("%d",&num);
    displayStar(num);
    displayStarReverse(num);

    return 0;
}
int displayStar(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1)&& j<=n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
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
