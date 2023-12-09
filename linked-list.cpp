#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
listtraversal(struct node*ptr){
	while(ptr!=NULL){
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	struct node* head;
	struct node* first;
	struct node* second;
	struct node* third;
	struct node* fourth;
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	//linking first node to second
	head->data=10;
	head->next=second;
	
	//linking first second to third
	second->data=20;
	second->next=third;
	
	//linking first third to 
	third->data=30;
	third->next=fourth;
	
	fourth->data=30;
	fourth->next=NULL;
	
	listtraversal(head);
	
	return 0;
}
