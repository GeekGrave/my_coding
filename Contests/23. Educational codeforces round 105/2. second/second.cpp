
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    vector<pair<int, int> > v;
    v.push_back({u,0});
    v.push_back({r,1});
    v.push_back({d,2});
    v.push_back({l,3});
    map<int, int> m;
    m[0]=u;
    m[1]=r;
    m[2]=d;
    m[3]=l;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    // for(int i=0;i<4;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    int nn[4]={0};
    for(int i=0;i<4;i++){
        nn[v[i].second]+=m[v[i].second];
        if(n==2){
            continue;
        }
        if(v[i].first==n){
            if(v[i].second==0 || v[i].second==2){
                nn[3]++;
                nn[1]++;
                if(m[3]!=0)
                    m[3]--;
                if(m[1]!=0)
                    m[1]--;
            }
            else if(v[i].second==3 || v[i].second==1){
                nn[0]++;
                nn[2]++;
                if(m[2]!=0)
                    m[2]--;
                if(m[0]!=0)
                    m[0]--;
            }
        }
        else if(v[i].first>n-2){
            if(v[i].second==0 || v[i].second==2){
                if(nn[3]<nn[1]){
                    nn[3]++;
                    if(m[3]!=0)
                        m[3]--; 
                }
                else{
                    nn[2]++;
                    if(m[2]!=0)
                        m[2]--;
                }
            }
            else if(v[i].second==3 || v[i].second==1){
                if(nn[0]<nn[2]){
                    nn[0]++;
                    if(m[0]!=0)
                        m[0]--;
                }
                else{
                    nn[2]++;
                    if(m[2]!=0)
                        m[2]--;
                }
            }
        }
    }
    int ctr=0;
    // for(int i=0;i<4;i++){
    //     cout<<nn[i]<<endl;
    // }
    if(nn[0]==u){
        ctr++;
    }
    if(nn[1]==r){
        ctr++;
    }
    if(nn[2]==d){
        ctr++;
    }
    if(nn[3]==l){
        ctr++;
    }
    if(ctr==4){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
