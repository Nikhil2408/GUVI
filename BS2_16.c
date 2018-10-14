//Display prime numbers between two numbers
#include<stdio.h>
#include<math.h>
void prime(int n){
	int sroot,i,count=0;
	sroot = sqrt(n);
	for(i=2;i<=round(sroot);i++){
		if(n%i==0)
			count+=1;
	}
	if(count==0)
		printf("%d ",n);
}
int main(){
	int n1,n2,i;
	scanf("%d %d",&n1,&n2);
	if(n1==0)
		n1 = 1;
	for(i=n1+1;i<n2;i++){
		prime(i);
	}
	return 0;
}
