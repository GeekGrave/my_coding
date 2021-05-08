#include<stdio.h>
#include<iostream>
// #define SQUARE(x) (x*x)
#define SQUARE(x) (x)*(x)
// #define SQUARE(x) ((x)*(x))
using namespace std;

int main()
{   
    float result = 36.0/SQUARE(2+1);
    printf("%f",result);
}
