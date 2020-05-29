//using this file you should be able to take x to y's power i.e. 6^7
#include <stdio.h>
#include <math.h>
int main(){
double big_number;
double tiny_number;
double the_answer_is_ai;
//decimals SHOULD work
// i may test this out on a 32bit computer to see if it still works. if not then i might make a 32bit version
printf("what is the base of your exponent?(or the big number) \n");
scanf("%5lf", &big_number);
//got tha big one
printf("what is the power?(the tiny one in the right hand corner)? \n");
scanf("%5lf", &tiny_number);
//we got tha powah
//forgive me for my lazyness
the_answer_is_ai= pow( big_number, tiny_number);
printf("%5lf to the power of %5lf simplified is %5lf \n",big_number,tiny_number,the_answer_is_ai);
return(0);
  //i almost forgot the semicolons smh
}
