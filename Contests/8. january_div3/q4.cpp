#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x==y){
            cout<<n<<" "<<n<<endl;
            continue;
        }
        k = k%4;
        if(x>y){
            switch(k){
            case 0:
                cout<<x-y<<" "<<0<<endl;
                break;
            case 1:
                cout<<n<<" "<<n-x+y<<endl;
                break;
            case 2:
                cout<<n-x+y<<" "<<n<<endl;
                break;
            case 3:
                cout<<0<<" "<<x-y<<endl;
                break;
            }
        }
        else{
            switch(k){
            case 0:
                cout<<0<<" "<<y-x<<endl;
                break;
            case 1:
                cout<<n-y+x<<" "<<n<<endl;
                break;
            case 2:
                cout<<n<<" "<<n-y+x<<endl;
                break;
            case 3:
                cout<<y-x<<" "<<0<<endl;
                break;
            }
        }
    }
}