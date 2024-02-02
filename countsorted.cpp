// https://www.geeksforgeeks.org/problems/count-sorted-rows2702/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   bool isIncreasing(vector<int>&v){
        for(int i=1;i<v.size();i++){
            if(v[i]<=v[i-1]) return false;
        }
        return true;
    }
    bool isDecreasing(vector<int>&v){
        for(int i=1;i<v.size();i++){
            if(v[i]>=v[i-1]) return false;
        }
        return true;
    }
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
       int ans=0;
        for(int i=0;i<N;i++){
            if(isIncreasing(Mat[i]) || isDecreasing(Mat[i])) ans++;
        }
        return ans; // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    }
}