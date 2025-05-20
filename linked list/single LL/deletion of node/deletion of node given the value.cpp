//DELETION OF node , given the element value

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
    Node(T data, T *next)
    {
        this->data = data;
        this->next = next;
    }
};




//DELETION OF Kth node
Node<int> * deleteElement(Node<int> * head , int el){
    if(head==NULL || head->next==NULL){
        return head;
    }
    if(head->data==el){
        Node<int> *temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    
    Node<int> *temp=head;
    Node<int> *prev=NULL;
    while(temp!=NULL){
       
        if(temp->data==el){
            prev->next=temp->next;
            delete temp;
            break;

        }
        prev=temp;
        temp=temp->next;
    }
    return head;
    
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
    cout<<"enter element value whose node is to be deleted"<<endl;
    int k;
    cin>>k;
    head= deleteElement(head,k);
    

    // Now ,traversing and printing the LL
    Node<int> *temp = head;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}