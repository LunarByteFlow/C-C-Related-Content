#include<stdio.h>
#include<stdlib.h>
struct treenode{
	char data;
	struct treenode*left;
	struct treenode*right;
};
//searching in a binary search tree 
struct treenode* search(struct treenode* root,int key){
	if(root==NULL){
		return NULL;
	}
	if(root->data==key){
		return root;
	}
	else if(key<root->data){
		return search(root->left,key);
	}
	else{
		return search(root->right,key);
	}
}

//iterative search in binary tree 
struct treenode* searchiter(struct treenode* root,int key){
	while(root!=NULL){
		if(key==root->data){
			return root;
		}
		else if(key<root->data){
			root = root->left;
		}
		else{
			root = root->right;
		}
	}
}
struct treenode* createNode(int data){
	struct treenode * node = (struct treenode*)malloc(sizeof(struct treenode));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
int isBST(struct treenode* root){
	struct treenode *prev=NULL;
	if(root!=NULL){
		if(!isBST(root->left)){
			return 0;
		}
		if(prev!=NULL && root->data <= prev->data){
			return 0;
		}
		prev=root;
		return isBST(root->right);
	}
	else{
		return 1;
	}
}
void postOrder(struct treenode*root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);	
	}
}
int main(){
	struct treenode * n=createNode(5);
	struct treenode * n1=createNode(3);
	struct treenode * n2=createNode(6);
	struct treenode * n3=createNode(1);
	struct treenode * n4=createNode(4);
	
	
//	linking the nodes
	n->left=n1;
	n->right=n2;
	
	n1->left=n3;
	n1->right=n4;
	
//	postOrder(n);
//	printf("\n");
//	printf("%d",isBST(n));
	struct treenode* p=searchiter(p,7);
	if(p!=NULL){
		printf("found %d ",p->data);
	}
	else{
		printf("Element not found\n");
	}
	printf("Code not running");
	return 0;
}
