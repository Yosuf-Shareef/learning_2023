#include<stdio.h>

int main(){
	int arr[]={10,20,30,40,50};
	int sum=0;
	for(int i=0;i<5;i=i+2){
		sum +=arr[i];
	}
	printf("Sum of Alternative elements in an array:%d",sum);
	return 0;
}