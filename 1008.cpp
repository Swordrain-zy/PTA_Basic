#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int *A;
    int front,rear;
}SqQueue;
int main(){
    //printf("length & shift of array:\n");
    int n[2];
    for(int i=0;i<2;i++){
        scanf("%d",&n[i]);
    }
    if(n[0]<1||n[0]>100){
        return 0;
    }
    if(n[1]<0){
            return 0;
    }
    n[1]=n[1]%n[0];
    SqQueue Q; Q.A=(int*)malloc((n[0]+1)*sizeof(int));
    Q.front=Q.rear=0;
    //printf("elements of array:\n");
    for(int i=0;i<n[0];i++){
        scanf("%d",&Q.A[Q.rear++]);
    }
    Q.front=(Q.front+(n[0]-n[1]))%n[0];
    while((Q.rear+1)%n[0]!=Q.front){
        Q.rear=(Q.rear+1)%n[0];
    }
    while(Q.front!=Q.rear){
        printf("%d ",Q.A[Q.front]);Q.front=(Q.front+1)%n[0];
    }
    printf("%d",Q.A[Q.front]);
    return 0;
}