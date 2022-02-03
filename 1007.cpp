#include <stdio.h>
#include <math.h>
bool isprime(int a);
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1]={0,};
	a[0]=a[1]=-1;
	int t=sqrt(n);
	for(int i=2;i<=t;i++){
		if(isprime(i)==false){
			a[i]=1;
		}else{
			int x=2;
			while(x*i<=n){
				a[x*i]=1;
				x++;
			}	
		}
	}
	int cnt=0;
	for(int i=2;i<=n;i++){
		//printf("%d ",a[i]);
		if(a[i]==0){
			if(a[i+2]==0&&i+2<=n)
				cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

bool isprime(int a){
	int i;
	for(i=2;i<a;i++){
		if(a%i==0)
			break;			
	}
	if(i<a){
	return false;	
	}
	else{
	return true;	
	}
} 
