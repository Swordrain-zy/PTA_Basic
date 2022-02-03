#include <stdio.h>
int main(){
	int x,cnt=0;
	do{
	scanf("%d",&x);
	}while(x>1000||x<1);	
	while(x>1){
		if(x%2==0)
			x/=2;
		else
			x=(3*x+1)/2;
		cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
