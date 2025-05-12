#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertArr2DLL(vector<int> &arr)
{
    // return type is a ptr
    //(which is pointing to the head)
    //  i.e Node*
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev= temp;
    }
    return head;
}

Node* deleteHead(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=NULL;
    prev->next=NULL;
    delete prev;
    return head;
}
Node* deleteTail(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    prev->next=NULL;
    temp->back=NULL;
    delete temp;
    return head;

}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5,8,5,97,42};
    Node *head = convertArr2DLL(arr);
    //cout << head->data << endl;

    

    head=deleteHead(head);
    head=deleteTail(head);



    

    // Now ,traversing and printing the LL
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " " <<temp->back<< " "<<temp->next<<endl;
        
        temp = temp->next;
        
    }
}