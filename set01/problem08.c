// Store the user input in array and find the sum of array

#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main(void)
{
  int n;
  int sum;
  n=input_array_size();
  int a[n];
  sum=0; 
  input_array(n,a);
  sum=sum_n_array(n,a);
  output(n,a,sum);
  return 0;
}
int input_array_size()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  printf("Enter the numbers\n");
  for (i=0;i<n;i=i+1)
    {
      scanf("%d",&a[i]);
    }
  
}
int sum_n_array(int n, int a[n])
{
  int i;
  int sum;
  sum=0;
  for (i=0;i<n;i=i+1)
    {
    sum=sum+a[i];
    }
  return sum;
}
void output(int n, int a[n],int sum)
{
  int i=0;
  for(i=0;i<n;i++)
    {
    printf("%d+", a[i]);
    }
  printf("is %d", sum);
}

//Without Functions
// #include <stdio.h>
// int main(void)
// {
//   int i;
//   int n;
//   int a[n];
//   int sum;
//   sum=0;
//   printf("Enter the size of the array\n");
//   scanf("%d",&n);
//   printf("Enter the numbers\n");
//   for (i=0;i<n;i=i+1)
//     {
//     scanf("%d",&a[n]);
//     sum=sum+a[n];
//     }
// printf("The sum of the numbers is %d",sum)  ;
// return 0;
// }




