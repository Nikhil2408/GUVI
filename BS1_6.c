//Check whether a year is leap or not
#include<stdio.h>
int main(){
	int year;
	scanf("%d",&year);
	char *ans = "no";
	if(year%4==0){
		ans = "yes";
		if(year%100==0){
			if(year%400==0){
				ans = "yes";
			}
			else
				ans = "no";
		}
	}
	printf("%s",ans);
}
