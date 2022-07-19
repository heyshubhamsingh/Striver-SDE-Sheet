class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector <int> Rows(matrix.size(), 1);
        vector <int> Columns((matrix.at(0)).size(), 1);
        
        
        for(int i=0; i< matrix.size(); i++){
            for(int j=0 ; j< (matrix.at(0)).size(); j++){
                if(matrix[i][j] == 0){
                    Rows.at(i) = 0;
                    Columns.at(j) = 0;
                }
            }
        }
                             
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j< (matrix.at(0)).size(); j++){
                if(Rows.at(i) == 0 || Columns.at(j) == 0){
                    matrix[i][j] = 0;
                }
            }
        }
                             
                             
    }
    
};