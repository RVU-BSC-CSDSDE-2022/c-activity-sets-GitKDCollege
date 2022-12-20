
#include<stdio.h>
int main(void){
    int i;
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    int str[n+1];
    for (i=0;i<n+1;i++){
        if (i==0){
            str[i]=0;
        }
        else if (i==1 || i==2){
            str[i]=1;
        }
        else{
            str[i]=str[i-1]+str[i-2];
        }
    }
    printf("%d\n",str[n]);
    return 0;
}