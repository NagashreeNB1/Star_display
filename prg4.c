#include<stdio.h>
#include<string.h>

void vshape(char b[])
{
  int len,i,j,s,right,left;
  len=strlen(b);


for(i=0;i<len;i++)
{
  for(j=0;j<i;j++)
  {
    printf(" ");
  }
  printf("%c",b[i]);
  right=len-1;
  for(j=0;j<2*(right-i)-1;j++)
  {
    printf(" ");
  }
    

printf("\n");

}


}


void main()
{
  char a[10];
  int i,j;
  printf("Enter the string");
  scanf("%s",a);
  vshape(a);
  
}