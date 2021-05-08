// A C++ Program to generate test cases for 
// array filled with random numbers 
#include<bits/stdc++.h> 
using namespace std; 

// Define the number of runs for the test data 
// generated 
#define RUN 10

// Define the range of the test data generated 
#define MAX 10

// Define the maximum number of array elements 
#define MAXNUM 10
#define ll long long int

int main() 
{ 
	// Uncomment the below line to store 
	// the test data in a file 
	freopen ("input_5.txt", "w", stdout); 

	//For random values every time 
	srand(time(NULL)); 
    printf("%d\n", RUN);
	for (int i=1; i<=RUN; i++) 
	{ 
		// Number of array elements 
		int NUM = 2 + rand() % MAXNUM; 

		// First print the number of array elements
		printf("%d ", NUM);
        // srand(time(NULL));
        printf("%d\n", 2 + rand() % (NUM-1));

		// Then print the array elements separated 
		// by space 
		// srand(time(NULL)); 
		unordered_map <ll,ll> m;
		int ctr=0;
		while(ctr<NUM) {
			int r =(2 + rand() % MAX);
			if(r<2)
				continue;   
			if(m[r]==0){
				printf("%d ", r); 
				m[r]++;
				ctr++;
			}
		}

		printf("\n"); 
	} 

	// Uncomment the below line to store 
	// the test data in a file 
	//fclose(stdout); 
	return(0); 
} 
