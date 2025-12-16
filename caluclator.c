#include<stdio.h>
int main()
{
	char operator;
	int a,b;
	scanf("%d %d",&a,&b);
	printf("enter the operator(+,-,*,/):\n");
	scanf(" %c ",&operator);
	switch(operator)
	
	
	{   
	    case '+':
			printf("the sum is %d\n",a+b);
			break;
		case '-':
			printf("the difference is %d\n",a-b);
			break;
		case '*':
			printf("the multiplication is %d\n",a*b);
			break;
		case '/':
			printf("the qofiecient is %d\n",a/b);
			break;
		default:
			printf("INVALID OPERATOR");
			break;
		}
	        return 0;
    }
	    
		
		
			
	

