#include<stdio.h>
int main(void){
  float height;
  float length;
  float stomach_radius;
  float pi=3.1415;
  float temp;
  float sqrt;
  float weight;
  printf("Enter the height of the Camel\n");
  scanf("%f",&height);
  printf("Enter the length of the Camel\n");
  scanf("%f",&length);
  printf("Enter the radius of stomach of the Camel\n");
  scanf("%f",&stomach_radius);
  sqrt=(height*length)/2;
  temp=0;
  while (temp!=sqrt){
    temp=sqrt;
    sqrt=(((height*length)/temp)+temp)/2;
  }
  weight=pi*(stomach_radius*stomach_radius*stomach_radius)*sqrt;
  printf("The weight of the Camel with radius of the stomach:%.2f, height:%.2f, and length:%.2f is %.4f\n",stomach_radius,height,length,weight);
  return 0;
}