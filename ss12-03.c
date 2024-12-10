#include<stdio.h>
int giaiThua(int n  ){
	int result =1;
	int i; 
for( i=1; i<=n; i++){
   result= result*i; 
}
	return result; 	
}

int main(){

	int n ; 
		printf("Moi ban nhap vao so nguyen : ");
	scanf("%d",&n); 
	printf("Giai thua cua so nguyen do la : %d", giaiThua(n)); 

	
	return 0; 
} 
