//Write C Program to Add Two Integers

#include <stdio.h>


int main(void) {
	int x;int y;
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	int sum=x+y;
	printf("sum=%d",sum);

}
