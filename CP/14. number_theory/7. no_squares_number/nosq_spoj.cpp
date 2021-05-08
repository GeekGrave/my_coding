#include<bits/stdc++.h>
using namespace std;

int64_t sqno[1001001L];

void squarefr(){
    sqno[1]=1;
    for(int64_t i = 2;i<1000;i++){
        if(sqno[i]!=-1){
                for(int64_t j=i*i;j<=1000000L;j+=i*i){
                    sqno[j]=-1;
                }
        }
    }
}

int main(){
    int64_t t;
    squarefr();
    cin>>t;
    for(int64_t i=1;i<=t;i++){
        int64_t a,b,d;
        cin>>a>>b>>d;
        int ctr=0;
        for(int64_t j=a;j<=b;j++){
            int64_t x=j,p=0;
            if(sqno[j]==0){
                while(x>0){
                    int w=x%10;
                    if(w==d){
                        p=1;
                        break;
                    }
                    x=x/10;
                }
                if(p==1)
                    ctr++;
            }
        }
        cout<<ctr<<endl;
    }
    return 0;
}