#include <bits/stdc++.h>
using namespace std;
//optimal solution 
vector<vector<int>> solve(vector<vector<int>>& matrix , int n,int m){
    //matrix row tracker
    //maytrix col tracker
    //col0 t track 0,0 for column j=0
    int col0=1;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(matrix[i][j]==0 ){
                matrix[i][0]=0;//row tracker marking
            //column tracker marking
                if( j!=0){
                    matrix[0][j]=0; 
                } 
                else{
                    col0=0; //other column tracker elements
                }
            }

        }
    }
    //traversing matrix and making elements 0 as per tracker from 1,1 to n,m (not touching tracker elements)
    for(int i=1;i<n;i++){
        for (int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                 if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    
    //finishing up tracker elements , first column tracker, then row tracker
    if (matrix[0][0]==0){
        for(int j=0;j<m;j++){
            matrix[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
    //int n=matrix.size() ; gives no. of rows
    //int m=matrix[0].size(); gives no. of columns


    return matrix;

}


//Better solution
/*vector<vector<int>> solve(vector<vector<int>>& matrix , int n,int m){
    vector<int> col(m,0);
    vector<int> row(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 || col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;

}
*/

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>> matrixAns=solve(matrix,n,m);
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout<<matrixAns[i][j]<<" ";
        }
        cout<<endl;
    }
    
}