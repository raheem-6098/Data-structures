#include<stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d" ,&n);
	printf("Factorial is %d = 1%d",n);
	return 0;

	if(n>=1)
	return n*(n-1);
	else
	return 1;
}
