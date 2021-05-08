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
    int n,k;
    cin>>n>>k;
    int ar[n],ar1[n];

    fin(i,0,n){
        cin>>ar[i];
        ar1[i]=ar[i];
    }
    int i=0,j=n-1;
    while(k!=0 && i<n-1){
        while(ar1[i]>0){
            ar1[i]--;
            ar1[j]++;
            k--;
            if(k==0){
                break;
            }
        }
        i++;
        // j--;
    }
    fin(i,0,n){
        cout<<ar1[i]<<" ";
    }
    cout<<endl;
}

signed main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}