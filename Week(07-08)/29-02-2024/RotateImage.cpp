// Rotate Image
//link-->https://leetcode.com/problems/rotate-image/description/



class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>v;
     for(int colomn=0;colomn<col;colomn++)
        {
            for(int rows=row-1;rows>=0;rows--)
            {
                v.push_back(matrix[rows][colomn]);
            }
            cout<<endl;
        }
       int count=0;
        for (int  i = 0; i < row; i++)
        {
            for (int  j = 0; j < col; j++)
            {
                matrix[i][j]=v[count];
                count++;
            }
            
        }
        
    }
};