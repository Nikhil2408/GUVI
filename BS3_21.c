/* 
Find the sum of an Arithmetic Progression till N terms given N,A,D
N -> No of terms
A -> First Term
D -> Comman Difference
Sum = n/2(2a+(n-1)d)
*/
#include<stdio.h>
int main(){
	int n,a,d;
	int sum;
	scanf("%d %d %d",&n,&a,&d);
	sum = (n*(2*a + (n-1)*d))/2;
	printf("%d",sum);
	return 0;
}
