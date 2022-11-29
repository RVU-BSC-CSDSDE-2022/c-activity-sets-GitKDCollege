#include<stdio.h>
#include<string.h>
int main(void){
  int vow=0;
  int cons=0;
  char name[100];
  printf("Enter the name of the Camel\n");
  scanf("%s",&name);
  int i;
  for (i=0;i<strlen(name);i++){
    if (name[i]=="a" || name[i]=="e" || name[i]=="i" || name[i]=="o" || name[i]=="u"){
      vow=vow+1;
    }
    else{
      cons=cons+1;
    }
  }
  if ((vow>=2)&&(cons>=2)){
    printf("The Camel has a Nice Name\n");
  }
  else{
    printf("The Camel does not have a Nice Name\n");
  }
  return 0;
}