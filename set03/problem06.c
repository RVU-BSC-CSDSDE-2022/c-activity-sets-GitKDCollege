#include<stdio.h>
#include<string.h>
int main(void){
  char a[15];
  printf("Enter the String to be reversed\n");
  scanf("%s",&a);
  char b[strlen(a)];
  int i;
  for (i=0;i<strlen(a);i++){
    b[i]=a[strlen(a)-i-1];
  }
  b[strlen(a)]="\0";
  for (i=0;i<strlen(a);i++){
    printf("%c",b[i]);
  }
  return 0;
}