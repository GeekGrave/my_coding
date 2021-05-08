#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(1){
            ll j=n,f=0;
            while(j!=0){
                int d=j%10;
                if(d!=0 && n%d!=0){
                    f=1;
                    break;
                }
                j=j/10;
            }
            if(f==0){
                break;
            }
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}