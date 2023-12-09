#include<stdio.h>
#include<conio.h>
void printArray(int *Array,int size){
	for(int i=0;i<size;i++){
		printf("%d ",Array[i]);
	}
	printf("\n");
}
		
void bubblesort(int *Array,int size){
	int temp;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(Array[j]>Array[j+1]){
				temp =Array[j];
				Array[j]=Array[j+1];
				Array[j+1]=temp;
			}
		}
	}
}
int main(){
	int Array[]={20,60,10,30,0,01,02,03,89,75,53,36,45,63};
	int size=14;
	printArray(Array,size);
	bubblesort(Array,size);
	printArray(Array,size);
	return 0;
	
	
}
