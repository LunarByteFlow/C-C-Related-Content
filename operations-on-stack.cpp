#include<stdio.h>
#include<stdlib.h>
struct stack{
	int top;
	int size;
	int *arr;
};
	//peak operation in stack:
	//	Peek() is one of a stack operation that returns the value of the 
	//	top most element of the stack without deleting that element from the stack.
	//	time complexity o(1)
int peek(struct stack* ptr,int i){
	int position=ptr->top -i +1;
	if(position<0){
		printf("Not a valid position");
		return -1;
	}
	else{
		return ptr->arr[position];
	}
}
//stack top operation : displaying item at top time complexity o(1)
int stacktop(struct stack *ptr){
	return ptr->arr[ptr->top];
}
//stack bottom operation :displaying item at bttom which i index=0 time complexity o(1)
int stackbottom(struct stack *ptr){
	return ptr->arr[0];
}
//checking if the stack is empty time complexity o(1)
int isEmpty(struct stack*ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
//checking if the stack is full time complexity o(1)
int isFull(struct stack*ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
//push opereration on stack time complexity o(1)
int push(struct stack *ptr,int val){
	if(isFull(ptr)){
		printf("stack overflow,cannot push %d to the stack\n",val);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
//pop operation on stack time complexity o(1)
int pop(struct stack *ptr){
	if(isFull(ptr)){
		printf("stack underflow,cannot pop from the stack\n");
	}
	else{
		int val = ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
int main(){
	struct stack * mystack=(struct stack *)malloc(sizeof(struct stack));
	mystack->size=10;
	mystack->top=-1;
	mystack->arr=(int * )malloc(mystack->size * sizeof(int));
	
	struct stack * mystack2=(struct stack *)malloc(sizeof(struct stack));
	mystack2->size=20;
	mystack2->top=-1;
	mystack2->arr=(int * )malloc(mystack2->size * sizeof(int));
	
	//pushing a value into the stack using push(); we crsted just now :-)
	printf("%d\n",isEmpty(mystack));
	
	
	
	printf("stack full: %d\n",isFull(mystack));
	printf("stack Empty:%d\n",isEmpty(mystack));
	push(mystack,1780);
	push(mystack,280);
	push(mystack,321);
	push(mystack,423);
	push(mystack,9090);
	push(mystack,180);
	push(mystack,8730);
	push(mystack,750);
	push(mystack,787675550);
	
	push(mystack2,10);
	push(mystack2,280);
	push(mystack2,31);
	push(mystack2,23);
	push(mystack2,90);
	push(mystack2,80);
	push(mystack2,80);
	push(mystack2,70);
	
//	traversing a stack by using peek() 
	printf("values of stack 1\n");
	for(int j=1;j<=mystack->top+1;j++){
		printf("The value at position %d is %d \n",j,peek(mystack,j));
	}
	printf("The top most element of the stack is %d\n",stacktop(mystack));
	printf("values of stack 2\n");
	for(int j=1;j<=mystack->top+1;j++){
		printf("The value at position %d is %d \n",j,peek(mystack2,j));
	}
	printf("The top most element of the stack is %d\n",stacktop(mystack2));
	printf("The element at bottom of the stack is %d\n",stackbottom(mystack2));
	return 0;
}
