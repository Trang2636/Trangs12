#include<stdio.h>
  int findMax(int size,int arr[]){
  	int max =arr[0]; 
  	int i; 
    for(i=1;i<size;i++){
		  if(arr[i]>max){
		  	max=arr[i];	   
		  } 
	  }  
	  return max ; 
  } 
    int main(){
  int arr[]={6,9,2,5,7};
  int size = sizeof(arr)/sizeof(int); 
    printf("So lon nhat trong mang la : %d",findMax(size,arr));
	return 0; 
} 
