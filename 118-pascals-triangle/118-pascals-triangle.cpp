class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector < vector<int> > v1(numRows);
        int defaultValue = 1;
        
        for(int i=0, k=1; i< numRows; i++, k++){
            v1[i].resize(i+1);
            for(int j=0; j<k; j++){
                if(j == 0 ||  i == j){
                    v1[i][j] = defaultValue;
                }
                
                else{
                    v1[i][j]= v1[i-1][j-1] + v1[i-1][j];
                }
            }
        }
        return v1;
    }
};