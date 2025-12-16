#include<stdio.h>
void display(int,int);
int main(){
	int a,b;
	a=5,b=10;
	printf("%d %d",a,b);
	display(a,b);
	return 0;
}
void display (int a1,int b2)
{
	a1=20;
	b2=30;
	printf("%d %d",a1,b2);
}
