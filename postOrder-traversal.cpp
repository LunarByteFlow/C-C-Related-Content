#include<stdio.h>
#include<stdlib.h>
struct treenode{
	char data;
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
void postOrder(struct treenode*root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);	
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
	
	postOrder(n);
	return 0;
}
