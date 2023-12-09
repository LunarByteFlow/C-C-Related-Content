#include<stdio.h>
#include<stdlib.h>
struct tnode{
	int data;
	struct tnode*left;
	struct tnode*right;
};
struct tnode*createnode(int data){
	struct tnode *n;
	n=(struct tnode*)malloc(sizeof(struct tnode));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
//in preOrder we have used recursive call 
void preOrder(struct tnode*root){
	if(root!=NULL){
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
int main(){
	struct tnode* p=createnode(52);
	struct tnode* p1=createnode(21);
	struct tnode* p2=createnode(43);
	struct tnode* p3=createnode(31);
	struct tnode* p4=createnode(11);
	struct tnode* p5=createnode(32);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	preOrder(p);
	return 0;
}
