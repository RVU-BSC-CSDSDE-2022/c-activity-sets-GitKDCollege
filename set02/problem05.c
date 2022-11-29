//Loop for the Numerator(Exponential)
// for (i=1;i=1;i=i){
//   num=num*x;
//   }

//Loop for Denominator(Factorial)
// for (i=x;i>0;i--){
//   den=den*i;
//   }









#include<stdio.h>
int main(void){
    int x;
    printf("Enter x: \n");
    scanf("%d",&x);
    float num=1;
   float den;
    float sum=0;
    int i=1;
    int j=1;
    while (i>0){
        den=1;
        for (j=1;j<((2*i)+2);j++){
            den=den*j;
        }
        num=num*x;
        // printf("%d",num);
        // printf("%d",den);
      // printf("%f\n",num/den);
        if ((num/den)>0.000001){
            // printf("Hello");
            sum=sum+(num/den);
            i=i+1;
        }
        else{
            break;
        }
    }
    printf("%f",1+sum);
    return 0;
}