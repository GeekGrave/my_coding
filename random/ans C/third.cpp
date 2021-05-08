#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float sum=1,i=-1,x=1;
    while(x<=n){
        i+=2;
        float f=1;
        for(float j=1;j<=i;j++){
            f*=j;
        }
        sum+=1.0/f;
        x++;
    }
    printf("%f\n",sum);
}