#include <stdio.h>
#include <stdlib.h>
bool judge(char *s);
#define MAXSIZE 101

typedef struct{
    char test[MAXSIZE];
    bool result;
}Teststring;

int main(){
    int n; scanf("%d",&n); 
    Teststring *T=(Teststring*)malloc(n*sizeof(Teststring));
    for(int i=0;i<n;i++){
        scanf("%s",T[i].test);
        T[i].result=judge(T[i].test);  
    }
    for(int i=0;i<n;i++){
        if(T[i].result==true)
            if(i<n-1) printf("YES\n");
            else printf ("YES");
        else
            if(i<n-1) printf("NO\n");
            else printf ("NO");
    }
}
bool judge(const char *s){
    if(/*correct*/) return true;
    else
        return false;
}