//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
//values are not distinct in this problem
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        vector<int> temp;
        int n = arr.size();
        if(n < 4)return ans;
        int sum;
        //fix one then fix two then greedy
        sort(arr.begin(),arr.end());
        for(int i = 0 ; i < n-3; i++){
            //to remove duplicates
            if(i > 0 && arr[i] == arr[i-1]){
                continue;
            }
            for(int j = i+1 ; j < n-2; j++){
                //to remove duplicates
                //imp j > i+1 ***
                if(j > i+1 && arr[j] == arr[j-1]){
                    continue;
                }
                sum = k - arr[j] - arr[i];
                int s = j+1;
                int e = n-1;
                while(s<e){
                    if(arr[s] + arr[e] == sum){
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[s]);
                        temp.push_back(arr[e]);
                        ans.push_back(temp);
                        temp.clear();
                        s++;
                        e--;
                        while(s<e && arr[s] == arr[s-1]){
                            s++;
                        }
                        while(s<e && arr[e] == arr[e+1]){
                            e--;
                        }
                    }else if(arr[s] + arr[e] > sum){
                        e--;
                    }else{
                        s++;
                    }
                }
            }
        }
            return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends