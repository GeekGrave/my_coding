#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        string s[n];
        unordered_map<string, set<char> > m;
        unordered_map<string, set<char> >::iterator j;
        unordered_map<string, set<char> >::iterator i;
        for(ll i=0;i<n;i++){
            cin>>s[i];
            string x = s[i].substr(1);
            m[x].insert(s[i][0]);
        }

        int ctr=0;
        int x=0;
        set<int> p;
        for(i = m.begin();i!=m.end();i++){
           
            set<char> s1 = i->second;
            x++;
            if(next(i,1)==m.end())
                break;
             int ctr2=0;
             
            for(j = next(m.begin(),x);j!=m.end();j++){
                int ctr1=0;
                set<char> s2 = j->second;
                for(auto k1 : s1){
                    if(s2.find(k1)!=s2.end()){
                        if(p.find(k1)!=p.end())
                            continue;
                        p.insert(k1);
                        ctr1+=2;
                        // s2.erase(k1);
                    }
                }
                ctr2+=s1.size() + s2.size()- ctr1;
            }
            ctr+=ctr2;
        }
        cout<<ctr<<endl;
    }
    return 0;
}