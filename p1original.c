#include<stdio.h>
int input(int *a,int *b)
{
  printf("enter the value\n");
  scanf("%d%d",a,b);
}

int add(int a,int b,int *sum)
{
  *sum=a+b;
}

int output(int a,int b,int c)
{
  printf("sum of a b is %d+%d=%d",a,b,c);
}

int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}