#include <stdio.h>
#include <stdlib.h>
int main(){
    int para,index,flag=0;
    while(scanf("%d %d",&para,&index)!=EOF){   
      if(index!=0){   
        if(flag){
          printf(" %d %d",para*index,index-1);
        }else{
          printf("%d %d",para*index,index-1);
        }
        flag=1;
      }
    }
    if(!flag) puts("0 0");
    return 0;
}