#include<stdio.h>
#include<conio.h>

void printArray(int *Array,int size){
	for(int i=0;i<size;i++){
		printf("%d ",Array[i]);
	}
	printf("\n");
}

void partition(int *A,int low,int high){
	int pivot=A[low];
	int i=low+1;
	int j=high;
	int temp;
	do{
	while(A[i]<=pivot){
		i++;
	}
	while(A[j]>pivot){
		j--;
	}
	if(i<j){
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
	}
	}while(i<j);
	//final swap
		temp=A[low];
		A[low]=A[j];
		A[j]=temp;
		
}
void quicksort(int *A,int low,int high){
	int partitionindex=partition(A,low,high);
	if(low<high){
	partitionindex=partition(A,low,high);
	quicksort(A,low,partitionindex-1); //sort left sub array
	quicksort(A,partitionindex+1,high); //sort right sub array
	}
}
int main(){
	int A[]={200,600,10,30,0,01,02,03,789,754,453,236,458,763};
	int size=14;
	printArray(A,size);
	quicksort(A,0,size-1);
	printArray(A,size);
	return 0;
}
