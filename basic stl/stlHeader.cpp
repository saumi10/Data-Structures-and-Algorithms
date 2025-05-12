#include<bits/stdc++.h>
using namespace std;

//pairs (found inside utility library)
void explainPair(){
    
    pair<int,string> p;
    //p=make_pair(2,"abc")
    p={2,"abc"};
    pair<int,string> &p1=p;
    p1.first=5; //&p1 ki vajah se p ki copy ni gyi p1 mai, direct p gya ,so changes krne pr p ki value mai change hogya
    cout<<p.first<<" "<<p.second<<endl;
    


    pair<int,pair<int,int> > q={1,{3,4}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    //array of pairs
    pair<int,int>arr[]={ {1,2}, {3,4}, {5,6}, {7,8}}; //pair as a data type
    for(int i=0;i<4;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }

    pair<int,int> mypair;
    cin>>mypair.second;
    cout<<mypair.second;
}

int main(){
    
    explainPair();  
    return 0;
} 