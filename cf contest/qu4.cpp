#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n,vector<int>& b){
    unordered_map<int,vector<int>>count;
    for(int i=0;i<b.size();i++){
        if(b[i]>n) return {-1};
        count[b[i]].push_back(i);
    }
    vector<int> a(n,0);
    int number=1;
    for (auto &it:count) {
        int val=it.first;
        vector<int>index=it.second;
        if(index.size()%val!=0) {
            return {-1};
        }
        for(int i=0;i<index.size();i+=val) {
            for (int j=0;j<val;j++) {
                a[index[i+j]]=number;
            }
            number++;
        }
    }
    return a;


}    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> a=solve(n,b);
        for(auto it:a){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}