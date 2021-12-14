
// A program to Sort an array using Selection sort

#include <stdio.h>
#include <string.h>

void SelectionSort(int *arr,int Len){
        for(int i=0;i<Len;i++){
            int min=arr[i];
            int Pos=i;
            for (int  j = i; j < Len; j++)
            {
                if(min>=arr[j]){
                    min=arr[j];
                    Pos=j;
                }    
            }
            int temp=arr[i];
            arr[i]=min;
            arr[Pos]=temp;   
        }
}

int main(){
	
	printf("Enter the number of elements\n");	
	int Length;
	scanf("%d",&Length);
	int array[Length];
	printf("Enter the values:\n");
	for (int i=0;i<Length;i++){
		scanf("%d",&array[i]);
	}
	SelectionSort(array,Length);
	for(int k=0;k<Length;k++){
		printf("%d\t",array[k]);
	}
}