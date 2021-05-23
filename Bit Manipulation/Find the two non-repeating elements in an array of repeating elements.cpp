// Find the two non-repeating elements in an array of repeating elements

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xoR = 0 ;
        for(int x:nums){
            xoR = xoR ^ x;
        }
        int lastSetBit = xoR & (~(xoR-1));
        int firstNum = 0; 
        int secondNum = 0;
        for(int x: nums){
            if((x & lastSetBit)!= 0){
                firstNum ^= x; 
            }else{
                secondNum ^= x;
            }
        }
        vector<int> v{firstNum,secondNum};
        sort(v.begin() , v.end());
        return v;
        
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
