#include<stdio.h>
int main()
{
	int a,b,c;
	float average;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	average=((a+b+c)/3);
	printf("the average of 3 numbers is %f",average);
	return 0;
}
