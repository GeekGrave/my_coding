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
    int n,w,wr;
    cin>>n>>w>>wr;
    int ar[n];
    mll m;
    fin(i,0,n){
        cin>>ar[i];
        m[ar[i]]++;
    }
    int req = w-wr;
    vector<pair<int,int> > v,v1;
    for(auto i : m){
        v.pb({i.first,i.second});
        
    }
    // cout<<req<<endl;
    sort(v.begin(),v.end());
    fin(i,0,v.size()){
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        
        if(v[i].first>req){
            break;
        }
        v1.pb({v[i].first,v[i].second});
    }
    if(wr>=w){
        cout<<"YES\n";
        return;
    }
    else{
        int s=0;
        fin(i,0,v1.size()){
            if(v1[i].second>1){
                int a = (v[i].second)/2;
                s+=v[i].first*2*a;
            }
            if(s>=req){
                // cout<<s<<endl;
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
        return;
    }

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