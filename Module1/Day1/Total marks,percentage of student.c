#include<stdio.h>
int main(){
	int phy,ma,ch;
	char name[100],rn[50];
	printf("Enter Roll no:");
	scanf("%s",&rn);
	printf("Enter Full Name(Replace spaces with _ ):");
	scanf("%s",&name);
	printf("Enter Physics,Maths and Chemistry marks:");
	scanf("%d %d %d",&phy,&ma,&ch);
	int total=phy+ma+ch;
	float percentage=total/3.0;
	
	printf("Name of the Student=%s \nRoll Number=%s \n",name,rn);
	printf("Total Marks=%d \n",total);
	printf("Percentage=%f % \n",percentage);
	if(phy>=35 && ma>=35 && ch>=35){
		printf("RESULT:PASS");   
	}
	else{
		printf("RESULT:FAIL");
	}
	return 0;
}
