//To compare 3 numbers using pass by value

#include <stdio.h>
int main(void){
  int a,b,c, large;
  a=input();
  b=input();
  c=input();
  large=compare(a,b,c);
  output(a,b,c,large);
  return 0;
}

int input()
{
  int a;
  printf("Enter number \n");
  scanf("%d ",&a);
  return a;
  }

int compare(int a, int b, int c, int large)
{
  int large;
  if((a>b)&&(a>c))
  {large=a;}
  else if((b>a)&&(b>c))
    {large=b;}
  else if((c>a)&&(c>b))
    {large=c;}
  return large;

  }

void output(int a, int b, int c,int large)
{
  printf("%d is largest among %d, %d, and %d",large,a,b,c);
}
