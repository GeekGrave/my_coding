#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int64_t isPrime[1000001L];

void fun(int64_t n){

    for(int64_t i=1;i<=n;i++)
        isPrime[i]=1;
    for(int64_t i=2;i<=n;i++){
        if(isPrime[i]==1){
            for(int64_t j=i*2;j<=n;j+=i){
                isPrime[j]+=i;
            }
        }
        else{
            for(int64_t j=i*2;j<=n;j+=i){
                isPrime[j]+=i;
            }
        }
    }
}

int64_t f(int64_t p){
    return isPrime[p];
}
int64_t series(int64_t i){
    if( i==0 )
        return 0;
    if( i==1 )
        return 0;
    return series(i-1) + f(i);
}

int main(){
    int64_t t,n;
    int64_t x=1000001L;
    fun(x);
    cin>>t;
    while(t--){
        cin>>n;
        cout<<series(n)<<endl;
    }
    return 0;
}