#include<stdio.h>
void main(){
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n>0)
    printf("The number  is Positive");
  else if(n<0)
    printf("The Number is Negative");
  else
    printf("The number is Zero");
  }
