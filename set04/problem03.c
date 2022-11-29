#include<stdio.h>
int main(void){
    int n;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    int i;
    int count=0;
    for (i=0;i<n;i++){
        if ((n)%(i+1)==0){
            count=count+1;
        }
    }
    if (count>2){
        printf("%d is a Composite Number\n",n);
    }
    else{
        printf("%d is not a Composite Number, infact it is a Prime Number\n",n);
    }
    return 0;
}