#include<stdio.h>
int main()
{
	int a=50,b=40;
	printf("Before swap a=%d b=%d",a,b);
	a=a+b;//a=90(50+40)
	b=a-b;//b=50(90-40)
	a=a-b;//a=40(90-50)
	printf("\nAfter swap a=%d b=%d",a,b);
	return 0;
}
