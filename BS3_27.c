// Validate if a string is Numeric
#include<stdio.h>
int main(){
	char s[100];
	int i=0,count=0,ans=1;
	scanf("%s",s);
	while(s[i]!='\0'){
		i+=1;
		count++;
	}
	for(i=0;i<count;i++){
		if(s[i]>='0'&&s[i]<='9')
			continue;
		else{
			ans=0;
			break;
		}
	}
	if(ans==0)
		printf("no");
	else
		printf("yes");
	return 0;
}
