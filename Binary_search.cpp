#include<stdio.h>
#include<conio.h>
int Binarysearch(int arr[],int size,int element){
	int low ,mid,high;
	low = 0;
	high =size-1;
	mid = (low+high)/2;
	while(low<=high){
		if(arr[mid]==element){
		printf("found");
	}
		else if(arr[mid]<element){
	//		yahan par mid+1 is liye lia hy kiunk hum next element se search krengy.
			low = mid+1;
			
		}
		else if(arr[mid]>element){
	//      yahan par mid-1 is liye lia hy kiunk hum prev element se search krengy.
			high = mid-1;
		}
	}
	printf("Element not found");
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(int);
	int element = 6;
	Binarysearch(arr,size,element);
	return 0;
}
