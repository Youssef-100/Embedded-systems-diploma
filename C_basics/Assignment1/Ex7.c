//Write Source Code to Swap Two Numbers without temp variable.

#include <stdio.h>

int main(void) {

	float a;
float b;
printf("Enter value of a:\n");
fflush(stdout);
scanf("%f",&a);
printf("Enter value of b:");
fflush(stdout);
scanf("%f",&b);
a=a-b;
b=a+b;
a=b-a;
printf("After swapping,value of a=%0.2f",a);
printf("After swapping,value of b=%0.2f",b);
}

