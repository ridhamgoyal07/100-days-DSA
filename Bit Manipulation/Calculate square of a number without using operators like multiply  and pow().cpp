// Calculate square of a number without using *, / and pow()

// https://ide.geeksforgeeks.org/hi8LQ33e0H
#include <bits/stdc++.h>
using namespace std;

long long int square(long long int num){
    int rs = 0 ;
    if(num<0)
        num = -num;
    int times = num ; 
    
    while(times > 0 ){
        int possibleShift = 0 , currTimes = 1;
        while((currTimes << 1 )<=times){
            currTimes = currTimes << 1;
            ++possibleShift;
        }
        rs += num << possibleShift;
        times = times - currTimes;
        
    }
    return rs;
    
    
}


int main() {
    long long int num;
    cin>>num;
    
    cout<<square(num);
	return 0;
}
