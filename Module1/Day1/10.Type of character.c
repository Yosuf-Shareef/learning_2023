#include<stdio.h>
#include<ctype.h>
int Char_type(char ch);

int Char_type(char ch){
	if(isalpha(ch)){
		if(isupper){
			return 1;			
		}
		else{
			return 2;
		}
	}
	else if(isdigit(ch)){
		return 3;
	}
	else if(isprint(ch)){
		return 4;
	}
	else{
		return 5;
	}
}
int main(){
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);s
	int type=Char_type(ch);
	switch(type){
		case 1: printf("UPPERCASE ALPHABET"); break;
		case 2: printf("LOWERCASE ALPHABET"); break;
		case 3: printf("DIGIT"); break;
		case 4: printf("PRINTABLE SYMBOL"); break;
		case 5: printf("NON-PRINTABLE SYMBOL"); break;
	}
	return 0;
}
