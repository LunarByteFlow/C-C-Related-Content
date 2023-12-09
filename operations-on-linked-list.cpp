#include<stdio.h>
#include<stdlib.h>
//4 insertion functions regarding linked list have been discussed here .
//1-insertion at the beginning .
//2- insertion after a node.
//3-insertion at an index. 
//4-insertion at the end

struct node{
	int data;
	struct node*next;
};
struct node*insertAtIndex(struct node *head,int data,int index){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* p=head;
	int i=0;
	while(i!=index-1){
		p = p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	ptr->next=ptr;
	return head;
	}
struct node* insertafternode(struct node *head,struct node*prevnode,int data){
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	
	ptr->data=data;
//	yahan par ptr humny node create kiya hy and p node ptr se agay wala node hy and prevnode peechy wala
	ptr->next=prevnode->next;
	prevnode->next=ptr;
	return head;
}
struct node* insertAtTheBeginning(struct node*head,int data){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}
struct node* deletingAtIndex(struct node*head,int index){
	struct node*p=head;
	struct node*q=p->next;
	for(int i=0;i<index-1;i++){
		p=p->next;
		q=q->next;	
	}
	p->next=q->next;
	return head;
}

struct node* insertAtTheEnd(struct node*head,int data){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node* p = head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
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
	third->data=3848980;
	third->next=fourth;
	
	fourth->data=30;
	fourth->next=NULL;
	
	listtraversal(head);
	printf("the after list:\n");
//	head = insertAtTheBeginning(head,2);
	listtraversal(head);
	
	listtraversal(head);
	printf("Insert at index in  the list\n");
	head=insertAtIndex(head,54443,1);
	listtraversal(head);
	
	listtraversal(head);
	printf("Insert at index in  the list\n");
//	head=insertAtTheEnd(head,53);
	listtraversal(head);
	
	listtraversal(head);
	head=insertafternode(head,second,3497867);
	listtraversal(head);
	printf("Before:\n\n\n");
	listtraversal(head);
	printf("deleting at index\n\n");
	head=deletingAtIndex(head,3);
	listtraversal(head);
	return 0;
}
