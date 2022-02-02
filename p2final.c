#include<stdio.h>
int input()
{
  int a;
  printf("enter any value\n");
  scanf("%d", &a);
  return a;
}
int cmp(int a, int b, int c)
{
  if (a>b && a>c)
  return a;
  else if (b>a && b>c)
  return b;
  else
  return c;
}
void output(int l)
{
  printf("the largest number is %d", l);
}
int main()
{
  int x, y, z, l;
  x=input();
  y=input();
  z=input();
  l=cmp(x,y,z);
  output(l);
  return 0;
}