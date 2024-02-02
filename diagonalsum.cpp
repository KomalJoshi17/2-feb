// https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j || i+j==mat.size()-1){
                    ans+=mat[i][j];
                }
            }
        }
        return ans;
    }
};