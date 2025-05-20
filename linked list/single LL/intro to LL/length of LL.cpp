#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(){
        this->data=0;
        this->next=NULL;

    }
    Node(T data1){
        this->data=data1;
        this->next=NULL;
    }
    Node(T data1, T *next1){
        this->data=data1;
        this->next=next1;
    }
};

Node<int> *convertArrtoLL(vector<int> &arr){
    Node<int>* head=new Node<int>(arr[0]);
    Node<int> *mover=head;
    for(int i=1;i<arr.size();i++){
        Node<int> *temp=new Node<int>(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;


}

int findLengthofLL(Node<int> * head){
    //NEVER TAMPER WITH GIVEN HEAD
    Node<int> *temp=head;
    int count=0;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
}
int main(){
    vector<int>arr={12,8,36,3,9,1,92,64,73};
    Node<int>* head=convertArrtoLL(arr);
    int length=findLengthofLL(head);
    cout<<length;
}