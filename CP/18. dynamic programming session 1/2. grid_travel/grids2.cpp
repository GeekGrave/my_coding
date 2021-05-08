#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll r=1000;
const ll c=1000;
// ll grid_travel(ll, ll, int ar[][1000] );

ll grid_travel(ll m,ll n, vector<vector<int> > ar){
    // are the args in the memo
    // stringstream ss;
    // stringstream ss2;
    // string s1,s2;
    // ss<<m;
    // ss>>s1;
    // ss2<<n;
    // ss2>>s2;
    // string key = s1 + "," + s2;
    // cout<<key<<" "<<ar[key]<<endl;
    cout<<ar[m][n]<<endl;
    if(m==1 && n==1){
        return 1;
    }
    if(m==0 || n==0){
        return 0;
    }
    if(ar[m][n]!=-1){
        return ar[m][n];
    }
    
    ar[m][n] = grid_travel(m-1,n,ar) + grid_travel(m,n-1,ar); 
    // ar[key]++;
    return ar[m][n];
}
int main(){
    ll m,n;
    cin>>m>>n;
    // int len=INT_MAX;
    // int ar[len];
    // map<string,ll> ar;
    // int ar[r][c];
    vector<vector<int> >ar;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ar[i][j]=-1;
        }
    }
    // memset(ar,-1,sizeof(ar));
    ll ans = grid_travel(m,n,ar);
    
    // cout<<s<<endl;
}
