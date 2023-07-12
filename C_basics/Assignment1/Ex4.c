//Write C Program to Multiply two Floating Point Number
#include <stdio.h>


int main(void) {

	float x;float y;
	float product;
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	product=x*y;
	printf("product=%f",product);

}
