#include<stdio.h>
#include<conio.h>
int linearsearch(int arr[],int size,int element){
	for(int i=0;i<size;i++){
		if(arr[i]==element){
			printf("Element %d found at index %d.",element,i);
		}
	}
	printf("Sorry Element not found.");
}


int main(){
	int arr[]={12,13,34,43,21,45};
	int size = sizeof(arr)/sizeof(int);
	int element = 45;
	linearsearch(arr,size,element);
	return 0;
}
