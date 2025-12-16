#include<stdio.h>
int sum(int a,int b);
//function decleration
int main(){
	int num1,num2,result;
	printf("enter two numbers");
	scanf("%d %d",&num1,&num2);
	//function call
	result=sum(num1,num2);
	printf("sum=%d\n",result);
	return 0;
}
//function definition
int sum(int a,int b){
	return a+b;
}
