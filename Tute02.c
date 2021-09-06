#include <stdio.h>

int main() {

  int distance,Amount;

  printf("Enter the Distance(Km) :");
  scanf("%d",&distance);
 
 if(distance > 30)
 {
   Amount = (30 * 50) + ((distance - 30) * 40 );
 }
 else
 {
   Amount = distance * 30 ;
 }

 printf("Your distances : %d\n",distance);
 printf("Total Amount is : %.2d", Amount);
  
  return 0;
}