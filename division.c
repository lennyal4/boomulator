#include <stdio.h>

int main(void){
  int t,y;
  printf("enter the divisor(or first number in your division problem):");
  scanf("%d",&y);
  printf("enter the dividend(or the second number in your equation):");
  scanf("%d",&t);
  int x= y%t;
  int x_but_actually_the_number=y/t;
  printf("%d divided by %d equals %d with a remainder of %d\n",y,t,x_but_actually_the_number,x);
  return 0;
}
