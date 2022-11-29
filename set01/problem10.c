//Without using Functions

#include<stdio.h>
int main(void)
{
  char s1[100];
  char s2[100];
  int i;
  int count1;
  count1=0;
  int count2;
  count2=0;
  printf("Enter s[vtring-1\n");
  scanf("%s",&s1);
  printf("Enter string-2\n");
  scanf("%s",&s2);
  for (i=0;i<5;i=i+1)
  {
  if (s1[i]>s2[i])
  {
    count1=count1+1;
  }
  else if(s2[i]>s1[i])
  {
    count2=count2+1;
  }
  else if (s1[i]=s2[i])
  {
    
  }
  }
  
  if (count1>count2)
  {
    printf("%s is greater than %s",s1,s2);
  }
  else if (count2>count1)
  {
    printf("%s is greater than %s",s2,s1);
  }
  else if(count1=count2)
  {
    printf("Both the strings are same");
  }
  return 0;
}



//Using Functions
// #include<stdio.h>

// void input_two_strings(char *string1, char *string2);
// int stringcompare(char *string1, char *string2);
// void output(char *string1, char *string2);

// void input_two_strings(char *string1, char *string2)
// {
//   printf("Enter the string-1\n");
//   scanf("%s",&string1);
//   printf("Enter the string-2\n");
//   scanf("%s",&string2);
// }

// int stringcompare(char *string1, char *string2)
// {
//   int i;
//   int count1;
//   int count2;
//   for (i=0;i<100;i=i+1)
//   {
//   if (string1[i]>string2[i])
//   {
//     count1=count1+1;
//   }
//   else if(string2[i]>string1[i])
//   {
//     count2=count2+1;
//   }
//   else if (string1[i]=string2[i])
//   {
//     count1=count1;
//     count2=count2;
//   }
//   }
// }

// void output(char *string1, char *string2)
// {
//   int count1;
//   int count2;
//   if (count1>count2)
//   {
//     printf("%s is greater than %s",string1,string2);
//   }
//   else if (count2>count1)
//   {
//     printf("%s is greater than %s",string2,string1);
//   }
//   else if(count1=count2)
//   {
//     printf("Both the strings are same");
//   }
// }

// int main(void)
// {
//   int i;
//   int count1;
//   int count2;
//   char string1[100];
//   char string2[100];
//   input_two_strings(&string1,&string2);
//   stringcompare(&string1,&string2);
//   output(&string1,&string2);
//   return 0;
// }
