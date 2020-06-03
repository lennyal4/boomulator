#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
//checks to see if the computer is windows or not, then supplies the right library
int main(void) {
int userinputnumber;
printf("boomulator the boom(er calc)ulator\n");
sleep(1);
printf(
  "enter what you wanna do:\n"
"1.)addition\n"
"2.)subtraction\n"
"3.) multiplication\n"
"4.)remainder division\n"
"5.)divison\n"
"6.)exponents\n\n\n"
);
scanf("%d",userinputnumber);
printf(
"\n\n\n"
"press ctrl-c to exit\n"

);
}
