#include <bits/stdc++.h>
#define int long long
#define vll vector<int>
#define mll map<int,int>
#define pll pair<int,int>
#define pb push_back
#define mp make_pair
#define popcount    __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount  __builtin_popcountll
#define fin(i,c,n) for(int i=c;i<n;i++)
#define fer(i,c,n) for(int i=c;i>=n;i--)
#define fill(a, x) memset(a, x, sizeof(a))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define mod 1000000007
//Functions : 
int poww(int x,int y){int res=1; x%=mod; if(x==0) return 0; while(y>0){if(y&1) res=(res*x)%mod; y=y>>1,x=(x*x)%mod;} return res;}
using namespace std;
mll prime;
vll v1,v2;
int x=1;
void seive(){
    fin(i,0,10000000){
        prime[i]=1;
    }
    int a=1;
    fin(i,2,10000000){
        if(prime[i]){
            // prime[i]=a*i;
            for(int j=i*i;j<=10000000;j+=i){
                prime[i]=0;
            }
        }
    }
    fin(i,0,10000000){
        if(prime[i])
            v1.pb(i);
    }
}


void solve(){
    int z;
    cin>>z;
    cout<<"Case :"<<x<<": ";
    fin(i,1,v1.size()){
        if(v1[i]*v1[i-1]>z){
            cout<<v1[i-1]*v1[i-2];
            break;
        }
    }
    cout<<endl;
}

signed main(){
    fast;
    int t;
    cin>>t;
    seive();
    while(t--){
        solve();
    }
    return 0;
}