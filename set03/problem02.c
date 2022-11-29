#include<stdio.h>
int main(void){
  int a;
  int b;
  int c;
  int isscalene;
  printf("Enter the Length of Side-1 of the Triangle\n");
  scanf("%d",&a);
  printf("Enter the Length of Side-2 of the Triangle\n");
  scanf("%d",&b);
  printf("Enter the Length of Side-3 of the Triangle\n");
  scanf("%d",&c);
  if ((a!=b)&&(a!=c)&&(b!=c)){
    isscalene=1;
  }
  else{
    isscalene=0;
  }
  if (isscalene==0){
    printf("The Triangle with sides %d, %d and %d is not Scalene\n",a,b,c);
  }
  else{
    printf("The Triangle with sides %d, %d and %d is Scalene\n",a,b,c);
  }
  return 0;
}

// #include<stdio.h>
// int input_side();
// int check_scalene(int a, int b, int c);
// void output(int a, int b, int c, int isscalene);

// int main(void){
//   int a;
//   int b;
//   int c;
//   int isscalene;
//   a=input_side();
//   b=input_side();
//   c=input_side();
//   isscalene=check_scalene(a,b,c);
//   output(a,b,c,isscalene);
//   return 0;
// }

// int input_side(){
//   int n;   
//   printf("Enter the Length of Side-1 of the Triangle\n");
//   scanf("%d",&n);
// }

// int check_scalene(int a, int b, int c){
//   int isscalene;
//   if ((a!=b)&&(a!=c)&&(b!=c)){
//      isscalene=1;
//   }
//   else{
//      isscalene=0;
//   }
//   return isscalene;
// }

// void output(int a, int b, int c, int isscalene){
//   if (isscalene==0){
//      printf("The Triangle with sides %d, %d and %d is not Scalene\n",a,b,c);
//   }
//   else{
//      printf("The Triangle with sides %d, %d and %d is Scalene\n",a,b,c);
//   }
// }