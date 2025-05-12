//Insertion of node at head

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(T data, Node<T>* next)
    {
        this->data = data;
        this->next = next;
    }
};


void print(Node<int> *head){
    Node<int> *temp = head;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//insert head function
Node<int> * insertHead(Node<int> * head , int k){
    if(head==NULL) return new Node<int> (k,NULL);
    Node<int> * temp=new Node<int> (k);
    temp->next=head;
    return temp;

}


int main(){
    vector<int> v={1,2,3,4,5,6,7,53,38687,73};
    Node<int> * head=new Node<int> (v[0]); // Create the head node
    Node<int> * mover=head; // Pointer to track the last node
    for(int i=1;i<v.size();i++){
        Node<int> * temp=new Node<int> (v[i]);    // Create a new node
        mover->next=temp;    // Link the previous node to the new one
        mover=temp; // Move the pointer to the new node
    }
    cout<<"enter value to be inserted at head"<<endl;
    int k;
    cin>>k;
    head= insertHead(head,k);
    //or
    //head=new Node<int>(100,head);
    

    // Now ,traversing and printing the LL
    print(head);
    
    
}