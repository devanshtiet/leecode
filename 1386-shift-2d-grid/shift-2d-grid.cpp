class Solution {
public:
    vector<vector<int>> kaamkrdo(vector<vector<int>> res) {
        int m = res.size();
        int n = res[0].size();

        vector<vector<int>> temp = res;

        // First element gets the last element
        res[0][0] = temp[m - 1][n - 1];

        // Shift every element
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (i == 0 && j == 0)
                    continue;

                if (j == 0)
                    res[i][j] = temp[i - 1][n - 1];
                else
                    res[i][j] = temp[i][j - 1];
            }
        }

        return res;
    }

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> result = grid;

        for (int i = 0; i < k; i++) {
            result = kaamkrdo(result);
        }

        return result;
    }
};