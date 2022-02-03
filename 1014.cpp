#include <stdio.h>
#include <stdlib.h>
int main(){
    char *s1,*s2,*s3,*s4;
    s1=(char*)malloc(61*sizeof(char));
    s2=(char*)malloc(61*sizeof(char));
    s3=(char*)malloc(61*sizeof(char));
    s4=(char*)malloc(61*sizeof(char));
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    scanf("%s",s4);
    int i=0,tag1=0;
    while(s1[i]&&s2[i]){
        if(s1[i]==s2[i]&&tag1==0&&s1[i]>=65&&s1[i]<=71){
            switch(s1[i]){
                case 65:
                printf("MON ");break;
                case 66:
                printf("TUE ");break;
                case 67:
                printf("WED ");break;
                case 68:
                printf("THU ");break;
                case 69:
                printf("FRI ");break;
                case 70:
                printf("SAT ");break;
                case 71:
                printf("SUN ");break;
            }
            i++;tag1=1;
        }
        else if(s1[i]==s2[i]&&tag1==1){
            if(s1[i]>=48&&s1[i]<=57){
                printf("0%d:",s1[i]-48);break;
            }
            else if(s1[i]>=65&&s1[i]<=78) {
                printf("%d:",s1[i]-55);break;
            }
            else{i++;}
        }
        else{i++;}
    }
    int j=0;
    while(s3[j]&&s4[j]){
        if(s3[j]==s4[j]&&s3[j]>=97&&s3[j]<=122){
            if(j+1<=10) {printf("0%d",j);}
            else {printf("%d",j);}
            break;
        }
        else if(s3[j]==s4[j]&&s3[j]>=65&&s3[j]<=90){
            if(j+1<=10) {printf("0%d",j);}
            else {printf("%d",j);}
            break;
        }
        else j++;
    }
    free(s1);free(s2);free(s3);free(s4);
    return 0;
}