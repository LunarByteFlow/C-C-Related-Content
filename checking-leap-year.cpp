#include<stdio.h>
#include<conio.h>
int main(){
	int year;
	printf("Enter your year:\n");
	scanf("%d",&year);
	// is a leap year if perfectly divisible by 400
	if(year % 400 == 0){
		printf("%d is a leap year\n",year);
	}
	// is not a leap year if not divisible by 100 .
	else if(year % 100 == 0){
		printf("%d is not a leap year. \n",year);
	}
	//is a leap year if not divisible by 400 but divisible by 4.
	else if(year % 4 == 0){
		printf("%d is a leap year.\n",year);
	}
	//All others are not leap years.
	else{
		printf("Not a leap year.\n");
	}
	return 0;
}
