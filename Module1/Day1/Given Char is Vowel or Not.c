#include<stdio.h>
#include<ctype.h>
int Vowel_or_not(char ch);

int main(){
	char ch;
	printf("Enter Character:");
	scanf("%c",&ch);
	int r=Vowel_or_not(ch);
	if(r==1){
		printf("VOWEL");
	}
	else if(r==0){
		printf("NOT VOWEL");
	}
}
int Vowel_or_not(char ch){
	switch(toupper(ch)){
		case 'A':
		case 'E':
		case 'I':
		case 'O': 
		case 'U': 
				return 1;
				break;

		default: return 0;				 
	}
}