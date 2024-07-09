//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int nums[], int n) {
	    int slow = 0;
	   // int fast = 1;
	    for(int fast = 0; fast < n; fast++){
	        if(nums[fast] != 0){
	            std::swap(nums[fast], nums[slow]);
	            slow++;
	        }
	    }
	}
};