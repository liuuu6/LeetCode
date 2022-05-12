class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> yanghui(rowIndex+1);
        for(int i = 0;i<= rowIndex;i++){
            yanghui[i].resize(i+1);yanghui[i][0]=yanghui[i][i]=1;
            
            for(int j = 1;j<i;j++){
                
                yanghui[i][j]=yanghui[i-1][j]+yanghui[i-1][j-1];
            }
        }
        return yanghui[rowIndex];
    }
};



