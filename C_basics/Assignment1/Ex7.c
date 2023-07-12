/*
 ============================================================================
 Name        : Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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

