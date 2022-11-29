#include<stdio.h>
int main(void){
  struct _triangle{
  float base;
  float altitude;
  float area;
  };
  struct _triangle Triangle;
  printf("Enter the Base of the Triangle\n");
  scanf("%f",&Triangle.base);
  printf("Enter the Altitude of the Triangle\n");
  scanf("%f",&Triangle.altitude);
  Triangle.area=(0.5)*(Triangle.base)*(Triangle.altitude);
  printf("The area of Triangle with base= %f and altitude= %f is %f\n",Triangle.base,Triangle.altitude,Triangle.area);
  return 0;
}