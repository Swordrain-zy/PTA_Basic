#include <stdio.h>
#include <stdlib.h>
#include <math.h>
bool Isprime (int x);
int main(){
    int M,N;
    scanf("%d%d",&M,&N);
    //求出第n个素数：
    int cnt=0,x=1;
    while(cnt<=N){
        bool t=Isprime(x);
        if(t&&cnt>=M&&cnt<=N){
            if((cnt-M+1)%10&&cnt!=N){printf("%d ",x);cnt++;x++;}
            else if((cnt-M+1)%10==0&&cnt!=N){printf("%d\n",x);cnt++;x++;}
            else{printf("%d",x);cnt++;x++;}
            }
        else if(t){cnt++;x++;}
        else{x++;}
    }
    return 0;
}
bool Isprime (int x){
    int a=sqrt(x);
    for(int i=2;i<=a;i++){
        if(x%i==0){return false;}
    }
    return true;
}