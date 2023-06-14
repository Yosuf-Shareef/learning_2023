#include<stdio.h>
void biggest(int a,int b);
void _biggest(int a,int b);

int main(){
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	biggest(a,b);
	_biggest(a,b);
	
}
//Using if-else
void biggest(int a,int b){
	if(a>b){
		printf("%d \n",a);
	}
	else{
		printf("%d \n",b);
	}	
}
//Using ternary operator
void _biggest(int a,int b){
	printf("%d",a>b?a:b);
}