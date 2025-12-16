#include<stdio.h>
int main()
{
	int a,b,c;
    printf("enter a,b,c values\n");
    scanf("%d%d%d",&a,&b,&c);
    a=b;
    b=c;
    c=a;
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}
