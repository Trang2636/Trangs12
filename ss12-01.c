#include<stdio.h>
int calculateSum(int a , int b ){
	int sum = a+b ;
	printf("Tong hai so la :%d",sum); 
	return sum ; 
} 
	int main(){
		int calculateSum(); 
		int a,b,sum; 
	printf("Moi ban nhap vao so thu nhat: ");
	scanf("%d",&a);	
		printf("Moi ban nhap vao so thu hai: ");
	scanf("%d",&b);	
	calculateSum(a,b); 
	
return 0;	
} 
   
