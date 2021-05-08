#include<stdio.h>
#include<string.h>

int fun(char *s){
    int ctr=0;
    while(*s!='\0'){
        ctr++;
        s++;
    }
    return ctr;
}
int main(){
    char s[10000];
    printf("Enter a string : ");
    scanf("%s",s);
    printf("Length of the string is : %d",fun(s));
}