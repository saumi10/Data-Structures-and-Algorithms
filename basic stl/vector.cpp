#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    int n=10;
    vector<int> v(5);
    for(int i = 0; i < v.size();i++){ //adding elements in the vector
        v[i]=n;
        n=n+10;
       // cout<<n<<endl;
    }

    //printing vector elements
    vector<int>::iterator it=v.begin(); //vector<int>::reverse_iterator it=v.rbegin();
    for(int i = 0; i < v.size(); i++){
        cout<<*(it)<<" ";
        it++;
    }
    cout<<endl;

    //better way to print the entire vector
    for (vector<int>::iterator iter=v.begin(); iter!=v.end(); iter++){ //v.end() points to memory after last element and not last element's memory
        cout<< *(iter)<<" ";
    } 
    cout<<endl;

    //big syntax reduction using keyword "auto"
    for (auto iter=v.begin(); iter!=v.end(); iter++){ //v.end() points to memory after last element and not last element's memory
        cout<< *(iter)<<" ";
    } 
    cout<<endl;

    //another way (*for each* loop)
    for(auto it : v){  //here "it" is int so no need to use *(it) . 
        cout<< it << " ";
    }
    cout<<endl;

    cout<<v.at(0)<<endl;//element at 0 index
    cout<<v.back()<<" ";//prints last element of vector
    cout<<endl;



}
 


int main(){
    int n;  
    cin>>n;
    explainVector();  
    
    return 0;
} 
