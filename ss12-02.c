#include<stdio.h>
void printArr(int size , int arr[]){
    for(int i=0;i<size;i++)
		printf("%3d",arr[i]);
} 
int main(){
	int i ;  
	int arr[]={1,8,8,2,6,3};
	int size=sizeof(arr)/sizeof(int); 
		printArr(size,arr); 	
	return 0; 
} 

