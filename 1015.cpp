#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int stdnumber;
	int descore;
	int caiscore;
	int sum;
}_Std;
int main(){
	int n,low,high;
	scanf("%d%d%d",&n,&low,&high);
	_Std *Stduents=(_Std*)malloc(n*sizeof(_Std));
	for(int cnt=0;cnt<n;cnt++){
		scanf("%d%d%d",&Stduents[cnt].stdnumber,&Stduents[cnt].descore,&Stduents[cnt].caiscore);
		Stduents[cnt].sum=Stduents[cnt].descore+Stduents[cnt].caiscore;
	}
	
	return 0;
}