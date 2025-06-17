#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>&arr, int n, int m){
    int maxVal = INT_MIN;
    for (auto &row : arr) maxVal = max(maxVal, *max_element(row.begin(), row.end()));    

    unordered_map<int,int>row;
    unordered_map<int,int>column;

    for (int i=0;i<arr.size();i++) {
        for (int j = 0;j <arr[i].size();j++) {
            if (arr[i][j]==maxVal) {
                row[i]++;
                column[j]++;
            }
        }
    }

     int maxRowIndex = 0, maxColIndex = 0, maxHit = 0;
    for (auto &[r, rf] : row) {
        for (auto &[c, cf] : column) {
            int overlap = (arr[r][c] == maxVal ? 1 : 0);
            int totalHit = rf + cf - overlap;
            if (totalHit > maxHit) {
                maxHit = totalHit;
                maxRowIndex = r;
                maxColIndex = c;
            }
        }
    }


    
        for(int j=0;j<arr[maxRowIndex].size();j++){
            if(arr[maxRowIndex][j]==maxVal){
                arr[maxRowIndex][j]--;
            }
        }
    
    for (int i = 0; i < arr.size(); i++) {
         if (i == maxRowIndex) continue;
        if (arr[i][maxColIndex] == maxVal) {
            arr[i][maxColIndex]--;
        }
    }
    maxVal = INT_MIN;
    for (auto &row : arr)
        maxVal = max(maxVal, *max_element(row.begin(), row.end()));    

    return maxVal;
    



    
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int ans=solve(arr,n,m);
        cout<<ans<<endl;
    }
}