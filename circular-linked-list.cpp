#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void circularLinkedListTraversal(struct node*head){
	struct node*ptr=head;
	do{
		printf("Element %d \n ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}
struct node*insertAtHead(struct node* head,int data){
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node*p=head->next;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}
int main(){
	struct node* head;
	struct node* first;
	struct node* second;
	struct node* third;
	struct node* fourth;
	head = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	
	head->data=100;
	head->next=first;
	
	first->data=200;
	first->next=second;
	
	second->data=300;
	second->next=third;
	
	third->data=400;
	third->next=fourth;
	
	fourth->data=500;
	fourth->next=head;
	
	circularLinkedListTraversal(head);
	printf("\nAfter insertion:\n");
	head=insertAtHead(head,455);
	circularLinkedListTraversal(head);
	return 0;
}
