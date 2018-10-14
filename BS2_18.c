// Display Armstrong Number between 2 numbers
#include<stdio.h>
#include<math.h>
void armstrong(int n); //See whether the number is armstrong number or not
int count(int n); 	   // Count the number of digits are there in the number(only positive numbers)
int main(){
	int n1,n2,i;
	scanf("%d %d",&n1,&n2);
	for(i=n1+1;i<n2;i++){
		armstrong(i);
	}
	return 0;
}
void armstrong(int n){
	int count1, rem, new_num=0, temp;
	count1 = count(n);
	temp = n;
	while(temp>0){
		rem = temp%10;
		new_num = new_num + pow(rem,count1);
		temp = temp/10;
	}
	if(n==new_num)
		printf("%d ",n);
}
int count(int n){
	return ceil(log10(n));
}
