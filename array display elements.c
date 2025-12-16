#include<stdio.h>
int main()
{
	int marks[6],i;
	printf("enter array elements");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&marks[i]);
	}
	printf("display elements");
	for(i=0;i<=5;i++);
	{
		printf("%d\n",marks[i]);
	}
    return 0;	
}
