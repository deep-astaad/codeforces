class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col=false,row=false;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==0){
                row=true;
                break;
            }
        }
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[0][j]==0){
                col=true;
                break;
            }
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
       
        for(int j=1;j<matrix[0].size();j++){
            if(matrix[0][j]==0){
                for(int i=0;i<matrix.size();i++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++){
            if(matrix[i][0]==0){
                for(int j=0;j<matrix[0].size();j++){
                    matrix[i][j]=0;
                }
            }
        }
        if(col){
            for(int i=0;i<matrix[0].size();i++){
                matrix[0][i]=0;
            }
        }
        if(row){
            for(int i=0;i<matrix.size();i++){
                matrix[i][0]=0;
            }
        }
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==0){
        //             for(int k=0;k<matrix.size();k++){
        //                 if(matrix[k][j]!=0){
        //                     matrix[k][j]=-1;
        //                 }
        //             }
        //             for(int k=0;k<matrix[0].size();k++){
        //                 if(matrix[i][k]!=0){
        //                     matrix[i][k]=-1;
        //                 }
        //             }
        //         }
        //     }
        // }
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==-1){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        // unordered_set<int> row,col;
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==0){
        //             row.insert(i);
        //             col.insert(j);
        //         }
        //     }
        // }
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(row.find(i)!=row.end() || col.find(j)!=col.end()){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        return ;
    }
};