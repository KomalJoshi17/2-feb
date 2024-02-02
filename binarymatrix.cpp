// https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
      int n = mat.size();
        int m = mat[0].size();

        // Arrays to store the count of 1s in each row and each column
        int row[n];
        int col[m];

        // Initialize the count arrays to zero
        for(int i = 0; i < n; i++)
            row[i] = 0;
        for(int j = 0; j < m; j++)
            col[j] = 0;

        // Count the number of 1s in each row and each column
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    row[i]++;
                    col[j]++;
                }
            }
        }

        // Count the number of special positions where there is only one 1 in both its row and column
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1) {
                    ans++;
                }
            }
        }

        // Return the total count of special positions
        return ans;  
    }
};