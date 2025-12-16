#include<stdio.h>
int main()
{
	int n=5,fact=1;
	int i;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("factorial of %d is %d\n",fact);
	return 0;
}
