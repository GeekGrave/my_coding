#include<stdio.h>

int main(){
    char s[10000];
    scanf("%s",s);
    int ctr=0;
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<'Z')){
            ctr++;
        }
    }
    printf("%d",ctr);
}