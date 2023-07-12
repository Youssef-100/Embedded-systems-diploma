//Write C Program to Print a Integer Entered by a User
#include <stdio.h>


int main(void) {
	int x;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%d",&x);
	printf("you entered: %d",x);
}
