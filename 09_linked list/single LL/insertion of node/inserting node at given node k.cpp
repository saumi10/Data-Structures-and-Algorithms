//INSERTING NODE AT Kth ELEMENT
//k goes from 1 to N+1


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

//insert node function
Node<int> * insertNode(Node<int> * head , int k){
    if(head==NULL){
        if(k==1){
            return new Node<int>(100);
        }
        else return NULL;
    } 

    if(k==1){
        return new Node<int>(100,head);
        
    }
    int count=0;
    Node<int>* temp=head;
    while(temp!=NULL){
        count++;
        if(count==(k-1)){
            Node<int> *newNode=new Node<int>(100,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
    /*
    Node<int> * temp=head;
    Node<int> *prev=NULL;
    int count=1;
    while(temp!=NULL){
        if(count==k){
            Node<int> *newNode=new Node<int>(100,temp);
            prev->next=newNode;
            return head;
        }
        prev=temp;
        temp=temp->next;
        count++;

    }
    prev->next=new Node<int>(100,NULL);
    return head;
    */
    

}
Node<int> * insertBeforeValue(Node<int> * head , int val ,int valToInsert){
    if(head==NULL){
       return NULL;
    } 

    if(head->data==val){
        return new Node<int>(valToInsert,head);
        
    }
    
    Node<int>* temp=head;
    while(temp->next!=NULL){
        
        if(temp->next->data==val){
            Node<int> *newNode=new Node<int>(valToInsert,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> v={1,2,3,4};
    Node<int> * head=new Node<int> (v[0]); // Create the head node
    Node<int> * mover=head; // Pointer to track the last node
    for(int i=1;i<v.size();i++){
        Node<int> * temp=new Node<int> (v[i]);    // Create a new node
        mover->next=temp;    // Link the previous node to the new one
        mover=temp; // Move the pointer to the new node
    }
    cout<<"enter node value k (1 to N+1)"<<endl;
    int k;
    cin>>k;
    //head= insertNode(head,k);
    head= insertBeforeValue(head,1,798);
    
    

    // Now ,traversing and printing the LL
    print(head);
    
    
}