#include <stdio.h>
typedef struct{
	long int a;
	long int b;
	long int c;
} Group;
int main(){
	int n;
	scanf("%d",&n);
	Group g[n+1];
	for(int i=1;i<=n;i++){
		scanf("%ld %ld %ld",&g[i].a ,&g[i].b,&g[i].c);
	}
	for(int i=1;i<=n;i++){
		if((g[i].a+g[i].b)>g[i].c)
			printf("Case #%ld: true\n",i);
		else
			printf("Case #%ld: false\n",i);
	}
	return 0;
} 

