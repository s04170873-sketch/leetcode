class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;

        int t = 0;
        int RowBegin = 0;
        int RowEnd = matrix.size() - 1;
        int column = 0;
        int columnEnd = matrix[0].size() - 1;

        while (RowBegin <= RowEnd && t <= columnEnd) {

            // 1. Left → Right
            column = t;
            while (column <= columnEnd) {
                res.push_back(matrix[RowBegin][column++]);
            }
            RowBegin++;

            // 2. Top → Bottom
            int row = RowBegin;
            while (row <= RowEnd) {
                res.push_back(matrix[row++][columnEnd]);
            }
            columnEnd--;

            // 3. Right → Left
            if (RowBegin <= RowEnd) {
                column = columnEnd;

                while (column >= t) {
                    res.push_back(matrix[RowEnd][column--]);
                }
                RowEnd--;
            }

            // 4. Bottom → Top
            if (t <= columnEnd) {
                row = RowEnd;

                while (row >= RowBegin) {
                    res.push_back(matrix[row--][t]);
                }
                t++;
            }
        }

        return res;
    }
};