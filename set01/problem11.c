#include<stdio.h>
int main(void){
  struct problem{
  float realpart;
  float imgpart;
  };
  struct problem p[2];
  int i=1;
  float sumr=0;
  float sumi=0;
  for (i=1;i<3;i++){
    printf("Enter the real part of complex number: %d\n",i);
    scanf("%f",&p[i].realpart);
    printf("Enter the imaginary part of complex number: %d\n",i);
    scanf("%f",&p[i].imgpart);
    printf("The complex number %d is %.2f + i(%.2f)\n",i,p[i].realpart,p[i].imgpart);
    sumr=sumr+p[i].realpart;
    sumi=sumi+p[i].imgpart;
  }
  printf("The sum of two entered complex numbers is %.2f + i(%.2f)\n",sumr,sumi);
  return 0;
}