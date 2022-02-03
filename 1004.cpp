#include <stdio.h>

typedef struct{
	char name[11];
	char number[11];//注意边界值，给\n留一个空间 
	int score;
}Std;

int main(){
	int n,top=0,low=100,t,l;
	scanf("%d\n",&n);
	Std s[n];				//核心思想：字符串数组 
	for(int i=0;i<n;i++){
		scanf("%s %s %d",&s[i].name,&s[i].number,&s[i].score);//循环中的scanf不需要打\n 
		if(s[i].score>top){
			top=s[i].score;
			t=i;
		}
		if(s[i].score <low){
			low=s[i].score;
			l=i;	
		}
	}
	printf("%s %s\n",s[t].name,s[t].number);
	printf("%s %s\n",s[l].name,s[l].number);
	return 0;
}
