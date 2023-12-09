#include<stdio.h>
#include<stdlib.h>
struct treenode{
	int data;
	struct treenode*left;
	struct treenode*right;
};
struct treenode* createNode(int data){
	struct treenode * node = (struct treenode*)malloc(sizeof(struct treenode));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

void inOrder(struct treenode*root){
	if(root!=NULL){
		inOrder(root->left);
		printf("%d ",root->data);	
		inOrder(root->right);	
			
	}
}
int main(){
	struct treenode * n=createNode(4);
	struct treenode * n1=createNode(1);
	struct treenode * n2=createNode(6);
	struct treenode * n3=createNode(5);
	struct treenode * n4=createNode(2);
	
	
//	linking the nodes
	n->left=n1;
	n->right=n2;
	
	n1->left=n3;
	n1->right=n4;
	
	inOrder(n);
	return 0;
}
