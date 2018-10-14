// Count the number of digits in a number
#include<stdio.h>
int main(){
	int n,i,count=0;
	scanf("%d",&n);
	while(n>0){
		count+=1;
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
