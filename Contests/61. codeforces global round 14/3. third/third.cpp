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
    int n,m,x;
    cin>>n>>m>>x;
    int h[n];
    int s=0;
    vector<pair<int,int> > v,v1;
    mll m1,m2;
    fin(i,0,n){
        cin>>h[i];
        m1[i] = h[i];
        v.pb({h[i],i});
        s+=h[i];
    }
    sort(h,h+n);
    int a = n-m;
    int b = ceil(n/(m*1.0));

    // cout<<a<<" "<<b<<endl;
    int ar[m];
    int l = 0;
    for(int i = n-1;i>=n-m;i--){
        ar[l++] = h[i];
    }
    int len = m-1;
    l=n-l-1;
    cout<<l<<endl;
    int max = ar[0];
    for(int i = m-1;i>=0;i--){
        while(l>=0 || abs(ar[i]-max)>x){
            ar[i]+= h[l--];
            // cout<<ar[i]<<endl;
            if(ar[i]>max){
                max = ar[i];
                break;
            }
        }
        if(l<0){
            break;
        }
        if(i==0){
            i=m;
        }
    }
    fin(i,0,m){
        cout<<ar[i]<<" ";
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