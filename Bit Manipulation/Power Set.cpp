//Power Set
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int len= s.length();
		    vector<string> rs;
		    for(int i=0;i<(pow(2,len));i++){
		        string ss = "";
		        for(int j=0;j<len;j++){
		            if(i&(1<<j)){
		                ss += s[j];
		            }
		        }
		        if(ss!=""){
		            rs.push_back(ss);
		        }
		        
		    }
		    sort(rs.begin(), rs.end());
		    return rs;
		    
		    
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends
