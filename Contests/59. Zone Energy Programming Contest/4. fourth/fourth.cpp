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
    string s;
    cin>>s;
    string t="";
    int ctr=0,f=0;
    fin(i,0,s.length()){
        if(s[i]=='R'){
            ctr++;
            f=(f==1)?0:1;
            if(i==s.length()-1){
                break;
            }
            
            i++;
        }
        if(f){
            t = s[i] + t;
        }
        else{
            t = t + s[i];
        }
    }

    if(f){
        reverse(t.begin(),t.end());
    }
    for(int i=0;i<(((int)t.length())-1);i++){
        if(t[i]==t[i+1]){
            t.erase(i,2);
            i-=2;
        }
    }
    cout<<t<<endl;
}

signed main(){
    fast;
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}