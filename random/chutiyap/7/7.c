#include<stdio.h>

int main(){
    char s[10000];
    fgets(s,sizeof(s),stdin);
    printf("%c",s[0]);
    char a = ' ';
    for(int i=1;s[i]!='\0';i++){
        if(s[i-1]==' ')
            printf("%c",s[i]);
    }
}