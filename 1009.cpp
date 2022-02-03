#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *String=(char*)malloc(80*sizeof(char));
    scanf("%[^\n]",String);//在字符串里输入空格
    int cnt;
    cnt=strlen(String);
   // printf("%d\n",cnt);
    int i,j;i=j=cnt-1;
   // printf("%c,%c\n",String[i],String[j]);
    while(i>=0){
        while(String[i]!=' '&&i!=0){
            i--;
        }
        //printf("%c,%c\n",String[i],String[i]);
        if(i==0){i--;}
        for(int m=i+1;m<=j;m++){
            printf("%c",String[m]);
        }
        if(i>=0){printf(" ");}
        i--;j=i;
    }
    /*for(int i=0;i<cnt;i++){
        printf("%c",String[i]);
    }*/
    return 0;
}