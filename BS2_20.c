// Given a number n, find first 5 multiples of it
#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=5;i++)
		printf("%d ",i*n);
	return 0;
}
