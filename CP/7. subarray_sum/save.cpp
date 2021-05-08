#include<bits/stdc++.h>
using namespace std;

void sort(int *a,int n){
    stack<int> s1;
    stack<int> s2;
    for(int i=0;i<n;i++){
        s1.push(a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            while(!s1.empty()){
                int x;
                x=s1.top();
                s1.pop();

                if(s2.empty()){
                    s2.push(x);
                }

                else{
                    if(s2.top() > x){
                        int t;
                        t=s2.top();
                        s2.pop();
                        s2.push(x);
                        s2.push(t);
                    }

                    else{
                        s2.push(x);
                    }
                }
            }
            a[n-1-i] = s2.top();
            s2.pop();
        }

        else{
            while(!s2.empty()){ 
                int x = s2.top();
                s2.pop();
                  
                if (s1.empty()){ 
                    s1.push(x); 
                }
                  
                else{ 
                    
                    if (s1.top() > x){ 
                        int t = s1.top();
                        s1.pop(); 
                        s1.push(x); 
                        s1.push(t); 
                    } 
                    
                    else{
                        s1.push(x); 
                    }
                } 
            } 
              
            a[n-1-i] = s1.top();
            s1.pop();     
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,n);
    return 0;
}
