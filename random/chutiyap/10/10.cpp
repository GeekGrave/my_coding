#include<stdio.h>

int main(){
    char s[10000];
    scanf("%s",s);
    char vow[5] = {'a','e','i','o','u'};
    int ans=0;
    for(int i=1;s[i]!='\0';i++){
        int ctr=0;
        for(int j=0;j<5;j++){
            if(s[i]==vow[j]){
                ctr++;
            }
            if(s[i-1]==vow[j]){
                ctr++;
            }
        }
        if(ctr==2){
            ans++;
        }
    }
    printf("%d",ans);
}