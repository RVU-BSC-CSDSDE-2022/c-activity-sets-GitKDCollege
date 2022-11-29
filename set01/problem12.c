#include<stdio.h>
int main(void){
  struct problem{
  float realpart;
  float imgpart;
  };
  int inp;
  printf("Enter the number of complex numbers whose sum you want to find\n");
  scanf("%d",&inp);
  struct problem p[inp];
  int i=1;
  float sumr=0;
  float sumi=0;
  for (i=1;i<(inp+1);i++){
    printf("Enter the real part of complex number: %d\n",i);
    scanf("%f",&p[i].realpart);
    printf("Enter the imaginary part of complex number: %d\n",i);
    scanf("%f",&p[i].imgpart);
    printf("The complex number %d is %.2f + i(%.2f)\n",i,p[i].realpart,p[i].imgpart);
    sumr=sumr+p[i].realpart;
    sumi=sumi+p[i].imgpart;
  }
  printf("The sum of entered %d complex numbers is %.2f + i(%.2f)\n",inp,sumr,sumi);
  return 0;
}