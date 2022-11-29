#include<stdio.h>
int main(void){
  struct distance{
  float x;
  float y};
  struct distance d[2];
  int i=1;
  float cal;
  float temp;
  float sqrt;
  float res;
  for (i=1;i<3;i++){
    printf("Enter the x co-ordinate of point %d\n",i);
    scanf("%f",&d[i].x);
    printf("Enter the y co-ordinate of point %d\n",i);
    scanf("%f",&d[i].y);
    printf("The point %d is (%.1f,%.1f)\n", i, d[i].x, d[i].y);
  }
  cal=(((d[2].x-d[1].x)*(d[2].x-d[1].x)) + ((d[2].y-d[1].y)*(d[2].y-d[1].y)));
  sqrt=(cal/2);
  temp=0;
  while (temp!=sqrt){
    temp=sqrt;
    sqrt=((cal/temp)+temp)/2;
  }
  res=sqrt;
  printf("The distance between the entered two points is %.2f units\n",res);
  return 0;
}