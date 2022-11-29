#include<stdio.h>
int main(void){
  struct camels{
  float radius;
  float height;
  float length;
  float weight;
  };
  int n;
  int i;
  float w_truck;
  printf("Enter the number of camels:\n");
  scanf("%d",&n);
  struct camels c[n];
  for (i=0;i<n;i++){
    printf("Enter the Height of Camel: %d\n",i+1);
    scanf("%f",&c[i].height);
    printf("Enter the Length of Camel: %d\n",i+1);
    scanf("%f",&c[i].length);
    printf("Enter the Radius of Camel: %d\n",i+1);
    scanf("%f",&c[i].radius);
  }
  printf("Enter the weight of the Truck\n");
  scanf("%f",&w_truck);
  float t_weight=0;
  float t_height=0;
  float t_length=0;
  float t_radius=0;
  char sqrt[n];
  float temp;
  float pi=3.1412;
  for (i=0;i<n;i++)
  {
    sqrt[i]=((c[i].height)*(c[i].length));
    while (temp!=sqrt[i]){
      temp=sqrt[i];
      sqrt[i]=(((c[i].height*c[i].length)/temp)+temp)/2;
    }
  }
  for (i=0;i<n;i++){
      t_weight=t_weight+(pi*(c[i].radius*c[i].radius*c[i].radius)*(sqrt[i]));
    }
  t_weight=t_weight+w_truck;
  printf("The Total weight of the Truck is: %f\n",t_weight);
  // return 0;
}