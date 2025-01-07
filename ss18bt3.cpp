#include<stdio.h>
void sum(int a,int b,int *result){
 *result= a +b;
	
}
int main (){
	int a=10;
	int b=20;
	int result=0;
	sum(a,b,&result);
	printf("tong cua a va b la : %d",result);
	
	return 0;
}
