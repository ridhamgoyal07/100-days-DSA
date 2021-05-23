// Find position of the only set bit

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N==0 || ((N & (N-1))!=0) )
            return -1 ; 
        int pos = N & (~(N-1));
        if((pos & (pos-1))!=0){
            return -1;
        }else{
            int cnt  = 0  ;
            while(pos){
                cnt++;
                pos >>= 1;
            }
            return cnt;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
