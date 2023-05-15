//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
          long long ret = 0;
        long long num = X;
        
        for(int i = 0; i < 32; i++) {
            ret = ret | (num % 2);
            num = num >> 1;
            if(i != 31) {
                ret = ret << 1;
            }
        }
        
        return ret;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends