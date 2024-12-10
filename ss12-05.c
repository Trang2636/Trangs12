#include<stdio.h>
bool findPrime( int n, int n1 ){
	int i; 
	for(i=2;i*i<=n ;i++){
		if(n%i==0){
			return false; 
		} 
	}
	return true ; 
	for(i=2;i*i<=n1 ;i++){
		if(n1%i==0){
			return false; 
		} 
	}
	return true ; 
} 
int main(){
	int n ,i,n1; 
	printf("Moi ban nhap vao so nguyen duong thu nhat  : ");
	scanf("%d",&n);
		printf("Moi ban nhap vao so nguyen duong thu hai : ");
	scanf("%d",&n1);
	if(findPrime(n,n1)){
		printf("%d la so nguyen to ",n); 
	}else{
		printf("%d khong la so nguyen to ",n); 
	} 
	
		if(findPrime(n,n1)){
		printf("%d la so nguyen to ",n1); 
	}else{
		printf("%d khong la so nguyen to ",n1); 
	} 
	
	
	return 0; 
} 
