#include<stdio.h>
int greatest(int a,int b,int c);
int _greatest(int a,int b,int c);

int main(){
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d \n",greatest(a,b,c));
	printf("%d \n",_greatest(a,b,c));
}
//Using if else if
int greatest(int a,int b,int c){
	if(a>=b && a>=c){
		return a;
	}
	else if(b>=a && b>=c){
		return b;
	}
	else if(c>=a && c>=b){
		return c;
	}	
}
//Using ternary operator
int _greatest(int a,int b,int c){
	return (a>b?(a>c ? a:c):(b>c?b:c));
}