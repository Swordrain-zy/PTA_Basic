#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int b,s,g;
	b=n/100;
	s=(n-b*100)/10;
	g=(n-b*100-s*10);
	for(int i=0;i<b;i++){
		printf("B");
	}
	for(int i=0;i<s;i++){
		printf("S");
	}
	for(int i=0;i<g;i++){
		printf("%d",i+1);
	}
	return 0;	
} 
