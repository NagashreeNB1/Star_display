#include<stdio.h>

void displayStar(int num)
{
int i,j;
for(i=0;i<=num;i++)
{
  for(j=0;j<=2*num-1;j++)
  {
    if(j>=num-(i-1)&& j<=num+(i-1))
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

}


int main()
{
int n;

printf("Enter the how about lines need to be printed:");
scanf("%d",&n);

displayStar(n);
return 0;

}
