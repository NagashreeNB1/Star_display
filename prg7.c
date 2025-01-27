#include <stdio.h>
#include <string.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
float div(int num1, int num2);
void help(void);

void main()
{

  int a, b, i;

  while (1)
  {
    char *commandout;
    int commandindex = 0;
    char command[10];
    char var = '>';
    commandindex = 0;
    while ((var != '\n') && (var != '\r'))
    {

      scanf("%c", &var);
      command[commandindex] = var;
      commandindex++;
    }
    sscanf(command, "%s", commandout);

    int x = strcmp(commandout, "add");

    if ((strcmp(commandout, "help")) == 0)
    {
      help();
    }
    else if ((strcmp(commandout, "add")) == 0)
    {
      int num1, num2;
      sscanf(command, "%s %d %d", commandout, &num1, &num2);
      add(num1, num2);
    }
    else if ((strcmp(commandout, "sub")) == 0)
    {
      int num1, num2;
      sscanf(command, "%s %d %d", commandout, &num1, &num2);
      sub(num1, num2);
    }
    else if ((strcmp(commandout, "div")) == 0)
    {
      int num1, num2;
      sscanf(command, "%s %d %d", commandout, &num1, &num2);
      div(num1, num2);
    }
    else if ((strcmp(commandout, "mult")) == 0)
    {
      int num1, num2;
      sscanf(command, "%s %d %d", commandout, &num1, &num2);
      mult(num1, num2);
    }
    printf(">");
  }
}

void help(void)
{
  printf("comments supports \r\n");
  printf("Calucation: add sub div multiply");
}
int add(int num1, int num2)
{
  int output = num1 + num2;
  printf("Add:%d\n", output);
  return output;
}
int sub(int num1, int num2)
{
  int output = num1 - num2;
  printf("subtraction:%d\n", output);
  return output;
}
float div(int num1, int num2)
{
  float output = num1 - num2;
  printf("Dividion:%.2f\n", output);
  return output;
}
int mult(int num1, int num2)
{
  int output = num1 * num2;
  printf("Multiplication:%d\n", output);
  return output;
}