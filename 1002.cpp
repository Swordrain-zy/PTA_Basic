#include <stdio.h>
#include <math.h>
int numberlength(char s[]);
int xlength(int a);
int xnumber(int a,int b);//???????? 
int main(){
	char number[102]={0,};//????????????????\0?????? ??????????????? 
	int x=0,len;
	scanf("%s",number);
	len=numberlength(number);
	//printf("%d\n",len);
	for(int i=0;i<len;i++){ //????????????????????x ??????????????? 
	x+=(number[i]-48);	
	}
	//printf("%d\n",x); 
	int xlen=xlength(x);
	//printf("%d\n",xlen); 
	xnumber(x,xlen);
	return 0;
} 

int numberlength(char *s){//?????????????? 
	int l;
	for(l=0;s[l]!=0;l++){
	//printf("%d\n",l);	
	}
	return l;
}
int xlength(int a){//??x???????? 
	int i=1,cnt=0,t=10;
	while(t>=10){
	t=a/i;
	i*=10;
	cnt++;	
	}
	return cnt;
}
int xnumber(int a,int b){//??????????????????????????? 
	int i=pow(10,b-1);
	int t;
	while(i>0){
		t=a/i;
		a-=t*i;
		if(i==1)
			switch(t){
				case 0:
					printf("ling");
					break;
				case 1:
					printf("yi");
					break;
				case 2:
					printf("er");
					break;
				case 3:
					printf("san");
					break;
				case 4:
					printf("si");
					break;
				case 5:
					printf("wu");
					break;
				case 6:
					printf("liu");
					break;
				case 7:
					printf("qi");
					break;
				case 8:
					printf("ba");
					break;
				case 9:
					printf("jiu");
					break;
			}
		else
			switch(t){
				case 0:
					printf("ling ");
					break;
				case 1:
					printf("yi ");
					break;
				case 2:
					printf("er ");
					break;
				case 3:
					printf("san ");
					break;
				case 4:
					printf("si ");
					break;
				case 5:
					printf("wu ");
					break;
				case 6:
					printf("liu ");
					break;
				case 7:
					printf("qi ");
					break;
				case 8:
					printf("ba ");
					break;
				case 9:
					printf("jiu ");
					break;
			}	
		i/=10;
	}	
}

//???10??100??????ʦ????????????????????????????????????1-48???????1.
//??????????????101??????+\0???????????????????????????????x??
//?????????????????x??????switchcase????????? 













