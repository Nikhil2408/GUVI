//Check whether a character is constant or not
#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		printf("Vowel");
	else if((ch>='b' && ch<='z') ||(ch>='B' && ch<='Z'))
		printf("Consonant");
	else
		printf("Invalid");
	return 0;
}
