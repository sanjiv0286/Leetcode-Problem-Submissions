class Solution
{
public:
    void convert(vector<vector<char>> &b, int n, int m)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (b[i][j] == 'O')
                {
                    b[i][j] = 'X';
                }
                else if (b[i][j] == 'B')
                {
                    b[i][j] = 'O';
                }
            }
        }
    }

    void dfs(int n, int m, int i, int j, vector<vector<char>> &b)
    {
         if (i < 0 || i >= n || j < 0 || j >= m || b[i][j] != 'O')
    {
        return;
    }
    b[i][j] = 'B';
    
        dfs(n, m, i - 1, j, b);
        dfs(n, m, i + 1, j, b);
        dfs(n, m, i, j - 1, b);
        dfs(n, m, i, j + 1, b);
    }

    void solve(vector<vector<char>> &b)
    {
        if (b.empty())
        {
            return;
        }
        int n = b.size();
        int m = b[0].size();
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            if (b[i][j] == 'O')
            {
                dfs(n, m, i, j, b);
            }
            j = m - 1;
            if (b[i][j] == 'O')
            {
                dfs(n, m, i, j, b);
            }
        }
        for (int j = 0; j < m - 1; j++)
        {
            int i = 0;
            if (b[i][j] == 'O')
            {
                dfs(n, m, i, j, b);
            }
            i = n - 1;
            if (b[i][j] == 'O')
            {
                dfs(n, m, i, j, b);
            }
        }
        convert(b, n, m);
    }
};