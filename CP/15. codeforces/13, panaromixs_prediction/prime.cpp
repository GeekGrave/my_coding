#include<bits/stdc++.h>
using namespace std;
int isPrime[60];
int n=60;
void fun(){
    for(int i=2;i<=n;i++)
        isPrime[i]=1;
    for(int i=2;i<=n;i++){
        if(isPrime[i]==1){
            for(int j=i*2;j<=n;j+=i){
                isPrime[j]=0;
            }   
        }
    }
}

int main(){
    fun();
    int n,m;
    cin>>n>>m;
    while(1){
        n++;
        if(isPrime[n]==1){
            if(n==m){
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;

}