#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10000
void swap(int &i,int &j);
int main(){
	//printf("please input numbers of test element:\n");
	int number; 
	do{scanf("%d",&number);}
	while(number<1||number>=100);
	bool visited[MAXSIZE];bool mark[10000];
	for(int i=0;i<MAXSIZE;i++) {visited[i]=false;}
	for(int i=0;i<10000;i++) {mark[i]=true;}
	int *A=(int*)malloc((number)*sizeof(int));
	for(int i=1;i<number;i++) {A[i]=0;}
	//printf("please input test elements:\n");
	for(int i=0;i<number;i++){scanf("%d",&A[i]);}
	for(int i=0;i<number-1;i++){//Select sort
        int max=i;
        for(int j=i+1;j<number;j++){
            if(A[j]>A[max]) {max=j;}
        }
        if(max!=i) {swap(A[max],A[i]);}
    }
	for(int i=0;i<number;i++){
		int test; test=A[i];
		//printf("your input is %d\n",test);
		if(test<=1||test>100) {return 0;}
		if(visited[test]==false){
			while(test!=1){
				if(visited[test]==true){
					if(test%2==0){mark[test]=false; test/=2;}
					else{mark[test]=false; test=(3*test+1)/2;}
				}
				else{
					if(test%2==0){visited[test]=true; test/=2;}
					else{visited[test]=true; test=(3*test+1)/2;}
				}
			}//while
		}//if
		else{mark[test]=false;}
	}//for
	int cnt=0;
	for(int i=0;i<number;i++){
		if(mark[A[i]]==true) {cnt=A[i];}
		}
	for(int i=0;i<number;i++){
		if(mark[A[i]]==true&&cnt!=A[i]) {printf("%d ",A[i]);}
		else if(mark[A[i]]==true){ printf("%d",A[i]);}
		}
	return 0;
}
void swap(int &i,int &j){
    int temp;
    temp=i;i=j;j=temp;
}