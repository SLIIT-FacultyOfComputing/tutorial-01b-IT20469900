#include <stdio.h>
int main() {

  int number,sum=0,i;

  printf("Enter the Number :");
  scanf("%d",&number);

  for(i=0;i<=number;i++)
  {
    sum = sum + i;
  }

  printf("Calculate the sum : %d",sum);

  
  return 0;
}