#include<stdio.h>
#include<stdlib.h>
struct tnode{
	int data;
	struct tnode*left;
	struct tnode*right;	
};
struct tnode* createNode(int data){
	struct tnode* n;
	n=(struct tnode*)malloc(sizeof(struct tnode));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
int main(){
//	kiunke trees me kaffi aary nodes hoty hian to kaam ko easy krny k liye hum node create krny k liye
//	aik function create krdengy
 
//	constructing root node 
//	struct Tnode* p;
//	p=(struct Tnode*)malloc(sizeof(struct Tnode));
//	p->left=NULL;
//	p->right=NULL;
////	constructing second node
//	struct Tnode* p1;
//	p1=(struct Tnode*)malloc(sizeof(struct Tnode));
//	p1->left=NULL;
//	p1->right=NULL;
////	constructing Third node
//	struct Tnode* p2;
//	p2=(struct Tnode*)malloc(sizeof(struct Tnode));
//	p2->left=NULL;
//	p2->right=NULL;

	
//	constructing root node 
	struct tnode * p=createNode(3);
	struct tnode * p1=createNode(2);
	struct tnode * p2=createNode(4);

//	linking root node with children
	p->left=p1;
	p->right=p2;
	return 0;
}
