#include<stdio.h>
#include<conio.h>
void printArray(int *Array,int size){
	for(int i=0;i<size;i++){
		printf("%d ",Array[i]);
	}
	printf("\n");
}
void insertionsort(int *Array,int size){
	for(int i=1;i<=size-1;i++){
		int key = Array[i];
		int j=i-1;
		while(j>=0 && Array[j]>key){
			Array[j+1] = Array[j];
			j--;
		}
		Array[j+1]=key;
	}
}
int main(){
	int Array[]={200,600,10,30,0,01,02,03,789,754,453,236,458,763};
	int size=14;
	printArray(Array,size);
	insertionsort(Array,size);
	printArray(Array,size);
	return 0;
	
}
