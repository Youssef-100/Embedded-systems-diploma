/*
 ============================================================================
 Name        : Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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
