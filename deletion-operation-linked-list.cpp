#include<stdio.h>
#include<stdlib.h>
//4 deletion functions regarding linked list have been discussed here .
//1-deletion at the beginning .
//2-deletion after a node.
//3-deletion at an index. 
//4-deletion at the end

struct node{
	int data;
	struct node*next;
};
//Traversal of a list 
listtraversal(struct node*ptr){
	while(ptr!=NULL){
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}
//Deleting a Node 
struct node* deletingNode(struct node*head){
	struct node*ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
//Delete From an Index 
struct node* deleteFromIndex(struct node*head,int index){
	struct node*p=head;
	struct node*q=p->next;
	for(int i=0;i<index-1;i++){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}
//Delete the Last Element
struct node* deleteLastElement(struct node*head){
	struct node*p=head;
	struct node*q=p->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}
//Delete a value from the linked list
struct node* DeleteAvalue(struct node*head,int value){
	struct node*p=head;
	struct node*q=p->next;
	while(q->data!=value && q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	printf("Element not found\n");
	if(q->data==value){
		printf("Element found.\n");
		p->next=q->next;
		free(q);
	}
}
int main(){
	struct node* head;
	struct node* first;
	struct node* second;
	struct node* third;
	struct node* fourth;
	struct node* fifth;
	struct node* sixth;
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	fifth = (struct node*)malloc(sizeof(struct node));
	sixth = (struct node*)malloc(sizeof(struct node));
	//linking first node to second
	head->data=1430;
	head->next=second;
	
	//linking first second to third
	second->data=2450;
	second->next=third;
	
	//linking first third to 
	third->data=350;
	third->next=fourth;
	
	fourth->data=30;
	fourth->next=fifth;
	
	fifth->data=50;
	fifth->next=sixth;
	
	sixth->data=100;
	sixth->next=NULL;
	
//	printf("List before operation\n\n");
//	listtraversal(head);
//	
//	printf("List before operation\n\n");
//	head=deletingNode(head);
//	listtraversal(head);
//	
//	printf("List before operation\n\n");
//	head=deletingNode(head);
//	listtraversal(head);
//	
//	printf("List before operation\n\n");
//	head=deletingNode(head);
//	listtraversal(head);

	printf("List before operation\n");
	listtraversal(head);
	printf("List after operation\n\n");
	head=deleteFromIndex(head,1);
	listtraversal(head);
	
	printf("List before operation\n");
	listtraversal(head);
	printf("List after deleting last Node\n\n");
	head=DeleteAvalue(head,350);
	listtraversal(head);
	
	return 0;
}
