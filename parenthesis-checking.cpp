#include<stdio.h>
#include<stdlib.h>
struct stack{
	int top;
	int size;
	char *arr;
};

int isEmpty(struct stack*ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct stack*ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

char push(struct stack *ptr,int val){
	if(isFull(ptr)){
		printf("stack overflow,cannot push %d to the stack\n",val);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}

char pop(struct stack *ptr){
	if(isFull(ptr)){
		printf("stack underflow,cannot pop from the stack\n");
	}
	else{
		char val = ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}

int parenthesismatch(char * expression){
//	initializing an array here
	struct stack * mystack=(struct stack *)malloc(sizeof(struct stack));
	mystack->size=1000;
	mystack->top=-1;
	mystack->arr=(char * )malloc(mystack->size * sizeof(char));
	for(int i=0;expression[i]!='\0';i++){
		if(expression[i]=='('){
			push(mystack,'(');
		}
		else if(expression[i]==')'){
			if(isEmpty(mystack)){
				return printf("This Expression is not valid\n");
			}
			pop(mystack);
		}
	}
	if(isEmpty(mystack)){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	struct stack * mystack=(struct stack *)malloc(sizeof(struct stack));
	mystack->size=10;
	mystack->top=-1;
	mystack->arr=(char * )malloc(mystack->size * sizeof(char));
	char*exp="8*(9)";
	if(parenthesismatch(exp)){
		printf("The parenthesis is matching\n");
	}
	else{
		printf("The parenthesis is not matching\n");
	}
	return 0;
}
