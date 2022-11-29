#include<stdio.h>
int main(void){
  int i;
  int sum=0;
  int count=0;
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  int arr[n];
  float res;
  for (i=0;i<n;i++){
    printf("Enter the number %d of array\n",i+1);
    scanf("%d",&arr[i]);
  }
  for (i=0;i<n;i++){
    if ((arr[i]%2)!=0){
      sum=sum+arr[i];
      count=count+1;
    }
    else{
      continue;
    }
  }
  res=sum/count;
  printf("The average of the odd elements in the array is %f",res);
  return 0;
}