#include<stdio.h>
int greatest(int a,int b);
//function decleration
int main(){
	int num1,num2,result;
	printf("enter two numbers");
	scanf("%d %d",&num1,&num2);
	//function call
	result=greatest(num1,num2);
	printf("greatest number=%d\n",result);
	return 0;
}
//function definition
int greatest(int a,int b){
	if(a>b)
	return a;
	else
	return b;
}
