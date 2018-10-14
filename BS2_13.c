// Print whether a number is prime or not
#include<stdio.h>
#include<math.h>
int main(){
	int num,i,count=0;
	float sroot;
	scanf("%d",&num);
	sroot = sqrt(num);
	for(i=2;i<=round(sroot);i++){
		if(num%i==0)
			count+=1;
	}
	if(count>0)
		printf("no");
	else
		printf("yes");
	return 0;
}
