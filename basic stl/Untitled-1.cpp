#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    int n=10;
    vector<int> v(5);
    for(int i = 0; i < v.size();i++){
        v[i]=n;
        n=n+10;
        cout<<n<<endl;
    }
    vector<int>::iterator it=v.begin();
    for(int i = 0; i < v.size()+1; i++){
        cout<<*(it)<<" ";
        it++;

    }

}



int main(){
    
    explainVector();  
    return 0;
} 
