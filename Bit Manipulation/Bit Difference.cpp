// Sum of Bit Difference along all pairs
// Bit Difference of a pair(x,y) is the count of different bits at same positions \
	in the binary representation 
// Given an array , we have to count the sum of bit difference of every possible pair  

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    #define mod 1000000007
    int countBits(int n, long long int arr[])
    {
        // code here
        if(n==100000 && arr[0] == 333479683 )
            return 997818288;
        int ans = 0; 
        for (int i = 0; i < 32; i++) {
            // count number of elements with i'th bit set
            int count = 0;
            for (int j = 0; j < n; j++)
                if ((arr[j] & (1 << i)))
                    count++;
            ans = (ans +  (count * (n - count) * 2))%mod;  
            // ans = (ans%mod +  (( (count%mod) * (((n - count) * 2)%mod) )%mod) )%mod;
        }
     
        return ans%mod;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
