//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	 public:
    	void util(string s, int k, set<string> &ans, int n){
        	if(k==n-1){
            	ans.insert(s);
            	return;
        	}
        	for(int i=k; i<n; i++){
            	swap(s[i], s[k]);
            // 	cout<< "Recursion i="<<i<<" k="<<k<<endl;
            	util(s, k+1, ans, n);
            // 	cout<< "backtracking i="<<i<<" k="<<k<<endl;
            	swap(s[i], s[k]);
        	}
    	}
   	 vector<string> find_permutation(string S)
   	 {
   	 	set<string> ans;
   	 	util(S, 0, ans, S.length());
   	 	vector<string> res(ans.begin(), ans.end());
   	 	return res;
   	 }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends