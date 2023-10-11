//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missing number(vector<int>& array, int n) {
        // Your code goes here
        int sum1=n*(n+1)/2,sum2=0;
        for(int i=0;i<n-1;i++){
            sum2=sum2+array[i];
        }
        return sum1-sum2;
    }
};


// } Driver Code Ends
