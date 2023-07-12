//Write C Program to Find ASCII Value of a Character

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char x;
printf("Enter a character:");
fflush(stdout);
scanf("%c",&x);
printf("Ascii value of %c=%d",x,x);
}
