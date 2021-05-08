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

int ar[102][102];
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > v;
    // map<int,vector<int> > v;
    vll v1,v2;
    fin(j,0,n){
        fin(i,0,m){
            int x;
            cin>>x;
            v2.pb(x);
            v1.pb(x);
        }
        sort(v1.begin(),v1.end(),greater<int>());
        // if(j%2==0)
        //     sort(v1.begin(),v1.end());
        // else{
        //     sort(v1.begin(),v1.end(),greater<int>());
        // }
        v.pb(v1);
        v1.clear();
    }
    sort(v2.begin(),v2.end());
    vll v5;
    int s=0;
    fin(i,0,m){
        v5.pb(v2[i]);
        s+=v5[i];
    }

    int x=0;
    // cout<<s<<endl;
    while(x<v5.size()){
        int f=0;
        fin(i,0,n){
            fin(j,0,m){
                if(v[i][j]==v5[x] && ar[i][j]!=1){
                    int t = v[i][x];
                    v[i][x]=v[i][j];
                    v[i][j]=t;
                    f=1;
                    ar[i][x]=1;
                    break;
                }
            }
            if(f==1){
                break;
            }
        }
        x++;
    }
    fin(i,0,n){
        fin(j,0,m){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

signed main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        fill(ar,0);
        solve();
    }
    return 0;
}