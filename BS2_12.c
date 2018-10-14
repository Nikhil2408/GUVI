// Check whether a number is a palindrome or not
#include<stdio.h>
int main(){
	int n,rev=0,rem,temp;
	//1. First reverse the number
	//2. Check whether the reversed number is same as original number
	scanf("%d",&n);
	temp = n;
	while(temp>0){
		rem = temp%10;
		rev = rev*10 + rem;
		temp = temp/10;
	}
	if(rev==n)
		printf("yes");
	else
		printf("no");
	return 0;
}
