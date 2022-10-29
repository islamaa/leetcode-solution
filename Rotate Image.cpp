class solution{
public:
  void rotate(vector<vector<int>>& matrix){
    int m=matrix.size();
    int n=matrix[0].size();
    for(int i=0;i<m;++i){
    for(int j=0;j<i;++j){
    swap(matrix[i][j],matrix[j][i]);
    }
    }
    for(int i=0;i<m;++i){
    for(int j=0;j<n-1-j;++j){
    
    swap(matrix[i][j],matrix[i][n-1-j]);
    }
    }
  
  }
};
