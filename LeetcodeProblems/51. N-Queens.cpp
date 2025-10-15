class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<int> perm(n);
        iota(perm.begin(), perm.end(), 0); 
        vector<vector<string>> res;

        do {
            bool ok = true;
            for (int i = 0; i < n && ok; i++)
                for (int j = i+1; j < n && ok; j++)
                    if (abs(perm[i]-perm[j]) == j-i) ok = false;

            if (ok) {
                vector<string> board(n, string(n, '.'));
                for (int i = 0; i < n; i++) board[i][perm[i]] = 'Q';
                res.push_back(board);
            }
        } while (next_permutation(perm.begin(), perm.end()));

        return res;
    }
};
