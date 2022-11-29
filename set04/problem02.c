#include<stdio.h>
int main(void){
  float x1;
  float y1;
  float x2;
  float y2;
  float x3;
  float y3;
  int i;
  printf("Enter (x1,y1)\n");
  scanf("%f %f",&x1,&y1);
  printf("Enter (x2,y2)\n");
  scanf("%f %f",&x2,&y2);
  printf("Enter (x3,y3)\n");
  scanf("%f %f",&x3,&y3);
  float dist1;
  float dist2;
  float dist3;
  float sqrt1;
  float sqrt2;
  float sqrt3;
  float calc1;
  float calc2;
  float calc3;
  float temp1=0;
  float temp2=0;
  float temp3=0;
  calc1=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  sqrt1=calc1;
  while (temp1!=sqrt1){
    temp1=sqrt1;
    sqrt1=((calc1/temp1)+temp1)/2;
  }
  dist1=sqrt1;
  calc2=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
  sqrt2=calc2;
  while (temp2!=sqrt2){
    temp2=sqrt2;
    sqrt2=((calc2/temp2)+temp2)/2;
  }
  dist2=sqrt2;
  calc3=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
  sqrt3=calc3;
  while (temp3!=sqrt3){
    temp3=sqrt3;
    sqrt3=((calc3/temp3)+temp3)/2;
  }
  dist3=sqrt3;
  // printf("%f\n",dist1);
  // printf("%f\n",dist2);
  // printf("%f\n",dist3);
  if (dist1==0||dist2==0||dist3==0){
    printf("The points (%.1f,%.1f), (%.1f,%.1f) and (%.1f,%.1f) do not form a Triangle\n",x1,y1,x2,y2,x3,y3);
  }
  else{
    printf("The points (%.1f,%.1f), (%.1f,%.1f) and (%.1f,%.1f) form a Triangle\n",x1,y1,x2,y2,x3,y3);
  }
  return 0;
  
  
}