//Hemaank Mahajan 2K20/A7/08
// A program to Sort an array using bubble sort

#include <stdio.h>
#include <string.h>

void BubbleSort(int *arr,int Len){
	for(int j=Len-2;j>=0;j--){
		for(int i=0;i<=j;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}

int main(){
	printf("Hemaank Mahajan 2K20/A7/08\n");
	printf("Enter the number of elements\n");	
	int Length;
	scanf("%d",&Length);
	int array[Length];
	printf("Enter the values:\n");
	for (int i=0;i<Length;i++){
		scanf("%d",&array[i]);
	}
	BubbleSort(array,Length);
	for(int k=0;k<Length;k++){
		printf("%d\t",array[k]);
	}
}