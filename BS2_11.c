// Calculate the power of a number given the number and the number
#include<stdio.h>
int main(){
	int i,n,p,ans=1;
	scanf("%d %d",&n,&p);
	for(i=0;i<p;i++){
		ans = ans*n;
	}
	printf("%d",ans);
	return 0;
}
