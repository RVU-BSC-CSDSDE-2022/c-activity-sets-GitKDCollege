#include<stdio.h>
int main(void){
  float height;
  float length;
  float stomach_radius;
  int mood;
  printf("Enter the radius of stomach of the Camel\n");
  scanf("%f",&stomach_radius);
  printf("Enter the height of the Camel\n");
  scanf("%f",&height);
  printf("Enter the length of the Camel\n");
  scanf("%f",&length);
  if ((stomach_radius<height) && (stomach_radius<length)){
    mood=-1;
  }
  else if((height<length) && (height<stomach_radius)){
    mood=0;
  }
  else if((length<height) && (length<stomach_radius)){
    mood=1;
  }
  if (mood=-1){
    printf("The Camel is Sick\n");
  }
  else if(mood=0){
    printf("The Camel is Happy\n");
  }
  else if(mood=1){
    printf("The Camel is Tense\n");
  }
  return 0;
}
