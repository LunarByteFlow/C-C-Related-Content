#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
	int top;
	int size;
	char *arr;
};
	
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

int stacktop(struct stack *ptr){
	return ptr->arr[ptr->top];
}

int stackbottom(struct stack *ptr){
	return ptr->arr[0];
}

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

int push(struct stack *ptr,int val){
	if(isFull(ptr)){
		printf("stack overflow,cannot push %d to the stack\n",val);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}

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
int precedence(char ch){
	if(ch=='*' || ch=='/'){
		return 3;
	}
	else if(ch=='+' || ch=='-'){
		return 2;
	}
	else{
		return 0;
	}
}
int isoperator(char ch){
	if(ch=='+' || ch=='-' || ch=='/' || ch=='*'){
		return 1;
	}
	else{
		return 0;
	}
}
char* infixtopostfix(char*infix){
	struct stack*sp = (struct stack*)malloc(sizeof(struct stack));
	sp->size=100;
	sp->top=-1;
	sp->arr=(char*)malloc(sp->size *sizeof(char));
	char*postfix=(char*)malloc((strlen(infix)+1) * sizeof(char));
	int i=0; //track infix
	int j=0;//track postfix
	while(infix[i]!='\0'){
		if(!isoperator(infix[i])){
			postfix[j]=infix[i];
			i++;
			j++;
		}
		else{
			if(precedence(infix[i])>precedence(stacktop(sp))){
				push(sp,infix[i]);
				i++;
			}
			else{
				postfix[j]=pop(sp);
				j++;
			}
		}
	}
	while(!isEmpty(sp)){
		postfix[j]=pop(sp);
		j++;
	}
	postfix[j]='\0';
	return postfix;
	
	
}
int main(){
	char *infix="a-b+t/6";
	printf("postfix is %s",infixtopostfix(infix));
	return 0;
}
