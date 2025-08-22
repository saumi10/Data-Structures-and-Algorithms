#include<bits/stdc++.h>
using namespace std;
void rotateBy90(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int i=0; i<n;i++){
        for(int j=i;j<n;j++){
            if(i!=j){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;

            }
        }
    }
    for(auto &row:matrix){
        reverse(row.begin(), row.end());
    }

    
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    rotateBy90(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}