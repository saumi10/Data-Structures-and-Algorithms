//DELETION OF HEAD AND TAIL

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



//DELETION OF HEAD
Node<int> * deleteHead(Node<int> * head){
    if(head==NULL) return head; //

    Node<int> * temp=head;
    head=head->next;
    delete temp;
    return head;
}


//DELETION OF TAIL
Node<int> * deleteTail(Node<int> * head){
    if(head==NULL || head->next==NULL) return head;

    Node<int> * temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free (temp->next);
    temp->next=NULL;
    return head;
}


int main(){
    vector<int> v={1,2,3,4,5,90,88,0};
    Node<int> * head=new Node<int> (v[0]); // Create the head node
    Node<int> * mover=head; // Pointer to track the last node
    for(int i=1;i<v.size();i++){
        Node<int> * temp=new Node<int> (v[i]);    // Create a new node
        mover->next=temp;    // Link the previous node to the new one
        mover=temp; // Move the pointer to the new node
    }

    head= deleteHead(head);
    head=deleteTail(head);

    // Now ,traversing and printing the LL
    Node<int> *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}