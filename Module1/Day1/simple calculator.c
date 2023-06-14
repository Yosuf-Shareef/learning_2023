#include<stdio.h>
#include<stdlib.h>

int main(){
	char op;
	double a,b,res;
	printf("Enter Number1:" );
	scanf("%lf",&a);
	printf("Enter the operator(+,-,*,/):" );
	scanf("%s",&op);
	printf("Enter Number2:" );
	scanf("%lf",&b);
	
	
	switch(op){
		case '+': res=a+b;
					 break;
		case '-': res=a-b;
					 break;
		case '*': res=a*b;
					 break;
		case '/': res=a/b;
					 break;
		default: printf("Invalid Operator ! \n ");
		exit(0);
	}
	printf("Result=%.1lf \n",res);
	return 0;
}