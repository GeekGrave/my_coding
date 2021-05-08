#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    string p;
        cin.ignore();
        getline( cin, p);
        if(p[6]=='P' && p.substr(0,2)!="12"){
            string x = p.substr(0,2);
            int a = stoi(x)+12;
            string str = to_string(a);
            p.replace(0,2,str);
        }
        else if(p[6]=='A' && p[0]=='1' && p[1]=='2'){
            p.replace(0,2,"00");
        }
        p.erase(p.begin() + 2);
        p.erase(5);
        int a = stoi(p);

        ll n;
        cin>>n;
        string ans="";
        while(n--){
            string l1,l2,r1,r2;

            cin>>l1;
            cin>>l2;
            cin>>r1;
            cin>>r2;
        
            if(l2[0]=='P' && l1.substr(0,2)!="12"){
                string x = l1.substr(0,2);
                int a = stoi(x)+12;
                string str = to_string(a);
                l1.replace(0,2,str);
            }
            else if(l2[0]=='A' && l1[0]=='1' && l1[1]=='2'){
                l1.replace(0,2,"00");
            }
            l1.erase(l1.begin() + 2);
            int b = stoi(l1);
            
            if(r2[0]=='P' && r1.substr(0,2)!="12"){
                string x = r1.substr(0,2);
                int a = stoi(x)+12;
                string str = to_string(a);
                r1.replace(0,2,str);
            }
            else if(r2[0]=='A' && r1[0]=='1' && r1[1]=='2'){
                r1.replace(0,2,"00");
            }
            r1.erase(r1.begin() + 2);
            int c = stoi(r1);

            if(a>=b && a<=c){
                ans+='1';
            }
            else{
                ans+='0';
            }
        }
        cout<<ans<<endl;
	}	 
	return 0;
}
