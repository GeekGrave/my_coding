#include <iostream>
using namespace std;

int main() {
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int s=0,x=0;
    while(d1!=1 && d2!=1){
        d1--;
        d2--;
        x++;
    }
    while(s<p){
        //cout<<x<<" "<<s<<endl;
        if(d1<d2){
            s=s+v1;
            d1++;
            x++;
        }
        else if(d2<d1){
            s=s+v2;
            d2++;
            x++;
        }
        else{
            s=s+v1+v2;
            d1++;
            d2++;
            x++;
        }
    }
    cout<<x;//<<"    "<<s;
    // cout<<s;
	return 0;
}
