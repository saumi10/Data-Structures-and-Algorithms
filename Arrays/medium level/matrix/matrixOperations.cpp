#include<bits/stdc++.h>
using namespace std;
pair<int,int> endPair(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int i=0;
    int j=0;
    bool left=false;
    bool right=true;
    bool up=false;
    bool down=false;
    while((i<n && j<m) && (i>=0 && j>=0)){
        if(matrix[i][j]==0){
            if(left==true){
                j--;
            }
            else if(right==true){
                j++;
            }
            else if(up==true){
                i--;
            }
            else{
                i++;
            }
        }
        else{
            if(left==true){
                up=true;
                left=false;
                matrix[i][j]=0;
                i--;
            }
            else if(right==true){
                down=true;
                right=false;
                matrix[i][j]=0;
                i++;
            }
            else if(up==true){
                right=true;
                up=false;
                matrix[i][j]=0;
                j++;
            }
            else{
                down=false;
                left=true;
                matrix[i][j]=0;
                j--;
            }
        }
    
    }
    if(i==n){
        return {n-1,j};
    }
    else if(i<0){
        return {0,j};
    }
    else if(j==m){
        return {i,m-1};
    }
    else{
        return {i,0};
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
    pair<int,int> ans=endPair(matrix);
    cout<<ans.first<<","<<ans.second<<endl;
}