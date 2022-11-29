#include<stdio.h>
int main(void){
  int n1;
  int n2;
  printf("Enter Number-1\n");
  scanf("%d",&n1);
  printf("Enter Number-2\n");
  scanf("%d",&n2);
  int i;
  int store;
  for (i=0;i<n2;i++){
    if (((n1)%(i+1)==0) && ((n2)%(i+1)==0)){
      store=i+1;
    }
  }
  printf("GCD(Greatest Common Divisor)/HCF(Highest Common Factor) of %d and %d is %d\n",n1,n2,store);
  return 0;
}