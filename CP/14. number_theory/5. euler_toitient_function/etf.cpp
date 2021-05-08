#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int result = n;
		for(int i = 2;i*i<=n;i++){
			if(n%i==0){
				result = result / i;
				result = result * (i-1);
			}
			while(n%i==0){
				n/=i;
			}
		}
		if(n>1){
			result = result/n;
			result*=(n-1);
		}
		cout<<result<<endl;
	}
	return 0;
}