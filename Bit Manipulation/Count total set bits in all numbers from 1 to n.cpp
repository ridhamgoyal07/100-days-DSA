//Count total set bits in all numbers from 1 to n
// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        n++;
        int cnt = n/2;
        int pow2 = 2 ; 
        while(pow2<=n){
            int pair = n/pow2;
            cnt += pair/2 * pow2;
            cnt += (pair&1)?(n%pow2):0;
            
            pow2 = pow2<<1;
        }
        return cnt;
    }
};
// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends
