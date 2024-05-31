class Solution
{
    void swap(int &a, int &b)
    {
        if (a == b)
            return;

        a = a + b;
        b = a - b;
        a = a - b;
    }

public:
    void rotate(vector<vector<int>> &matrix)
    {
        int size = matrix[0].size();

        int i, j, k, l;

        for (i = 0, j = (size - 1); i < size - 1; i++, j--)
        {
            for (k = 0, l = size - 1; k < size - i; k++, l--)
                swap(matrix[i][k], matrix[l][j]);
        }

        for (i = 0, j = (size - 1); i < (size / 2); i++, j--)
        {
            for (k = 0; k < size; k++)
                swap(matrix[i][k], matrix[j][k]);
        }
    }
};
