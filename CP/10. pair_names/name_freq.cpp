#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string first_name,second_name;
    map<pair<string,string>,int> m;
    for(int i=0;i<n;i++){
        cin>>first_name;
        cin>>second_name;
        pair<string,string> p = make_pair(first_name,second_name);
        m[p]++;
    }
    map<pair<string,string>,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        pair<string,string> p = it->first;
        cout<<p.first<<" "<<p.second<<"-"<<it->second<<endl;
    }
    return 0;
}