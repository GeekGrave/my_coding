#include <iostream> 
#include <cmath> 
#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000000 
vector<bool>p(MAX,true); 
vector<int>primes; 
void gen_primes()  
{ 
	unsigned i,j,c=1;  
	for(i=2;i<=sqrt(MAX);++i) 
	{ 
		if (p[i]) 
		{ 
			for(j=i;j*i<MAX;++j) p[i*j] = false;  
		} 
		 
	} 
	primes.push_back(2); 
	for(int i=3;i<MAX;i+=2)if(p[i])primes.push_back(i); 
} 
int f(int a,int b,int div) 
{ 
    unsigned int cnt=0,v=0; 
    for(int i=a;i<=b;i++) 
    { 
        int h=i,ans=1; 
        for(int j=0;primes[j]*primes[j]<=h;j++) 
        { 
                v=0; 
                if(h%primes[j]==0) 
                { 
                         
                        while(h%primes[j]==0) 
                        { 
                                v++; 
                                h/=primes[j]; 
                        } 
                } 
                ans*=(v+1); 
        } 
        if(h>1)ans<<=1; 
        if(ans==div)  cnt++; 
     } 
     return cnt; 
} 
  
  
int main() 
{ 
	 gen_primes(); 
     int a,b; 
     int div; 
     scanf("%d%d%d",&a,&b,&div); 
     int cnt=f(a,b,div); 
     printf("%d\n",cnt); 
     return 0; 
} 