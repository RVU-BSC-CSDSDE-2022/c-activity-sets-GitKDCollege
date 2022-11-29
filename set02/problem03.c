#include<stdio.h>
int main(void){
  struct Animal{
  float height;
  float length;
  float stomach_radius;
  float weight;
  };
  struct Animal camel; 
  float pi=3.1415;
  float temp;
  float sqrt;
  printf("Enter the height of the Camel\n");
  scanf("%f",&camel.height);
  printf("Enter the length of the Camel\n");
  scanf("%f",&camel.length);
  printf("Enter the radius of stomach of the Camel\n");
  scanf("%f",&camel.stomach_radius);
  sqrt=(camel.height*camel.length)/2;
  temp=0;
  while (temp!=sqrt){
    temp=sqrt;
    sqrt=(((camel.height*camel.length)/temp)+temp)/2;
  }
  camel.weight=pi*(camel.stomach_radius*camel.stomach_radius*camel.stomach_radius)*sqrt;
  printf("The weight of the Camel with radius of the stomach:%.2f, height:%.2f, and length:%.2f is %.4f\n",camel.stomach_radius,camel.height,camel.length,camel.weight);
  return 0;
}