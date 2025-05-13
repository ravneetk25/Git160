//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
         int max=arr[0];
         int second=-1;
        int n= arr.size();
        
        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        
        }
        for(int i=0; i<n; i++){
            if(arr[i]>second && arr[i]!=max){
                second=arr[i];
            }
        }
        return second;
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends