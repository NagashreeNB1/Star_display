#include<Stdio.h>
void main()
{
    int i,j,k,a=1,b=1;

    for(i=0;i<=4;i++)
    {
        for(j=0;j<4-i;j++)
        {
      printf(" ");
      }
    for(k=0;k<=i;k++)
     {
        printf("* ");
        a++;
     }
   printf("\n");
}

}


