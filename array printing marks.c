#include<stdio.h>
int main(){
	int marks[10],n;
	printf("no of marks");
	scanf("%d",&n);
	for(int i=0;i<10;i++){
		printf("enter marks");
		scanf("%d\n",&marks[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("the marks are:\n",marks[i]);
	}
	return 0;
}
