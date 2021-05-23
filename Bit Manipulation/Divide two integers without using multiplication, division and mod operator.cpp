// Divide two integers without using multiplication, division and mod operator

// https://ide.geeksforgeeks.org/rbGUBxfGSZ
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int divide(int divident , int divisor){
    int sign = (divident < 0 ) ^ (divisor < 0 ) ? -1 : 1 ; 
    
    divident = abs(divident);
    divisor = abs(divisor);
    
    int quotient = 0 , temp = 0 ;
    
    for(int i=31 ; i>=0 ; i--){
        if(divident >= (temp+(divisor<<i)) ){
            temp = divisor<<i;
            quotient |= 1LL<<i;
        }
    }
    return sign * quotient;
    
}

int32_t main() {
	int divident , divisor;
	cin>>divident>>divisor;
	cout<<divide(divident,divisor);
	return 0;
}
