// Check whether a number is Armstrong Number or not
#include<stdio.h>
#include<math.h>
int main(){
	int n,count=0,temp;
	int armstrong=0,rem;
	int i;
	scanf("%d",&n);
	// Coounting the number of digits in a number
	temp=n;
	while(temp>0){
		temp=temp/10;
		count+=1;
	}
	// Calculating the number
	temp = n;
	while(temp>0){
		rem = temp%10;
		armstrong = armstrong + pow(rem,count);
		temp = temp/10;
	}
	if(n==armstrong)
		printf("yes");
	else
		printf("no");
	return 0;
}
