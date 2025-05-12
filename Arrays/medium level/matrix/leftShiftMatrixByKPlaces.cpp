#include<bits/stdc++.h>
using namespace std;



vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int rows = mat.size();
        int columns = mat[0].size();
        k = k % columns; // v v important step , to avoid k from being bigger than no. of columns and avoid unnecessary rotations 
        for(int i=0;i<rows;i++){
            reverse(mat[i].begin(), mat[i].begin()+k);
            reverse(mat[i].begin()+k,mat[i].end());
            reverse(mat[i].begin(), mat[i].end());
        
        }
        return mat;
        
        
    }

int main() {
  // Create a 2D matrix
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k;
    cin>>k;


  vector<vector<int>> matrixx=rotateMatrix(k,matrix);

  // Print the reversed matrix
  for (int i = 0; i < matrixx.size(); i++) {
    for (int j = 0; j < matrixx[i].size(); j++) {
      cout << matrixx[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}