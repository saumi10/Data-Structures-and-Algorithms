//DELETION OF Kth node , can be head, tail or any node

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


//Remove Head
Node<int> * removeHead(Node<int> * head){
    if(head==NULL) return head;

    Node<int> * temp=head;
    head=head->next;
    delete temp;
    return head;
}

//remove Element

//DELETION OF Kth node
Node<int> * deleteKthElement(Node<int> * head , int k){
    if(k<1 || head==NULL){
        return head;
    }
    if(k==1){
        head=removeHead(head);
        return head;
    }

    int count=0;
    Node<int> * temp=head;
    Node<int> * prev=NULL;
    while(temp!=NULL){
    
        count++;
        if(count==k){
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
    vector<int> v={1,2,3,4,5,6,7};
    Node<int> * head=new Node<int> (v[0]); // Create the head node
    Node<int> * mover=head; // Pointer to track the last node
    for(int i=1;i<v.size();i++){
        Node<int> * temp=new Node<int> (v[i]);    // Create a new node
        mover->next=temp;    // Link the previous node to the new one
        mover=temp; // Move the pointer to the new node
    }
    cout<<"enter node K to delete"<<endl;
    int k;
    cin>>k;
    head= deleteKthElement(head,k);
    

    // Now ,traversing and printing the LL
    Node<int> *temp = head;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}