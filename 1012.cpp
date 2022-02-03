#include <stdio.h>
#include <stdlib.h>
int main(){
    int N; scanf("%d",&N);
    int *A=(int*)malloc (N*sizeof(int));
    for(int i=0;i<N;i++){scanf("%d",&A[i]);}
    //for(int i=0;i<N;i++){printf("%d",A[i]);}
    int A1=0,A2=0,A3=0,A5=0;
    double A4=0;
    int flag=0,cnt1=0,cnt2=0,cnt4=0;
    for(int i=0;i<N;i++){
        if(A[i]>1000){return 0;}
        if(A[i]%10==0){A1+=A[i];cnt1++;}
        int t=A[i]%5;
        switch (t)
        {
        case 1:
			if(flag==0){A2+=A[i];flag=1;}
            else{A2-=A[i];flag=0;}
            cnt2++;
			break;
		case 2:
			A3++;
			break;
		case 3:
			A4+=A[i];
            cnt4++;
			break;
		case 4:
			if(A[i]>A5){A5=A[i];}
			break;
        default:
            break;
        }
    }
    if(cnt1==0){A1=78;printf("%c ",A1);}else{printf("%d ",A1);}
    if(cnt2==0){A2=78;printf("%c ",A2);}else{printf("%d ",A2);}
    if(A3==0){A3=78;printf("%c ",A3);}else{printf("%d ",A3);}
    if(cnt4==0){printf("N ");}else{A4=A4/cnt4;printf("%.1f ",A4);}
    if(A5==0){A5=78;printf("%c",A5);}else{printf("%d",A5);}
    free(A);
    return 0;
}