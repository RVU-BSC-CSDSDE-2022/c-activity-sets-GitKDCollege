#include<stdio.h>
int main(void){
  float base;
  float height;
  float area;
  printf("Enter the Base of the Triangle\n");
  scanf("%f",&base);
  printf("Enter the Height of the Triangle\n");
  scanf("%f",&height);
  area=(0.5)*(base)*(height);
  printf("The area of the Triangle with Base: %f and Height: %f is %f\n",base,height,area);
}