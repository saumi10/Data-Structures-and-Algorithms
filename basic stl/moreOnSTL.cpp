#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    
    ls.emplace_front(1);
    ls.push_front(5);
    //rest fuctions same as vector
    for (int x : ls) {
    cout << x << " ";
  }
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(4);
    
    dq.emplace_front(1);
    dq.push_front(5);
    cout<<dq.back()<<endl;

    dq.pop_back();
    dq.pop_front();

    
    //rest fuctions same as vector
    for (int x : dq) {
    cout << x << " ";
  }
}

void explainStack(){ //O(1)  , LIFO (LAST IN FIRST OUT)
    stack<int> st,st1,st2;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(7);
    st.push(9); //{9,7,3,2,1}

    cout<<st.top()<<endl<<st.size()<<endl;//prints 9

    st.pop();//pops 9 out of the stack since LAST IN FIRST OUT
    cout<<st.size()<<endl;
    
    while (!st.empty()) {
        cout << st.top() <<" ";
        st.pop();
        //IMPORTANT:since pop doesnt return the elements therefore used top to access elements then pop TO REMOVE ELEMENTS
    }
    cout<<endl<<st.size()<<endl<<st.empty()<<endl;

    for(int i=0;i<=5;i++){
        st2.push(i);
        st1.push(3);
    }
    st1.swap(st2);

    while (!st1.empty()) {
        cout << st1.top() <<" ";
        st1.pop();
    }
    cout<<endl;

    while (!st2.empty()) {
        cout << st2.top() <<" ";
        st2.pop();
    }
    


}

void explainQueue(){ //FIFO (FIRST IN FIRST OUT) , O(1)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4); //{1,2,3,4}

    q.back()+=5;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    //rest functions same as stack ,swap n all

}

void explainPriorityQueue(){  //largest element stays on top and comes out if pq is popped
    priority_queue<int> pq;  //also called max heap
    pq.push(2);
    pq.push(5);
    pq.push(6);
    pq.push(1);
    pq.emplace(3);
    pq.emplace(10); // {10,6,5,3,2,1} no matter what order you push , it will be arranged automatically like this in order

    cout<<pq.top()<<endl;

    while (!pq.empty()) {
        cout << pq.top() <<" ";
        pq.pop();
    }
    cout<<endl;
    //size , swap , empty same as others

    //what if we want a priority queue that stores the minimum number on top

    priority_queue<int , vector<int> , greater<int>>pq1; //also called min heap
    pq1.push(5);
    pq1.push(2);
    pq1.push(9); 
    pq1.emplace(6);//{2,5,6,9}

    while (!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

    //push , pop = log n REMEMBER
    //top = O(1)

}

/*void explainSet(){ // stores in sorted order and stores UNIQUE
    set<int> mySet;
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(2);
    mySet.emplace(5);
    mySet.emplace(8);
    mySet.insert(3);
    mySet.emplace(5); //{1,2,3,5,8}
    //other functions same as vector

    //{1,2,3,4,5}
    auto it = mySet.find(3);
    //returns iterator that points to 3

    //{1,2,3,4,5}
    auto it = mySet.find(6);
    //returns iterator that points to right after the end , that is , right after the last element

    mySet.erase(5);//erases 5 // erasing element takes logarithmic time

    int cnt =mySet.count(8); //since set contains unique elements so this will return either 1(if element is present) or 0 (if element not there)

    auto it =mySet.find(3);
    mySet.erase(it); //erasing it takes constant time 

    //{1,2,3,4,5,6}
    auto it1=mySet.find(2);
    auto it2=mySet.find(5);

    mySet.erase(it1, it2); //erases 2,3,4 , i.e [start , end) so, {1,5,6} remains

    //lower_bound() and upper_bound here works same as in vector
    //syntax is as follows
    auto it  = mySet.lower_bound(2);
    auto it  = mySet.upper_bound(3);
    




}*/

/*void explainMultiSet(){
    //everthing same as set except that it stores duplicate elements too
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1); //erases all instances of 1

    int cnt = ms.count(1);//counts all 1s

    //if you want to earse only one 1 
    ms.erase(ms.find(1));

    
    //{1,1,1,1} here to erase from [start to end)
    auto it = ms.find(1);
    advance(it, 2); /* Now the iterator is one position ahead of where you want it to be. This is because in the erase() function it takes from the start till one element less than the end that we specified.
    ms.erase(ms.find(1), it); // Now we have the iterator in the correct place so it will erase properly and we will be left with only one 1.

}*/

void explainUnorderedSet(){
    unordered_set<int> ust;
    //lower and upper bound function do not work rest work the same as above
    //does not store in any order but stores UNIQUE
    //has better complexity than set in most cases except when collision happens
}

bool comp(pair<int , int>p1 , pair<int , int> p2){
    if(p1.second<p2.second) return true;
    
    if(p1.second>p2.second) return false;
    
    if(p1.first>p2.first) return true;
    
    return false;
    
    
}

void explainExtra(){
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    /*sort it according to second element 
    If second element is same then sort according to first element but in descending order*/
    sort(a, a+3,comp);

    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
        cout<<"{"<<a[i].first<<", "<<a[i].second<<"} ";
    }

}

void explainMoreStuff(){
    int num=7;
    int cnt=__builtin_popcount(num); //7 in binary is 111 , so __builtin_popcount gives the number of set bits , i.e. no. of 1s 
    cout<<cnt<<endl;

    long long num2=123456789637;
    int cnt2=__builtin_popcountll(num2);
    cout<<cnt2<<endl;

    string s="231";
    sort(s.begin(), s.end()); //sort ni krenge toh 231,312 and 321 print hoga bs 

    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
    
    int a[]={1,3,5,10,7};
    int maxi= *max_element(a , a+5);
    cout<<maxi; //similarly min element also exists and star means it will give the value of element

}

int main(){
    explainMoreStuff();
}