// https://leetcode.com/problems/lucky-numbers-in-a-matrix/submissions/1154532135/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int small, big;
        vector<int> ans;
        for(int i = 0; i < matrix.size(); i++){
            int k = 0;
            small = 999999;             
            for(int j = 0; j < matrix[0].size(); j++){                
                if(small > matrix[i][j]){
                    small = matrix[i][j];
                    k = j;
                }
            }
            big = small;
            for(int j = 0; j < matrix.size(); j++){
                big = max(big, matrix[j][k]);
            }
            if(small == big) {
                ans.push_back(small);
            }
        }
        return ans;
    }
};