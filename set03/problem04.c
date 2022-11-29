#include<stdio.h>
int main(void){
  int n;
  printf("Enter the size of the Array\n");
  scanf("%d",&n);
  int a[n];
  int i;
  int count=0;
  for (i=0;i<n;i++){
    printf("Enter the Number-%d of Array\n",i+1);
    scanf("%d",&a[i]);
  }
  int j;
  int sum=0;
  for (j=0;j<n;j++){
    count=0;
        // printf("%c\t",a[j]);
    for (i=0;i<a[j];i++){
        if ((a[j]%(i+1))==0){
            if (count>2){
              // printf("%d",sum);
            sum=sum+a[j];
            // printf("%d",sum);;
            break;}
            else{
            count=count+1;}
            // printf("%c\n",a[j]);
       }
     }
}
printf("The Sum of Composite Numbers in the Array is %d",sum);
  return 0;
}