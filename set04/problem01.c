#include<stdio.h>
int main(void){
  float x1;
  float x2;
  float y1;
  float y2;
  printf("Enter (x1,y1)\n");
  scanf("%f %f",&x1,&y1);
  // printf("%f %f",x1,y1);
  printf("Enter (x2,y2)\n");
  scanf("%f %f",&x2,&y2);
  float distance;
  float temp=0;
  float calc;
  float sqrt;
  calc=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  sqrt=calc;
  while (temp!=sqrt){
    temp=sqrt;
    sqrt=((calc/temp)+temp)/2;
  }
  distance=sqrt;
  printf("The distance between the points (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
  return 0;
}