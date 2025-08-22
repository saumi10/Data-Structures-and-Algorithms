#include <bits/stdc++.h>
using namespace std;


void printVec(vector<int> &v){
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void printVecc(vector<vector<int>> &vec){
    
    for(int i=0;i<vec.size();i++){
        cout<<"size:"<<vec[i].size()<<endl;
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
}
int main(){
    /*
    vector<pair<int,int> > v ={{1,2}, {2,3},{3,4}};
    printVec(v);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v);
    */


   //array of vectors mai smjh lo number of rows are fixed(bcoz array) but no of columns can be dynamic(due to vectors)
   int N;
   cin>>N;
   /*vector<int> v[N]; //array of N vectors v0,v1 ,v2...vN-1
   for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x); 
        }
   }
   for(int i=0;i<N;i++){
    printVec(v[i]);
   }
   cout<<v[0][1]; //0th row , 1st column means 0th vector(v0 row)  ka 1st element(column)
    */

   // now to make both row and column dynamic , we can create a vector of vectors

   vector<vector<int> >vec;
   for(int i=0;i<N;i++){
    int n;
    cin>>n;
    vector<int>temp;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        temp.push_back(x);

    }
    vec.push_back(temp);

   }
   for(int i=0;i<N;i++){
    
   }
    printVecc(vec);
   

}