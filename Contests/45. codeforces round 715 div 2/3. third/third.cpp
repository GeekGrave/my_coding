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

void solve(){
    int n;
    cin>>n;
    int ar[n],ar2[n];
    fin(i,0,n){
        cin>>ar[i];
        ar2[i]=ar[i];
    }   
    sort(ar2,ar2+n);
    int sum=9999999999;
    int min=9999999999;
    int pos=0;
    int s=0;
    fin(i,1,n-1){
        if(ar[i]-ar[i-1]<min){
            min=ar[i]-ar[i-1];
            pos=i;
        }
    }
    // cout<<pos<<endl;
    fer(i,pos,1){
        s+=ar[pos]-ar[i];
    }
    fin(i,pos+1,n-1){
        s+=ar[i]-ar[1];
    }
    s+=ar[n-1]-ar[1];
    s+=ar[n-1]+ar[0];
    cout<<s<<endl;

}

signed main(){
    fast;
    int t=1;
    // cin>>t;

    while(t--){
        solve();
    }
    return 0;
}