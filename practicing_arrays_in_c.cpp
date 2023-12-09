#include<stdio.h>
#include<conio.h>
int main(){
	
//	int reserv[10];
//	for(int i=0;i<=10;i++){
//		printf("Enter value %d:\n",i);
//		scanf("%d",&reserv[i]);
//	}
//	for(int i=0;i<=10;i++){
//		printf("The value at number %d is %d:\n",i,reserv[i]);
//	}

// adding numbers in arrays.
	int value,oper[20];

	printf("Enter your first integer: \n");
	scanf("%d",&oper[0]);
	printf("Enter your second integer: \n");
	scanf("%d",&oper[1]);
	printf("Enter your third integer: \n");
	scanf("%d",&oper[2]);
	printf("Enter the operation you want to perform:\n");
	printf("Addition : 1 \n Subtraction : 2 \n Multiplication : 3 \n Division : 4\n Remainder : 5\n");
	oper[3] = oper[0] + oper[1] + oper[2];
	oper[4] = oper[0] - oper[1] - oper[2];
	oper[5] = oper[0] * oper[1] * oper[2];
	oper[6] = oper[0] % oper[1] % oper[2];
	oper[7] = oper[0] / oper[1] / oper[2];
	printf("Enter your value: \n");
	scanf("%d",&value);
	
	if(value == 1){
		oper[3] = oper[0] + oper[1] + oper[2];
		printf("The result of addition will be: %d",oper[3]);
	}
	else if(value == 2)
	{
		oper[4] = oper[0] - oper[1] - oper[2];
		printf("The result of subtraction will be : %d",oper[4]);
	}
	else if(value == 3)
	{
		oper[5] = oper[0] * oper[1] * oper[2];
		printf("The result of Mutiplication will be: %d",oper[5]);
	}
	else if(value == 4)
	{
		oper[7] = oper[0] / oper[1] / oper[2];
		printf("The result of Division will be: %d",oper[7]);
	}
	else if(value == 5)
	{
		oper[6] = oper[0] % oper[1] % oper[2];
		printf("The Reamainder will be : %d",oper[6]);
	}
	else{
		printf("Wrong keywords!!");
	}
//	printf("Addition of %d and %d is = %d\n",oper[0],oper[1],oper[3]);
//	printf("Subtraction of %d and %d is = %d\n",oper[0],oper[1],oper[4]);
//	printf("Multiplication of %d and %d is = %d\n",oper[0],oper[1],oper[5]);
//	printf("Remainder of %d and %d is = %d\n",oper[0],oper[1],oper[6]);
//	printf("Division of %d and %d is = %d\n",oper[0],oper[1],oper[7]);
	return 0;

}
