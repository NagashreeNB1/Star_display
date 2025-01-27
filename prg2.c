#include<stdio.h>
#include<string.h>

void vshape(char b[])
{
  int len,i,j;
  len=strlen(b);

for(i=0;i<len;i++)
{
  for(j=0;j<i;j++)
  {
    printf(" ");
  }
  printf("%c",b[i]);
  for(j=0;j<2*(len-i-1)-1;j++)
  {
    printf(" ");
  }
    if(i!=len-1)
    {
      printf("%c",b[len-i-1]);
    }
  
  printf("\n");
}
}


void main()
{
  char a[10];
  printf("Enter the string");
  scanf("%s",a);
  vshape(a);
}