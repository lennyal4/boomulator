#include <stdio.h>

int main(void){
  int t,y;
  //take both of my numbers
  printf("enter the divisor(or first number in your division problem):");
  scanf("%d",&y);
  //take divisor
  printf("enter the dividend(or the second number in your equation):");
  scanf("%d",&t);
  //take dividend
  int x= y%t;
  // this is not the division problem but rather the modulo (or the remainder)
  int x_but_actually_the_number=y/t;
  //take the divison and convert it to a integer (removing the decimals)
  printf("%d divided by %d equals %d with a remainder of %d\n",y,t,x_but_actually_the_number,x);
  //display
  return 0;
}
