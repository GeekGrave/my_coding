#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> fun(int a){
	ll n=a;
	ll ctr=0,len=0;
	int d=2;
	ll check[1001];
	ll expo[1001];
	while(a>1 && d<=sqrt(a)){
		int k=0;
		while(a%d==0){
			a/=d;
			k++;
		}
		if(k>0){
			check[len]=d;
			expo[len]=k;
			len++;
		}
		d++;
	}
	
	if(a>1){
		check[len]=a;
		expo[len]=1;
	}
	
	int x=1;
	vector<int> ar;
    for(int i=0;i<=len;i++){
        for(int j=1;j<=expo[i];j++){
            ar.push_back(pow(check[i],j));
        }
    }
	if(find(ar.begin(),ar.end(),n)==ar.end() && n!=1)
		ar.push_back(n);
	return ar;
}
int main() {
	ll a,b;
	cin>>a>>b;
	vector<int>ar;
	ar = fun(a);
	vector<int> ar2;
	ar2 = fun(b);

	int ctr=0;
	// for(int i=0;i<ar.size();i++){
	// 	cout<<ar[i]<<endl;
	// }
	// for(int i=0;i<ar2.size();i++){
	// 	cout<<ar2[i]<<endl;
	// }
	for(int i=0;i<ar.size();i++){
		if(find(ar2.begin(),ar2.end(),ar[i])!=ar2.end())
			ctr++;
	}
	int l=1;
	if(a==1 || b==1)
		cout<<l<<endl;
	else
		cout<<ctr+1<<endl;
	return 0;
}

