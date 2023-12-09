#include<stdio.h>
#include<stdlib.h>

//global variables 
struct node*front=NULL;
struct node*rear=NULL;
struct node{
	int data;
	struct node*next;
};
void enqueue(int val){
	printf("operation enqueue\n");
	struct node* Node=(struct node*)malloc(sizeof(struct node));
	if(Node==NULL){
		printf("The queue is full\n");
	}
	else{
		Node->data=val;
		Node->next=NULL; 
		if(front==NULL){
			front=rear=Node;
		}
		else{
			rear->next=Node;
			rear=Node;
		}
	}
}
void dequeue(){
	int val=-1;
	printf("operation dequeue\n");
	struct node* ptr=front;
	if(front==NULL){
		printf("The queue is Empty\n");
	}
	else{
		front=front->next;
		val=ptr->data;
		free(ptr);
	}
}
traverselinkedlist(struct node*ptr){
	while(ptr!=NULL){
		printf("Element %d is : %d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
//	both will be equal to null 
//	initially as in queue initially the elements are null.
	traverselinkedlist(front);
	enqueue(23);
	enqueue(238);
	enqueue(283);
	enqueue(723);
	
	traverselinkedlist(front);
	dequeue();
	dequeue();
	traverselinkedlist(front);
	return 0;
}
