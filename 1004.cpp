#include <stdio.h>

typedef struct{
	char name[11];
	char number[11];//ע��߽�ֵ����\n��һ���ռ� 
	int score;
}Std;

int main(){
	int n,top=0,low=100,t,l;
	scanf("%d\n",&n);
	Std s[n];				//����˼�룺�ַ������� 
	for(int i=0;i<n;i++){
		scanf("%s %s %d",&s[i].name,&s[i].number,&s[i].score);//ѭ���е�scanf����Ҫ��\n 
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
