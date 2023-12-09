#include<stdio.h>
#include<conio.h>
void traverse(int arr[],int size){
	for(int i=0;i<=size-1;i++){
		printf("%d\n",arr[i]);
	}
}
int linearsearch(int arr[],int size,int element){
	for(int i=0;i<=size-1;i++){
		if(arr[i]==element){
			printf("element %d fount at index %d\n",element,i);
		}
	}
	printf("Element not found\n");
}
int main(){
	int arr[]={12,14,36,13,54,76,53};
	int size=7;
	traverse(arr,size);
	linearsearch(arr,size,13);
	traverse(arr,size);
	return 0;
}
